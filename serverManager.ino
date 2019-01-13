void connectWiFi() {
  /*WiFi.begin(ssid, password);
    Serial.println();

    // Wait for connection
    while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    }
    Serial.println("");
    Serial.print("Connected to ");
    Serial.println(ssid);
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());

    if (mdns.begin("esp8266", WiFi.localIP())) {
    Serial.println("MDNS responder started");
    }
  */

  Serial.print("Configuring access point...");
  /* You can remove the password parameter if you want the AP to be open. */
  WiFi.softAP(ssid, password);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);

}

void setupServer() {
  server.on("/", handleRoot);
  server.on("/irsend", handleIrSend);
  server.on("/irlearn", handleIrLearn);
  server.on("/css", handleCSS);

  server.onNotFound(handleNotFound);

  server.begin();
  Serial.println("HTTP server started");
}

void handleRoot() {
  handleIrSend();
}

void handleNotFound() {
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET) ? "GET" : "POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i = 0; i < server.args(); i++) {
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
}

void handleCSS() {
  server.send(200, "text/css", String(CSS));
}

void handleIrSend() {
  byte dev = 0;
  byte ir_mode = 0;
  String sw_name = "null";
  decode_results data;

  for (uint8_t i = 0; i < server.args(); i++) {
    if (server.argName(i) == "dev") dev = server.arg(i).toInt() - 1;
    if (server.argName(i) == "sw") sw_name = server.arg(i);
  }
  if (sw_name.compareTo("null") != 0) {
    data = readIrData(dev, sw_name);
    IrSend(data);
  }
  server.send(200, "text/html", makeHTML(dev, ir_mode));
}

void handleIrLearn() {
  byte dev = 0;
  byte ir_mode = 1;
  String sw_name = "null";
  decode_results data;

  for (uint8_t i = 0; i < server.args(); i++) {
    if (server.argName(i) == "dev") dev = server.arg(i).toInt() - 1;
    if (server.argName(i) == "sw") sw_name = server.arg(i);
  }

  if (sw_name.compareTo("null") != 0) {
    data = IrLearn();
    writeIrData(dev, sw_name, data);
  }
  server.send(200, "text/html", makeHTML(dev, ir_mode));

  delay(7000);
  IrSend(data);
}


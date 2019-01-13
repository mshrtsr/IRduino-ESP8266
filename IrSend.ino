void IrSend(decode_results data) {
  irsend.begin();

  switch (data.decode_type) {
    case UNKNOWN:
      Serial.print("UNKNOWN");
      break ;
    case SHARP:
      Serial.print("SHARP");
      irsend.sendSharp(data.sharpAddress, data.value);
      break ;
    case JVC:
      Serial.print("JVC");
      irsend.sendJVC(data.value, data.bits, 0);
      delayMicroseconds(50);
      irsend.sendJVC(data.value, data.bits, 1);
      delayMicroseconds(50);
      break ;
    case SANYO:
      Serial.print("SANYO");
      break ;
    case MITSUBISHI:
      Serial.print("MITSUBISHI");
      break ;
    case PANASONIC:
      Serial.print("PANASONIC");
      irsend.sendPanasonic(data.panasonicAddress, data.value);
      break ;
    /////////////////////
    default:
    Serial.println("Default");
    case NEC:
      Serial.print("NEC");
    case SONY:
      Serial.print("SONY");
    case RC5:
      Serial.print("RC5");
    case RC6:
      Serial.print("RC6");
    case DISH:
      Serial.print("DISH");
    case SAMSUNG:
      Serial.print("SAMSUNG");
    case LG:
      Serial.print("LG");
    case WHYNTER:
      Serial.print("WHYNTER");
      irsend.send(data.decode_type, data.value, data.bits);
      break ;
  }
  delay(1000);

}


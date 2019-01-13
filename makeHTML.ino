
char dev1HTML[] = {
  "<input type='hidden' name='dev' value='1'>"
  "<div>"
  "<button id='PowerButton' type='submit' name='sw' value='pw' />電源</button>"
  "</div>"
  "<br>"
  "<div class='ChNum'>"
  "<div class=''>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch1' />1</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch2' />2</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch3' />3</button>"
  "</div>"
  "<div class=''>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch4' />4</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch5' />5</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch6' />6</button>"
  "</div>"
  "<div class=''>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch7' />7</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch8' />8</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch9' />9</button>"
  "</div>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch0' />0</button>"
  "</div>"
  "<div class='Foot'>"
  "<div class=''>"
  "<button class='VolButton' type='submit' name='sw' value='VolUp' />Vol+</button>"
  "<br>"
  "<button class='VolButton' type='submit' name='sw' value='VolDn' />Vol-</button>"
  "</div>"
  "<div class=''>"
  "<button class='ChButton' type='submit' name='sw' value='ChUp' />Ch+</button>"
  "<br>"
  "<button class='ChButton' type='submit' name='sw' value='ChDn' />Ch-</button>"
  "</div>"
  "</div>"
};



char dev2HTML[] = {
  "<input type='hidden' name='dev' value='2'>"
  "<div>"
  "<button id='PowerButton' type='submit' name='sw' value='pw' />電源</button>"
  "</div>"
  "<br>"
  "<div class='ChNum'>"
  "<div class=''>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch1' />1</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch2' />2</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch3' />3</button>"
  "</div>"
  "<div class=''>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch4' />4</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch5' />5</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch6' />6</button>"
  "</div>"
  "<div class=''>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch7' />7</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch8' />8</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch9' />9</button>"
  "</div>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch0' />0</button>"
  "</div>"
  "<div class='Foot'>"
  "<div class=''>"
  "<button class='VolButton' type='submit' name='sw' value='VolUp' />Vol+</button>"
  "<br>"
  "<button class='VolButton' type='submit' name='sw' value='VolDn' />Vol-</button>"
  "</div>"
  "<div class=''>"
  "<button class='ChButton' type='submit' name='sw' value='ChUp' />Ch+</button>"
  "<br>"
  "<button class='ChButton' type='submit' name='sw' value='ChDn' />Ch-</button>"
  "</div>"
  "</div>"
};



char dev3HTML[] = {
  "<input type='hidden' name='dev' value='3'>"
  "<div>"
  "<button id='PowerButton' type='submit' name='sw' value='pw' />電源</button>"
  "</div>"
  "<br>"
  "<div class='ChNum'>"
  "<div class=''>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch1' />1</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch2' />2</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch3' />3</button>"
  "</div>"
  "<div class=''>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch4' />4</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch5' />5</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch6' />6</button>"
  "</div>"
  "<div class=''>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch7' />7</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch8' />8</button>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch9' />9</button>"
  "</div>"
  "<button class='ChNumButton' type='submit' name='sw' value='ch0' />0</button>"
  "</div>"
  "<div class='Foot'>"
  "<div class=''>"
  "<button class='VolButton' type='submit' name='sw' value='VolUp' />Vol+</button>"
  "<br>"
  "<button class='VolButton' type='submit' name='sw' value='VolDn' />Vol-</button>"
  "</div>"
  "<div class=''>"
  "<button class='ChButton' type='submit' name='sw' value='ChUp' />Ch+</button>"
  "<br>"
  "<button class='ChButton' type='submit' name='sw' value='ChDn' />Ch-</button>"
  "</div>"
  "</div>"
};

char CSS[] = {
  ".button{"
  "text-decoration: none;"
  "font-weight: bold;"
  "text-align: center;"
  "font-size: 30pt"
  "display:block;"
  "border: 1px solid #DDD;"
  "border-radius: 8px;"
  "-moz-focus-inner:8px;"
  "-webkit-border-radius:8px;"
  "width:150px;"
  "padding:10px 20px;"
  "margin: auto;"
  "}"
  "body{"
  "text-align: center;"
  "}"
  "button#PowerButton{"
  "text-align: center;"
  "font-size: 30pt;"
  "width: 200px;"
  "height: 200px;"
  "background-color: #d33;"
  "margin-left: auto;"
  "}"
  "button.ChNumButton{"
  "font-size: 30pt;"
  "width: 180px;"
  "height: 180px;"
  "}"
  "button.VolButton{"
  "font-size: 30pt;"
  "height: 100px;"
  "width: 200px;"
  "margin: 10px 30px;"
  "}"
  "button.ChButton{"
  "font-size: 30pt;"
  "height: 100px;"
  "width: 200px;"
  "margin: 10px 30px;"
  "}"
  "div.Mood{"
  "align: center;"
  "}"
  "div.ChNum{"
  "}"
  "div.Foot{"
  "justify-content: center;"
  "display: flex;"
  "}"
  "h1.title{"
  "text-align: center;"
  "font-size: 40pt;"
  "}"
};

String makeHTML(byte dev, byte ir_mode) {
  String ir_name[] = {
    "リモコンモード：",
    "学習モード："
  };
  String dev_name[] = {
    "Dev1",
    "Dev2",
    "Dev3"
  };

  String s = "<!DOCTYPE html><html><head><meta charset='utf-8'><link rel='stylesheet' href='css'></head><body><h1 class='title'>";
  s += ir_name[ir_mode];
  s += dev_name[dev];
  s += "<div class='Mood'><form method='POST' action='irsend' style='display: inline'><input type='hidden' NAME='sw' VALUE='null'>";
  s += "<button class='button' type='submit' name='dev' value='1' />Device1</button>";
  s += "<button class='button' type='submit' name='dev' value='2' />Device2</button>";
  s += "<button class='button' type='submit' name='dev' value='3' />Device3</button>";
  s += "</form>";
  if (ir_mode != 1) {
    if (dev != 2) {
      s += "<form method='POST' action='irlearn' style='display: inline'>";
      s += "<button class='button' type='submit' name='dev' value='";
      s += String(dev + 1);
      s += "' />学習モード</button></form>";
    }
  }
  s += "</div><div></br>";
  if (ir_mode == 0) {
    s += "<form method='POST' action='irsend'>";
  } else {
    s += "<form method='POST' action='irlearn'>";
  }
  switch (dev) {
    case 0:
      s += String(dev1HTML);
      break;
    case 1:
      s += String(dev2HTML);
      break;
    case 2:
      s += String(dev3HTML);
      break;
  }
  s += "</form></div></body></html>";

  return s;

}


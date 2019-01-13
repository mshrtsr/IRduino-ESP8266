#define EEPROM_SIZE (sizeof(decode_results)*20*2)
#define N_DATA (20)
#define N_DEVICES (2)

int sw_num(String sw_name) {
  String swTable[15] = {
    "pw",
    "ch1",
    "ch2",
    "ch3",
    "ch4",
    "ch5",
    "ch6",
    "ch7",
    "ch8",
    "ch9",
    "ch0",
    "VolUp",
    "VolDn",
    "ChUp",
    "ChDn"
  };
  for (int i = 0; i < 15; i ++) {
    if (swTable[i].compareTo(sw_name) == 0) return i;
  }
  return -1;
}

void beginEEPROM(void) {
  EEPROM.begin(EEPROM_SIZE);
}

void writeIrData(byte dev, String sw_name, decode_results data) {
  int x = sw_num(sw_name);
  Serial.println(String("sw_name = " + sw_name));
  Serial.println(String("x = ") + String(x));
  if (x != -1) {
    EEPROM.put<decode_results>(sizeof(decode_results) * ((dev)*N_DATA + x), data);
    delay(5);
    EEPROM.commit();
    delay(5);
  }
}

decode_results readIrData(byte dev, String sw_name) {
  decode_results tmp;
  int x = sw_num(sw_name);
  Serial.println(String("sw_name = " + sw_name));
  Serial.println(String("x = ") + String(x));
  if (x != -1) {
    EEPROM.get<decode_results>(sizeof(decode_results) * ((dev)*N_DATA + x), tmp);
    delay(5);
    Serial.println(tmp.decode_type);
    return tmp;
  }
}


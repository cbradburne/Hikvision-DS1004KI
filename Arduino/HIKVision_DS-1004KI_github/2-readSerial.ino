
//  --  Read Serial

void readSerial() {
  if (Serial1.available() > 0) {
    str = "S1: " + Serial1.readStringUntil('\n');
    char copy[20];
    str.toCharArray(copy, 20);
    textDisplay((char *)copy);
  }
  else if (Serial.available() > 0) {
    str = "S2: " + Serial.readStringUntil('\n');
    char copy[20];
    str.toCharArray(copy, 20);
    textDisplay((char *)copy);
  }
  else if (Serial3.available() > 0) {
    str = "S3: " + Serial3.readStringUntil('\n');
    char copy[20];
    str.toCharArray(copy, 20);
    textDisplay((char *)copy);
  }
  else if (Serial4.available() > 0) {
    str = "S4: " + Serial4.readStringUntil('\n');
    char copy[20];
    str.toCharArray(copy, 20);
    textDisplay((char *)copy);
  }
}

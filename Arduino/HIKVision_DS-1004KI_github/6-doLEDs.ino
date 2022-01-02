void doLEDs() {
  if (LEDcount == 1) {
    digitalWrite(LEDaG, HIGH);
    digitalWrite(LEDaR, LOW);
    digitalWrite(LEDbG, HIGH);
    digitalWrite(LEDbR, HIGH);
    digitalWrite(LEDcG, HIGH);
    digitalWrite(LEDcR, HIGH);
    digitalWrite(LEDdG, HIGH);
    digitalWrite(LEDdR, HIGH);
  }
  else if (LEDcount == 2) {
    digitalWrite(LEDaG, HIGH);
    digitalWrite(LEDaR, HIGH);
    digitalWrite(LEDbG, HIGH);
    digitalWrite(LEDbR, LOW);
    digitalWrite(LEDcG, HIGH);
    digitalWrite(LEDcR, HIGH);
    digitalWrite(LEDdG, HIGH);
    digitalWrite(LEDdR, HIGH);
  }
  else if (LEDcount == 3) {
    digitalWrite(LEDaG, HIGH);
    digitalWrite(LEDaR, HIGH);
    digitalWrite(LEDbG, HIGH);
    digitalWrite(LEDbR, HIGH);
    digitalWrite(LEDcG, HIGH);
    digitalWrite(LEDcR, LOW);
    digitalWrite(LEDdG, HIGH);
    digitalWrite(LEDdR, HIGH);
  }
  else if (LEDcount == 4) {
    digitalWrite(LEDaG, HIGH);
    digitalWrite(LEDaR, HIGH);
    digitalWrite(LEDbG, HIGH);
    digitalWrite(LEDbR, HIGH);
    digitalWrite(LEDcG, HIGH);
    digitalWrite(LEDcR, HIGH);
    digitalWrite(LEDdG, HIGH);
    digitalWrite(LEDdR, LOW);
  }
  else if (LEDcount == 5) {
    digitalWrite(LEDaG, LOW);
    digitalWrite(LEDaR, HIGH);
    digitalWrite(LEDbG, HIGH);
    digitalWrite(LEDbR, HIGH);
    digitalWrite(LEDcG, HIGH);
    digitalWrite(LEDcR, HIGH);
    digitalWrite(LEDdG, HIGH);
    digitalWrite(LEDdR, HIGH);
  }
  else if (LEDcount == 6) {
    digitalWrite(LEDaG, HIGH);
    digitalWrite(LEDaR, HIGH);
    digitalWrite(LEDbG, LOW);
    digitalWrite(LEDbR, HIGH);
    digitalWrite(LEDcG, HIGH);
    digitalWrite(LEDcR, HIGH);
    digitalWrite(LEDdG, HIGH);
    digitalWrite(LEDdR, HIGH);
  }
  else if (LEDcount == 7) {
    digitalWrite(LEDaG, HIGH);
    digitalWrite(LEDaR, HIGH);
    digitalWrite(LEDbG, HIGH);
    digitalWrite(LEDbR, HIGH);
    digitalWrite(LEDcG, LOW);
    digitalWrite(LEDcR, HIGH);
    digitalWrite(LEDdG, HIGH);
    digitalWrite(LEDdR, HIGH);
  }
  else if (LEDcount == 8) {
    digitalWrite(LEDaG, HIGH);
    digitalWrite(LEDaR, HIGH);
    digitalWrite(LEDbG, HIGH);
    digitalWrite(LEDbR, HIGH);
    digitalWrite(LEDcG, HIGH);
    digitalWrite(LEDcR, HIGH);
    digitalWrite(LEDdG, LOW);
    digitalWrite(LEDdR, HIGH);
  }
  else if (LEDcount == 9) {
    digitalWrite(LEDaG, LOW);
    digitalWrite(LEDaR, LOW);
    digitalWrite(LEDbG, HIGH);
    digitalWrite(LEDbR, HIGH);
    digitalWrite(LEDcG, HIGH);
    digitalWrite(LEDcR, HIGH);
    digitalWrite(LEDdG, HIGH);
    digitalWrite(LEDdR, HIGH);
  }
  else if (LEDcount == 10) {
    digitalWrite(LEDaG, HIGH);
    digitalWrite(LEDaR, HIGH);
    digitalWrite(LEDbG, LOW);
    digitalWrite(LEDbR, LOW);
    digitalWrite(LEDcG, HIGH);
    digitalWrite(LEDcR, HIGH);
    digitalWrite(LEDdG, HIGH);
    digitalWrite(LEDdR, HIGH);
  }
  else if (LEDcount == 11) {
    digitalWrite(LEDaG, HIGH);
    digitalWrite(LEDaR, HIGH);
    digitalWrite(LEDbG, HIGH);
    digitalWrite(LEDbR, HIGH);
    digitalWrite(LEDcG, LOW);
    digitalWrite(LEDcR, LOW);
    digitalWrite(LEDdG, HIGH);
    digitalWrite(LEDdR, HIGH);
  }
  else if (LEDcount >= 12) {
    digitalWrite(LEDaG, HIGH);
    digitalWrite(LEDaR, HIGH);
    digitalWrite(LEDbG, HIGH);
    digitalWrite(LEDbR, HIGH);
    digitalWrite(LEDcG, HIGH);
    digitalWrite(LEDcR, HIGH);
    digitalWrite(LEDdG, LOW);
    digitalWrite(LEDdR, LOW);
    LEDcount = 0;
  }
  
  LEDcount++;
  digitalWrite(intLED, !digitalRead(intLED));
  setLEDs();
}

void setLEDs() {                                                              //  Send "Clock Pulse" for LEDs to initiate LED change
  digitalWrite(LEDCP, HIGH);
  delay(5);
  digitalWrite(LEDCP, LOW);
}

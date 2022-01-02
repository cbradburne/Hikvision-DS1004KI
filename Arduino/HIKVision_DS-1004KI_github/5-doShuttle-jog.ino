
//  --  Shuttle & Jog manual move

void doShuttle() {
  ringDir = digitalRead(ringPinDir);
  ringMid = digitalRead(ringPinMid);
  ringDiv = digitalRead(ringPinDiv);
  ringHlf = digitalRead(ringPinHlf);

  if (ringDir && ringMid && ringDiv && !ringHlf && ringLast != 0) {          // CW 7
    TShort = (31 * 7);
    ringLast = 0;
  }
  else if (ringDir && ringMid && !ringDiv && !ringHlf && ringLast != 1) {    // CW 6
    TShort = (31 * 6);
    ringLast = 1;
  }
  else if (ringDir && !ringMid && !ringDiv && !ringHlf && ringLast != 2) {   // CW 5
    TShort = (31 * 5);
    ringLast = 2;
  }
  else if (ringDir && !ringMid && ringDiv && !ringHlf && ringLast != 3) {    // CW 4
    TShort = (31 * 4);
    ringLast = 3;
  }
  else if (ringDir && !ringMid && ringDiv && ringHlf && ringLast != 4) {     // CW 3
    TShort = (31 * 3);
    ringLast = 4;
  }
  else if (ringDir && !ringMid && !ringDiv && ringHlf && ringLast != 5) {    // CW 2
    TShort = (31 * 2);
    ringLast = 5;
  }
  else if (ringDir && ringMid && !ringDiv && ringHlf && ringLast != 6) {     // CW 1
    TShort = (31 * 1);
    ringLast = 6;
  }
  else if (ringDir && ringMid && ringDiv && ringHlf && ringLast != 7) {      // CENTRE
    ringLast = 7;
    TShort = 0;
  }
  else if (!ringDir && ringMid && !ringDiv && ringHlf && ringLast != 8) {    // CCW 1
    TShort = -(31 * 1);
    ringLast = 8;
  }
  else if (!ringDir && !ringMid && !ringDiv && ringHlf && ringLast != 9) {   // CCW 2
    TShort = -(31 * 2);
    ringLast = 9;
  }
  else if (!ringDir && !ringMid && ringDiv && ringHlf && ringLast != 10) {    // CCW 3
    TShort = -(31 * 3);
    ringLast = 10;
  }
  else if (!ringDir && !ringMid && ringDiv && !ringHlf && ringLast != 11) {   // CCW 4
    TShort = -(31 * 4);
    ringLast = 11;
  }
  else if (!ringDir && !ringMid && !ringDiv && !ringHlf && ringLast != 12) {  // CCW 5
    TShort = -(31 * 5);
    ringLast = 12;
  }
  else if (!ringDir && ringMid && !ringDiv && !ringHlf && ringLast != 13) {   // CCW 6
    TShort = -(31 * 6);
    ringLast = 13;
  }
  else if (!ringDir && ringMid && ringDiv && !ringHlf && ringLast != 14) {    // CCW 7
    TShort = -(31 * 7);
    ringLast = 14;
  }
}


void doJog() {

  n = digitalRead(encoder0PinA);
  if ((encoder0PinALast == LOW) && (n == HIGH)) {
    if (digitalRead(encoder0PinB) == LOW) {
      encoder0Pos = encoder0Pos*0.9;
      tone(buzzer, encoder0Pos, 200);
    } else {
      encoder0Pos = encoder0Pos*1.1;
      tone(buzzer, encoder0Pos, 200);
    }
    //Serial.print (encoder0Pos);
    //Serial.print ("/");
  }
  encoder0PinALast = n;
}

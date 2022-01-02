
//  --  Joystick manual move

void doJoystick() {
  joyX = analogRead(joyPinX);
  if (joyX < XdeadRangeLow) {
    XShort = map(joyX, X_min, XdeadRangeLow, out_min, 0);
  }
  else if (joyX > XdeadRangeHigh) {
    XShort = map(joyX, XdeadRangeHigh, X_max, 0, out_max);
  }
  else {
    XShort = 0;                                               // deadzone around center value
  }
  //Serial1.print("Joy X - ");
  //Serial1.print(joyX);

  joyY = analogRead(joyPinY);
  if (joyY < YdeadRangeLow) {
    YShort = map(joyY, Y_min, YdeadRangeLow, out_min, 0);
  }
  else if (joyY > YdeadRangeHigh) {
    YShort = map(joyY, YdeadRangeHigh, Y_max, 0, out_max);
  }
  else {
    YShort = 0;                                               // deadzone around center value
  }

  //Serial1.print(", Joy Y - ");
  //Serial1.println(joyY);

  joyZ = analogRead(joyPinZ);
  if (joyZ < ZdeadRangeLow) {
    ZShort = map(joyZ, Z_min, ZdeadRangeLow, out_min, 0);
  }
  else if (joyX > XdeadRangeHigh) {
    ZShort = map(joyZ, ZdeadRangeHigh, Z_max, 0, out_max);
  }
  else {
    ZShort = 0;                                               // deadzone around center value
  }
  //Serial1.print("Joy X - ");
  //Serial1.print(joyX);

  shortVals[0] = TShort;
  shortVals[1] = XShort;
  shortVals[2] = YShort;

  xDisplay = map(XShort, -255, 170, 0, 4);
  yDisplay = map(YShort, -255, 200, 6, 0);
  zDisplay = map(ZShort, -255, 200, 0, 4);


  if ((shortVals[0] == oldShortVal0 && shortVals[1] == oldShortVal1 && shortVals[2] == oldShortVal2) && ((oldShortVal0 + oldShortVal1 + oldShortVal2) != 0)) {
    unsigned long currentMillisMoveCheck = millis();
    if (currentMillisMoveCheck - previousMillisMoveCheck > moveCheckInterval) {
      previousMillisMoveCheck = currentMillisMoveCheck;
      sendSliderPanTiltStepSpeed(4, shortVals);
    }
  }
  else if (shortVals[0] != oldShortVal0 || shortVals[1] != oldShortVal1 || shortVals[2] != oldShortVal2) {   // IF input has changed
    sendSliderPanTiltStepSpeed(4, shortVals);                 //  Send the combned values

    oldShortVal0 = shortVals[0];                              //  Store as old values SHUTTLE
    oldShortVal1 = shortVals[1];                              //  Store as old values Joy X
    oldShortVal2 = shortVals[2];                              //  Store as old values Joy Y

    delay(20);                                                //  Slow down joystick sends (change to millis)
    previousMillisMoveCheck = millis();
  }
}

void sendSliderPanTiltStepSpeed(int command, short * arr) {
  byte data[7];                                               //  Data array to send

  data[0] = command;
  data[1] = (arr[0] >> 8);
  data[2] = (arr[0] & 0xFF);
  data[3] = (arr[1] >> 8);
  data[4] = (arr[1] & 0xFF);
  data[5] = (arr[2] >> 8);
  data[6] = (arr[2] & 0xFF);

  delay(20);

  //Serial1.write(data, sizeof(data));                          //  Send the command and the 6 bytes of data
  //Serial1.print("\n");
}

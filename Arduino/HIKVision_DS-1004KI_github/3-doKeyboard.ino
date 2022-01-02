
//  --  Keyboard

void doKeyboard() {

  keySwitchReading1 = digitalRead(keySW1);
  if (keySwitchReading1 != lastButtonStateKey1) {
    lastButtonStateKey1 = millis();
  }
  if ((millis() - lastButtonStateKey1) > debounceDelay) {
    if (keySwitchReading1 != buttonStateKey1) {
      buttonStateKey1 = keySwitchReading1;
      if (buttonStateKey1 == LOW) {
        textKeySWDisplay((char *)"1");
      }
    }
  }
  lastButtonStateKey1 = keySwitchReading1;

  keySwitchReading2 = digitalRead(keySW2);
  if (keySwitchReading2 != lastButtonStateKey2) {
    lastButtonStateKey2 = millis();
  }
  if ((millis() - lastButtonStateKey2) > debounceDelay) {
    if (keySwitchReading2 != buttonStateKey2) {
      buttonStateKey2 = keySwitchReading2;
      if (buttonStateKey2 == LOW) {
        textKeySWDisplay((char *)"2");
      }
    }
  }
  lastButtonStateKey2 = keySwitchReading2;
  
  keySwitchReading3 = digitalRead(keySW3);
  if (keySwitchReading3 != lastButtonStateKey3) {
    lastButtonStateKey3 = millis();
  }
  if ((millis() - lastButtonStateKey3) > debounceDelay) {
    if (keySwitchReading3 != buttonStateKey3) {
      buttonStateKey3 = keySwitchReading3;
      if (buttonStateKey3 == LOW) {
        textKeySWDisplay((char *)"3");
      }
    }
  }
  lastButtonStateKey3 = keySwitchReading3;

  

  keyReadingJB = digitalRead(joyPinB);                        //  Joystick Button
  if (keyReadingJB != lastButtonStateJB) {
    lastDebounceTimeJB = millis();
  }
  if ((millis() - lastDebounceTimeJB) > debounceDelay) {
    if (keyReadingJB != buttonStateJB) {
      buttonStateJB = keyReadingJB;
      if (buttonStateJB == LOW) {
        clearText();
        if (flag == false) {
          flag = true;
        }
        else {
          flag = false;
        }
      }
    }
  }
  lastButtonStateJB = keyReadingJB;

  /* ------------------------------------------------ Row A ------------------------------------------- */

  digitalWrite(rowA, LOW);
  delay(1);

  keyReading11 = digitalRead(colA);                           //  1x1
  if (keyReading11 != lastButtonState11) {
    lastDebounceTime11 = millis();
  }
  if ((millis() - lastDebounceTime11) > debounceDelay) {
    if (keyReading11 != buttonState11) {
      buttonState11 = keyReading11;
      if (buttonState11 == LOW) {
        clearText();
        textDisplay((char *)"1x1");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState11 = keyReading11;

  keyReading12 = digitalRead(colB);                           //  1x2
  if (keyReading12 != lastButtonState12) {
    lastDebounceTime12 = millis();
  }
  if ((millis() - lastDebounceTime12) > debounceDelay) {
    if (keyReading12 != buttonState12) {
      buttonState12 = keyReading12;
      if (buttonState12 == LOW) {
        clearText();
        textDisplay((char *)"1x2");
        startDisplayRefresh = true;
      }
    }
  }

  lastButtonState12 = keyReading12;

  keyReading14 = digitalRead(colD);                           //  1x4
  if (keyReading14 != lastButtonState14) {
    lastDebounceTime14 = millis();
  }
  if ((millis() - lastDebounceTime14) > debounceDelay) {
    if (keyReading14 != buttonState14) {
      buttonState14 = keyReading14;
      if (buttonState14 == LOW) {
        clearText();
        textDisplay((char *)"1x4");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState14 = keyReading14;

  keyReading15 = digitalRead(colE);                           //  1x5
  if (keyReading15 != lastButtonState15) {
    lastDebounceTime15 = millis();
  }
  if ((millis() - lastDebounceTime15) > debounceDelay) {
    if (keyReading15 != buttonState15) {
      buttonState15 = keyReading15;
      if (buttonState15 == LOW) {
        clearText();
        textDisplay((char *)"1x5");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState15 = keyReading15;

  keyReading16 = digitalRead(colF);                           //  1x6
  if (keyReading16 != lastButtonState16) {
    lastDebounceTime16 = millis();
  }
  if ((millis() - lastDebounceTime16) > debounceDelay) {
    if (keyReading16 != buttonState16) {
      buttonState16 = keyReading16;
      if (buttonState16 == LOW) {
        clearText();
        textDisplay((char *)"1x6");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState16 = keyReading16;

  keyReading17 = digitalRead(colG);                           //  1x7
  if (keyReading17 != lastButtonState17) {
    lastDebounceTime17 = millis();
  }
  if ((millis() - lastDebounceTime17) > debounceDelay) {
    if (keyReading17 != buttonState17) {
      buttonState17 = keyReading17;
      if (buttonState17 == LOW) {
        clearText();
        textDisplay((char *)"1x7");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState17 = keyReading17;

  keyReading18 = digitalRead(colH);                           //  1x8
  if (keyReading18 != lastButtonState18) {
    lastDebounceTime18 = millis();
  }
  if ((millis() - lastDebounceTime18) > debounceDelay) {
    if (keyReading18 != buttonState18) {
      buttonState18 = keyReading18;
      if (buttonState18 == LOW) {
        clearText();
        textDisplay((char *)"1x8");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState18 = keyReading18;

  keyReading19 = digitalRead(colI);                           //  1x9
  if (keyReading19 != lastButtonState19) {
    lastDebounceTime19 = millis();
  }
  if ((millis() - lastDebounceTime19) > debounceDelay) {
    if (keyReading19 != buttonState19) {
      buttonState19 = keyReading19;
      if (buttonState19 == LOW) {
        clearText();
        textDisplay((char *)"1x9");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState19 = keyReading19;

  digitalWrite(rowA, HIGH);
  delay(1);

  /* ------------------------------------------------ Row B ------------------------------------------- */

  digitalWrite(rowB, LOW);
  delay(1);

  // Check each column
  keyReading21 = digitalRead(colA);                           //  2x1
  if (keyReading21 != lastButtonState21) {
    lastDebounceTime21 = millis();
  }
  if ((millis() - lastDebounceTime21) > debounceDelay) {
    if (keyReading21 != buttonState21) {
      buttonState21 = keyReading21;
      if (buttonState21 == LOW) {
        clearText();
        textDisplay((char *)"2x1");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState21 = keyReading21;

  keyReading22 = digitalRead(colB);                           //  2x2
  if (keyReading22 != lastButtonState22) {
    lastDebounceTime22 = millis();
  }
  if ((millis() - lastDebounceTime22) > debounceDelay) {
    if (keyReading22 != buttonState22) {
      buttonState22 = keyReading22;
      if (buttonState22 == LOW) {
        clearText();
        textDisplay((char *)"2x2");
        startDisplayRefresh = true;
      }
    }
  }

  lastButtonState22 = keyReading22;

  keyReading23 = digitalRead(colC);                           //  2x3
  if (keyReading23 != lastButtonState23) {
    lastDebounceTime23 = millis();
  }
  if ((millis() - lastDebounceTime23) > debounceDelay) {
    if (keyReading23 != buttonState23) {
      buttonState23 = keyReading23;
      if (buttonState23 == LOW) {
        clearText();
        textDisplay((char *)"2x3");
        startDisplayRefresh = true;
      }
    }

  }
  lastButtonState23 = keyReading23;

  keyReading24 = digitalRead(colD);                           //  2x4
  if (keyReading24 != lastButtonState24) {
    lastDebounceTime24 = millis();
  }
  if ((millis() - lastDebounceTime24) > debounceDelay) {
    if (keyReading24 != buttonState24) {
      buttonState24 = keyReading24;
      if (buttonState24 == LOW) {
        clearText();
        textDisplay((char *)"2x4");
        startDisplayRefresh = true;
      }
    }
  }

  lastButtonState24 = keyReading24;

  keyReading25 = digitalRead(colE);                           //  2x5
  if (keyReading25 != lastButtonState25) {
    lastDebounceTime25 = millis();
  }
  if ((millis() - lastDebounceTime25) > debounceDelay) {
    if (keyReading25 != buttonState25) {
      buttonState25 = keyReading25;
      if (buttonState25 == LOW) {
        clearText();
        textDisplay((char *)"2x5");
        startDisplayRefresh = true;
      }
    }
  }

  lastButtonState25 = keyReading25;

  keyReading26 = digitalRead(colF);                           //  2x6
  if (keyReading26 != lastButtonState26) {
    lastDebounceTime26 = millis();
  }
  if ((millis() - lastDebounceTime26) > debounceDelay) {
    if (keyReading26 != buttonState26) {
      buttonState26 = keyReading26;
      if (buttonState26 == LOW) {
        clearText();
        textDisplay((char *)"2x6");
        startDisplayRefresh = true;
      }
    }
  }

  lastButtonState26 = keyReading26;

  keyReading27 = digitalRead(colG);                           //  2x7
  if (keyReading27 != lastButtonState27) {
    lastDebounceTime27 = millis();
  }
  if ((millis() - lastDebounceTime27) > debounceDelay) {
    if (keyReading27 != buttonState27) {
      buttonState27 = keyReading27;
      if (buttonState27 == LOW) {
        clearText();
        textDisplay((char *)"2x7");
        startDisplayRefresh = true;
      }
    }
  }

  lastButtonState27 = keyReading27;

  keyReading28 = digitalRead(colH);                           //  2x8
  if (keyReading28 != lastButtonState28) {
    lastDebounceTime28 = millis();
  }
  if ((millis() - lastDebounceTime28) > debounceDelay) {
    if (keyReading28 != buttonState28) {
      buttonState28 = keyReading28;
      if (buttonState28 == LOW) {
        clearText();
        textDisplay((char *)"2x8");
        startDisplayRefresh = true;
      }
    }
  }

  lastButtonState28 = keyReading28;

  keyReading29 = digitalRead(colI);                           //  2x9
  if (keyReading29 != lastButtonState29) {
    lastDebounceTime29 = millis();
  }
  if ((millis() - lastDebounceTime29) > debounceDelay) {
    if (keyReading29 != buttonState29) {
      buttonState29 = keyReading29;
      if (buttonState29 == LOW) {
        clearText();
        textDisplay((char *)"2x9");
        startDisplayRefresh = true;
      }
    }

  }
  lastButtonState29 = keyReading29;

  digitalWrite(rowB, HIGH);
  delay(1);

  /* ------------------------------------------------ Row C ------------------------------------------- */

  digitalWrite(rowC, LOW);
  delay(1);

  // Check each column
  keyReading31 = digitalRead(colA);                           //  3x1
  if (keyReading31 != lastButtonState31) {
    lastDebounceTime31 = millis();
  }
  if ((millis() - lastDebounceTime31) > debounceDelay) {
    if (keyReading31 != buttonState31) {
      buttonState31 = keyReading31;
      if (buttonState31 == LOW) {
        clearText();
        textDisplay((char *)"3x1");
        startDisplayRefresh = true;
      }
    }
  }

  lastButtonState31 = keyReading31;

  keyReading32 = digitalRead(colB);                           //  3x2
  if (keyReading32 != lastButtonState32) {
    lastDebounceTime32 = millis();
  }
  if ((millis() - lastDebounceTime32) > debounceDelay) {
    if (keyReading32 != buttonState32) {
      buttonState32 = keyReading32;
      if (buttonState32 == LOW) {
        clearText();
        textDisplay((char *)"3x2");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState32 = keyReading32;

  keyReading33 = digitalRead(colC);                           //  3x3
  if (keyReading33 != lastButtonState33) {
    lastDebounceTime33 = millis();
  }
  if ((millis() - lastDebounceTime33) > debounceDelay) {
    if (keyReading33 != buttonState33) {
      buttonState33 = keyReading33;
      if (buttonState33 == LOW) {
        textDisplay((char *)"3x3");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState33 = keyReading33;

  keyReading34 = digitalRead(colD);                           //  3x4
  if (keyReading34 != lastButtonState34) {
    lastDebounceTime34 = millis();
  }
  if ((millis() - lastDebounceTime34) > debounceDelay) {
    if (keyReading34 != buttonState34) {
      buttonState34 = keyReading34;
      if (buttonState34 == LOW) {
        clearText();
        textDisplay((char *)"3x4");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState34 = keyReading34;

  keyReading35 = digitalRead(colE);                           //  3x5
  if (keyReading35 != lastButtonState35) {
    lastDebounceTime35 = millis();
  }
  if ((millis() - lastDebounceTime35) > debounceDelay) {
    if (keyReading35 != buttonState35) {
      buttonState35 = keyReading35;
      if (buttonState35 == LOW) {
        clearText();
        textDisplay((char *)"3x5");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState35 = keyReading35;

  keyReading36 = digitalRead(colF);                           //  3x6
  if (keyReading36 != lastButtonState36) {
    lastDebounceTime36 = millis();
  }
  if ((millis() - lastDebounceTime36) > debounceDelay) {
    if (keyReading36 != buttonState36) {
      buttonState36 = keyReading36;
      if (buttonState36 == LOW) {
        clearText();
        textDisplay((char *)"3x6");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState36 = keyReading36;

  keyReading37 = digitalRead(colG);                           //  3x7
  if (keyReading37 != lastButtonState37) {
    lastDebounceTime37 = millis();
  }
  if ((millis() - lastDebounceTime37) > debounceDelay) {
    if (keyReading37 != buttonState37) {
      buttonState37 = keyReading37;
      if (buttonState37 == LOW) {
        clearText();
        textDisplay((char *)"3x7");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState37 = keyReading37;

  keyReading38 = digitalRead(colH);                           //  3x8
  if (keyReading38 != lastButtonState38) {
    lastDebounceTime38 = millis();
  }
  if ((millis() - lastDebounceTime38) > debounceDelay) {
    if (keyReading38 != buttonState38) {
      buttonState38 = keyReading38;
      if (buttonState38 == LOW) {
        clearText();
        textDisplay((char *)"3x8");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState38 = keyReading38;

  keyReading39 = digitalRead(colI);                           //  3x9
  if (keyReading39 != lastButtonState39) {
    lastDebounceTime39 = millis();
  }
  if ((millis() - lastDebounceTime39) > debounceDelay) {
    if (keyReading39 != buttonState39) {
      buttonState39 = keyReading39;
      if (buttonState39 == LOW) {
        clearText();
        textDisplay((char *)"3x9");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState39 = keyReading39;

  digitalWrite(rowC, HIGH);
  delay(1);

  /* ------------------------------------------------ Row D ------------------------------------------- */

  digitalWrite(rowD, LOW);
  delay(1);

  keyReading41 = digitalRead(colA);                           //  4x1
  if (keyReading41 != lastButtonState41) {
    lastDebounceTime41 = millis();
  }
  if ((millis() - lastDebounceTime41) > debounceDelay) {
    if (keyReading41 != buttonState41) {
      buttonState41 = keyReading41;
      if (buttonState41 == LOW) {
        clearText();
        textDisplay((char *)"4x1");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState41 = keyReading41;

  keyReading42 = digitalRead(colB);                           //  4x2
  if (keyReading42 != lastButtonState42) {
    lastDebounceTime42 = millis();
  }
  if ((millis() - lastDebounceTime42) > debounceDelay) {
    if (keyReading42 != buttonState42) {
      buttonState42 = keyReading42;
      if (buttonState42 == LOW) {
        clearText();
        textDisplay((char *)"4x2");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState42 = keyReading42;

  keyReading43 = digitalRead(colC);                           //  4x3
  if (keyReading43 != lastButtonState43) {
    lastDebounceTime43 = millis();
  }
  if ((millis() - lastDebounceTime43) > debounceDelay) {
    if (keyReading43 != buttonState43) {
      buttonState43 = keyReading43;
      if (buttonState43 == LOW) {
        clearText();
        textDisplay((char *)"4x3");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState43 = keyReading43;

  keyReading44 = digitalRead(colD);                           //  4x4
  if (keyReading44 != lastButtonState44) {
    lastDebounceTime44 = millis();
  }
  if ((millis() - lastDebounceTime44) > debounceDelay) {
    if (keyReading44 != buttonState44) {
      buttonState44 = keyReading44;
      if (buttonState44 == LOW) {
        clearText();
        textDisplay((char *)"4x4");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState44 = keyReading44;

  keyReading45 = digitalRead(colE);                           //  4x5
  if (keyReading45 != lastButtonState45) {
    lastDebounceTime45 = millis();
  }
  if ((millis() - lastDebounceTime45) > debounceDelay) {
    if (keyReading45 != buttonState45) {
      buttonState45 = keyReading45;
      if (buttonState45 == LOW) {
        clearText();
        textDisplay((char *)"4x5");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState45 = keyReading45;

  keyReading46 = digitalRead(colF);                           //  4x6
  if (keyReading46 != lastButtonState46) {
    lastDebounceTime46 = millis();
  }
  if ((millis() - lastDebounceTime46) > debounceDelay) {
    if (keyReading46 != buttonState46) {
      buttonState46 = keyReading46;
      if (buttonState46 == LOW) {
        clearText();
        textDisplay((char *)"4x6");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState46 = keyReading46;

  keyReading47 = digitalRead(colG);                           //  4x7
  if (keyReading47 != lastButtonState47) {
    lastDebounceTime47 = millis();
  }
  if ((millis() - lastDebounceTime47) > debounceDelay) {
    if (keyReading47 != buttonState47) {
      buttonState47 = keyReading47;
      if (buttonState47 == LOW) {
        clearText();
        textDisplay((char *)"4x7");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState47 = keyReading47;

  keyReading48 = digitalRead(colH);                           //  4x8
  if (keyReading48 != lastButtonState48) {
    lastDebounceTime48 = millis();
  }
  if ((millis() - lastDebounceTime48) > debounceDelay) {
    if (keyReading48 != buttonState48) {
      buttonState48 = keyReading48;
      if (buttonState48 == LOW) {
        clearText();
        textDisplay((char *)"4x8");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState48 = keyReading48;

  keyReading49 = digitalRead(colI);                           //  4x9
  if (keyReading49 != lastButtonState49) {
    lastDebounceTime49 = millis();
  }
  if ((millis() - lastDebounceTime49) > debounceDelay) {
    if (keyReading49 != buttonState49) {
      buttonState49 = keyReading49;
      if (buttonState49 == LOW) {
        clearText();
        textDisplay((char *)"4x9");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState49 = keyReading49;

  digitalWrite(rowD, HIGH);
  delay(1);

  /* ------------------------------------------------ Row E ------------------------------------------- */

  digitalWrite(rowE, LOW);
  delay(1);

  keyReading51 = digitalRead(colA);                           //  5x1
  if (keyReading51 != lastButtonState51) {
    lastDebounceTime51 = millis();
  }
  if ((millis() - lastDebounceTime51) > debounceDelay) {
    if (keyReading51 != buttonState51) {
      buttonState51 = keyReading51;
      if (buttonState51 == LOW) {
        clearText();
        textDisplay((char *)"5x1");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState51 = keyReading51;

  keyReading52 = digitalRead(colB);                           //  5x2
  if (keyReading52 != lastButtonState52) {
    lastDebounceTime52 = millis();
  }
  if ((millis() - lastDebounceTime52) > debounceDelay) {
    if (keyReading52 != buttonState52) {
      buttonState52 = keyReading52;
      if (buttonState52 == LOW) {
        clearText();
        textDisplay((char *)"5x2");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState52 = keyReading52;

  keyReading53 = digitalRead(colC);                           //  5x3
  if (keyReading53 != lastButtonState53) {
    lastDebounceTime53 = millis();
  }
  if ((millis() - lastDebounceTime53) > debounceDelay) {
    if (keyReading53 != buttonState53) {
      buttonState53 = keyReading53;
      if (buttonState53 == LOW) {
        clearText();
        textDisplay((char *)"5x3");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState53 = keyReading53;

  keyReading54 = digitalRead(colD);                           //  5x4
  if (keyReading54 != lastButtonState54) {
    lastDebounceTime54 = millis();
  }
  if ((millis() - lastDebounceTime54) > debounceDelay) {
    if (keyReading54 != buttonState54) {
      buttonState54 = keyReading54;
      if (buttonState54 == LOW) {
        clearText();
        textDisplay((char *)"5x4");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState54 = keyReading54;

  keyReading55 = digitalRead(colE);                           //  5x5
  if (keyReading55 != lastButtonState55) {
    lastDebounceTime55 = millis();
  }
  if ((millis() - lastDebounceTime55) > debounceDelay) {
    if (keyReading55 != buttonState55) {
      buttonState55 = keyReading55;
      if (buttonState55 == LOW) {
        clearText();
        textDisplay((char *)"5x5");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState55 = keyReading55;

  keyReading56 = digitalRead(colF);                           //  5x6
  if (keyReading56 != lastButtonState56) {
    lastDebounceTime56 = millis();
  }
  if ((millis() - lastDebounceTime56) > debounceDelay) {
    if (keyReading56 != buttonState56) {
      buttonState56 = keyReading56;
      if (buttonState56 == LOW) {
        clearText();
        textDisplay((char *)"5x6");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState56 = keyReading56;

  digitalWrite(rowE, HIGH);
  delay(1);

  /* ------------------------------------------------ Row F ------------------------------------------- */

  digitalWrite(rowF, LOW);
  delay(1);

  // Check each column
  keyReading61 = digitalRead(colA);                           //  6x1
  if (keyReading61 != lastButtonState61) {
    lastDebounceTime61 = millis();
  }
  if ((millis() - lastDebounceTime61) > debounceDelay) {
    if (keyReading61 != buttonState61) {
      buttonState61 = keyReading61;
      if (buttonState61 == LOW) {
        clearText();
        textDisplay((char *)"6x1");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState61 = keyReading61;

  keyReading62 = digitalRead(colB);                           //  6x2
  if (keyReading62 != lastButtonState62) {
    lastDebounceTime62 = millis();
  }
  if ((millis() - lastDebounceTime62) > debounceDelay) {
    if (keyReading62 != buttonState62) {
      buttonState62 = keyReading62;
      if (buttonState62 == LOW) {
        clearText();
        textDisplay((char *)"6x2");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState62 = keyReading62;

  keyReading63 = digitalRead(colC);                           //  6x3
  if (keyReading63 != lastButtonState63) {
    lastDebounceTime63 = millis();
  }
  if ((millis() - lastDebounceTime63) > debounceDelay) {
    if (keyReading63 != buttonState63) {
      buttonState63 = keyReading63;
      if (buttonState63 == LOW) {
        clearText();
        textDisplay((char *)"6x3");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState63 = keyReading63;

  keyReading64 = digitalRead(colD);                           //  6x4
  if (keyReading64 != lastButtonState64) {
    lastDebounceTime64 = millis();
  }
  if ((millis() - lastDebounceTime64) > debounceDelay) {
    if (keyReading64 != buttonState64) {
      buttonState64 = keyReading64;
      if (buttonState64 == LOW) {
        clearText();
        textDisplay((char *)"6x4");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState64 = keyReading64;

  keyReading65 = digitalRead(colE);                           //  6x5
  if (keyReading65 != lastButtonState65) {
    lastDebounceTime65 = millis();
  }
  if ((millis() - lastDebounceTime65) > debounceDelay) {
    if (keyReading65 != buttonState65) {
      buttonState65 = keyReading65;
      if (buttonState65 == LOW) {
        clearText();
        textDisplay((char *)"6x5");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState65 = keyReading65;

  keyReading66 = digitalRead(colF);                           //  6x6
  if (keyReading66 != lastButtonState66) {
    lastDebounceTime66 = millis();
  }
  if ((millis() - lastDebounceTime66) > debounceDelay) {
    if (keyReading66 != buttonState66) {
      buttonState66 = keyReading66;
      if (buttonState66 == LOW) {
        clearText();
        textDisplay((char *)"6x6");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState66 = keyReading66;

  keyReading67 = digitalRead(colG);                           //  6x7
  if (keyReading67 != lastButtonState67) {
    lastDebounceTime67 = millis();
  }
  if ((millis() - lastDebounceTime67) > debounceDelay) {
    if (keyReading67 != buttonState67) {
      buttonState67 = keyReading67;
      if (buttonState67 == LOW) {
        clearText();
        textDisplay((char *)"6x7");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState67 = keyReading67;

  keyReading68 = digitalRead(colH);                           //  6x8
  if (keyReading68 != lastButtonState68) {
    lastDebounceTime68 = millis();
  }
  if ((millis() - lastDebounceTime68) > debounceDelay) {
    if (keyReading68 != buttonState68) {
      buttonState68 = keyReading68;
      if (buttonState68 == LOW) {
        clearText();
        textDisplay((char *)"6x8");
        startDisplayRefresh = true;
      }
    }
  }
  lastButtonState68 = keyReading68;

  digitalWrite(rowF, HIGH);
  delay(1);


  matrix.writeScreen();
}



/*   test
  matrix.clearScreen();
  matrix.setCursor(55, 0);
  matrix.print("6x4");
  matrix.writeScreen();
*/

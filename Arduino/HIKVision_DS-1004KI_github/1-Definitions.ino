
void initPTS() {

  Serial1.begin(38400);
  Serial.begin(38400);
  Serial3.begin(38400);
  Serial4.begin(38400);

  //  -- Joystick
  pinMode(joyPinX, INPUT);
  pinMode(joyPinY, INPUT);
  pinMode(joyPinZ, INPUT);
  pinMode(joyPinB, INPUT);

  //  -- Shuttle Ring
  pinMode(ringPinDir, INPUT_PULLUP);
  pinMode(ringPinHlf, INPUT_PULLUP);
  pinMode(ringPinMid, INPUT_PULLUP);
  pinMode(ringPinDiv, INPUT_PULLUP);

  //  -- Jog Wheel
  pinMode(encoder0PinA, INPUT);
  pinMode(encoder0PinB, INPUT_PULLUP);

  //  -- Mode LEDs
  pinMode(LEDCP, OUTPUT);
  pinMode(LEDaG, OUTPUT);
  pinMode(LEDbG, OUTPUT);
  pinMode(LEDcG, OUTPUT);
  pinMode(LEDdG, OUTPUT);
  pinMode(LEDaR, OUTPUT);
  pinMode(LEDbR, OUTPUT);
  pinMode(LEDcR, OUTPUT);
  pinMode(LEDdR, OUTPUT);
  pinMode(intLED, OUTPUT);
  digitalWrite(intLED, LOW);

  //  -- Keyboard
  pinMode(colA, INPUT_PULLUP);
  pinMode(colB, INPUT_PULLUP);
  pinMode(colC, INPUT_PULLUP);
  pinMode(colD, INPUT_PULLUP);
  pinMode(colE, INPUT_PULLUP);
  pinMode(colF, INPUT_PULLUP);
  pinMode(colG, INPUT_PULLUP);
  pinMode(colH, INPUT_PULLUP);
  pinMode(colI, INPUT_PULLUP);
  pinMode(rowA, OUTPUT);
  pinMode(rowB, OUTPUT);
  pinMode(rowC, OUTPUT);
  pinMode(rowD, OUTPUT);
  pinMode(rowE, OUTPUT);
  pinMode(rowF, OUTPUT);
  digitalWrite(rowA, HIGH);
  digitalWrite(rowB, HIGH);
  digitalWrite(rowC, HIGH);
  digitalWrite(rowD, HIGH);
  digitalWrite(rowE, HIGH);
  digitalWrite(rowF, HIGH);

  //  -- Screen
  pinMode(HT_WR, OUTPUT);
  pinMode(HT_DATA, OUTPUT);
  pinMode(HT_CS1, OUTPUT);
  pinMode(HT_CS2, OUTPUT);
  pinMode(HT_CS3, OUTPUT);
  pinMode(HT_CS4, OUTPUT);

  //                                  -------- Set HT1632 IC1 mode --------
  digitalWrite(HT_CS1, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_SYS_EN, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS1, HIGH);

  digitalWrite(HT_CS1, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_LED_ON, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS1, HIGH);

  digitalWrite(HT_CS1, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_MASTER_MODE, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS1, HIGH);

  digitalWrite(HT_CS1, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_INT_RC, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS1, HIGH);

  digitalWrite(HT_CS1, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_COMMON_8NMOS, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS1, HIGH);

  digitalWrite(HT_CS1, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_PWM_CONTROL, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS1, HIGH);

  //                                  -------- Set HT1632 IC3 mode --------
  digitalWrite(HT_CS3, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_SYS_EN, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS3, HIGH);

  digitalWrite(HT_CS3, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_LED_ON, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS3, HIGH);

  digitalWrite(HT_CS3, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_SLAVE_MODE, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS3, HIGH);

  digitalWrite(HT_CS3, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_COMMON_8NMOS, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS3, HIGH);

  digitalWrite(HT_CS3, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_PWM_CONTROL, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS3, HIGH);

  //                                  -------- Set HT1632 IC2 mode --------
  digitalWrite(HT_CS2, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_SYS_EN, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS2, HIGH);

  digitalWrite(HT_CS2, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_LED_ON, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS2, HIGH);

  digitalWrite(HT_CS2, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_SLAVE_MODE, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS2, HIGH);

  digitalWrite(HT_CS2, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_COMMON_8NMOS, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS2, HIGH);

  digitalWrite(HT_CS2, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_PWM_CONTROL, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS2, HIGH);

  //                                  -------- Set HT1632 IC4 mode --------
  digitalWrite(HT_CS4, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_SYS_EN, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS4, HIGH);

  digitalWrite(HT_CS4, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_LED_ON, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS4, HIGH);

  digitalWrite(HT_CS4, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_SLAVE_MODE, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS4, HIGH);

  digitalWrite(HT_CS4, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_COMMON_8NMOS, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS4, HIGH);

  digitalWrite(HT_CS4, LOW);
  delay(1);
  ht1632c_send_bits(HT1632C_CMD, 1 << 2);
  ht1632c_send_bits(HT1632_PWM_CONTROL, 1 << 7);
  ht1632c_send_bits(0, 1);
  digitalWrite(HT_CS4, HIGH);

  matrix.begin(ADA_HT1632_COMMON_8NMOS);

  delay(100);
  matrix.clearScreen();

  startTextDisplay((char *)"Welcome.");
  matrix.writeScreen();

  delay(1000);
  digitalWrite(LEDaG, LOW);
  digitalWrite(LEDbG, HIGH);
  digitalWrite(LEDcG, LOW);
  digitalWrite(LEDdG, HIGH);
  digitalWrite(LEDdR, LOW);
  digitalWrite(LEDcR, HIGH);
  digitalWrite(LEDbR, LOW);
  digitalWrite(LEDaR, HIGH);
  setLEDs();

  delay(1000);

  matrix.clearScreen();

  pinMode(buzzer, OUTPUT);
  pinMode(intLED, OUTPUT);

  digitalWrite(intLED, LOW);
  flag = false;
  a = 4;
  b = 0;
  c = 0;
}

void ht1632c_send_bits(byte bits, byte firstbit) {
  while (firstbit) {
    digitalWrite(HT_WR, LOW);
    if (bits & firstbit) digitalWrite(HT_DATA, HIGH);
    else digitalWrite(HT_DATA, LOW);
    digitalWrite(HT_WR, HIGH);
    firstbit >>= 1;
  }
}

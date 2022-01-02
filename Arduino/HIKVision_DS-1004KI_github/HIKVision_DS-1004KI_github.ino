// STM32F1xx
// VDTx

#include "Adafruit_GFX.h"
#include "Adafruit_HT1632.h"

#include "Definitions.h"

void setup() {
  initPTS();
  play2();
}

void loop() {

  doShuttle();

  doJog();

  doJoystick();

  //readSerial();

  doDisplay();

  unsigned long currentMillisKeyboard = millis();                             //  Slow keyboard polling by keyboardInterval
  if (currentMillisKeyboard - previousMillisKeyboard > keyboardInterval) {
    previousMillisKeyboard = currentMillisKeyboard;
    doKeyboard();
  }

  if (startDisplayRefresh) {
    previousMillisDisplay = millis();                                         //  Reset display timer
    startDisplayRefresh = false;
    displayRefresh = true;
  }

  unsigned long currentMillisDisplay = millis();
  if ((currentMillisDisplay - previousMillisDisplay > displayInterval) && displayRefresh) {
    previousMillisDisplay = currentMillisDisplay;
    clearText();                                                              //  When display timer reached, clear display
    displayRefresh = false;
  }

  unsigned long currentMillisClear = millis();
  if (currentMillisClear - previousMillisClear > clearInterval) {
    previousMillisClear = currentMillisClear;
    doLEDs();                                                                 //  Change LEDs for demo purposes
  }

  if (flag == true) {
    play();
  }

}


void play2() {
  int notelength;
  notelength = beatlength * song2_chorus_rhythmn[b];
  if (song2_chorus_melody[b] > 0) {
    tone(buzzer, song2_chorus_melody[b], notelength);
    c++;
  }
  b++;
  if (b >= sizeof(song2_chorus_melody) / sizeof(int)) {
    b = 0;
    c = 0;
  }

  delay(notelength);
  noTone(buzzer);
  digitalWrite(intLED, LOW);
  delay(notelength * beatseparationconstant);
}

void play() {
  int notelength;
  notelength = beatlength * song1_chorus_rhythmn[b];
  if (song1_chorus_melody[b] > 0) {
    digitalWrite(intLED, HIGH);

    String songText = lyrics_chorus[c];
    textSongDisplay((char *)songText.c_str());

    //Serial.print(lyrics_chorus[c]);
    tone(buzzer, song1_chorus_melody[b], notelength);
    c++;
  }
  b++;
  if (b >= sizeof(song1_chorus_melody) / sizeof(int)) {
    b = 0;
    c = 0;
    flag = false;
  }

  delay(notelength);
  noTone(buzzer);
  digitalWrite(intLED, LOW);
  delay(notelength * beatseparationconstant);
}

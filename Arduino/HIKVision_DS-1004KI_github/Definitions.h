#ifndef DEFINITIONS_H
#define DEFINITIONS_H

#include "Adafruit_GFX.h"
#include "Adafruit_HT1632.h"

HardwareSerial Serial1(PA10, PA9);
//HardwareSerial Serial(PA3, PA2);    // serial2
HardwareSerial Serial3(PB11, PB10);
HardwareSerial Serial4(PC11, PC10);


//  -- Screen
#define HT_DATA PE4
#define HT_WR PE5
#define HT_CS1 PE0
#define HT_CS2 PE2
#define HT_CS3 PE1
#define HT_CS4 PE3
#define HT1632C_CMD     B00000100
#define HT1632_SYS_EN 0x01
#define HT1632_LED_ON 0x03
#define HT1632_BLINK_OFF 0x08
#define HT1632_SLAVE_MODE 0x10    //  Set slave mode and clock source from external clock
#define HT1632_MASTER_MODE 0x14   //  Set master mode and clock source from on-chip RC oscillator
#define HT1632_INT_RC 0x18
#define HT1632_EXT_CLK 0x1C
#define HT1632_COMMON_8NMOS 0x20
#define HT1632_PWM_CONTROL 0xAF
Adafruit_HT1632LEDMatrix matrix = Adafruit_HT1632LEDMatrix(HT_DATA, HT_WR, HT_CS1, HT_CS3, HT_CS2, HT_CS4);
int displayUpdate = 0;
bool displayRefresh = false;


//  -- Joystick
#define joyPinX PC3
#define joyPinY PC2
#define joyPinZ PC1
#define joyPinB PC0
float joyX;
float joyY;
float joyZ;
bool joyB = false;
const int XdeadRangeLow  = 512 - 40;
const int XdeadRangeHigh = 512 + 40;
const int YdeadRangeLow  = 505 - 40;
const int YdeadRangeHigh = 505 + 40;
const int ZdeadRangeLow  = 512 - 40;
const int ZdeadRangeHigh = 512;
int X_min = 394;
int X_max = 638;
int Y_min = 375;
int Y_max = 635;
int Z_min = 260;
int Z_max = 680;
int out_min = -254;
int out_max = 254;
short shortVals[3] = {0, 0, 0};
short XShort = 0;
short YShort = 0;
short ZShort = 0;
short TShort = 0;
short oldShortVal0 = 0;
short oldShortVal1 = 0;
short oldShortVal2 = 0;

bool isManualMove = false;
unsigned long previousMillisMoveCheck = 0;
unsigned long currentMillisMoveCheck = 0;
long moveCheckInterval = 300;

int xDisplay = 0;
int yDisplay = 0;
int zDisplay = 0;
int oldxDisplay = 0;
int oldyDisplay = 0;
int oldzDisplay = 0;
int sSpeed = 3;
int oldsSpeed = 0;

int displayCommand = 000;
int oldDisplayCommand = 1;
bool displayUpadte = false;

unsigned long previousMillisDisplay = 0;
unsigned long currentMillisDisplay = 0;
long displayInterval = 2000;
bool startDisplayRefresh = true;

bool setClearKey = false;
bool setClear = false;

unsigned long previousMillisClear = 0;
unsigned long currentMillisClear = 0;
long clearInterval = 1000;
bool startClear = true;

int zoom_speed = 0;
int oldZoom_speed = 1;
bool zoomIN = false;
bool zoomOUT = false;

bool isRecording = false;
bool oldIsRecording = false;

String str;


//  -- Shuttle Ring
#define ringPinDir PE15
#define ringPinHlf PE12
#define ringPinMid PE14
#define ringPinDiv PE13

bool ringDir = true;
bool ringHlf = true;
bool ringMid = true;
bool ringDiv = true;
int ringLast = 0;
int oldRingLast = 0;


//  -- Jog Wheel
#define encoder0PinA PE10
#define encoder0PinB PE11
int val;
float encoder0Pos = 400;
int encoder0PinALast = LOW;
int n = LOW;


//  -- Mode LEDs
#define LEDCP PC13  //  LED clock pulse
#define LEDaG PA4   //  LED 1 Green
#define LEDbG PA6   //  LED 2 Green
#define LEDcG PB5   //  LED 3 Green
#define LEDdG PB9   //  LED 4 Green
#define LEDaR PA5   //  LED 1 Red
#define LEDbR PA8   //  LED 2 Red
#define LEDcR PB8   //  LED 3 Red
#define LEDdR PC12  //  LED 4 Red
#define intLED PA7  //  Internal LED DA1
#define buzzer PE8  //  Internal Buzzer
int LEDcount = 1;


//  -- Key Switch
#define keySW1 PB0   //  KeySwitch Pos 1
#define keySW2 PB15  //  KeySwitch Pos 2
#define keySW3 PB1   //  KeySwitch Pos 3
int keySwitchReading1;
int keySwitchReading2;
int keySwitchReading3;

bool buttonStateKey1;
bool buttonStateKey2;
bool buttonStateKey3;
bool lastButtonStateKey1 = HIGH;
bool lastButtonStateKey2 = HIGH;
bool lastButtonStateKey3 = HIGH;


//  -- Keyboard
#define colA PD0
#define colB PD1
#define colC PD2
#define colD PD3
#define colE PD4
#define colF PD5
#define colG PD6
#define colH PD7
#define colI PD8
#define rowA PD12
#define rowB PD11
#define rowC PD10
#define rowD PD9
#define rowE PD13
#define rowF PD14
unsigned long previousMillisKeyboard = 0;
int keyboardInterval = 5;

bool cam1pos1set = false;
bool cam1pos2set = false;
bool cam1pos3set = false;
bool cam1pos4set = false;
bool cam1pos5set = false;
bool cam1pos6set = false;
bool cam1atPos1 = false;
bool cam1atPos2 = false;
bool cam1atPos3 = false;
bool cam1atPos4 = false;
bool cam1atPos5 = false;
bool cam1atPos6 = false;
bool cam1pos1run = false;
bool cam1pos2run = false;
bool cam1pos3run = false;
bool cam1pos4run = false;
bool cam1pos5run = false;
bool cam1pos6run = false;

bool cam2pos1set = false;
bool cam2pos2set = false;
bool cam2pos3set = false;
bool cam2pos4set = false;
bool cam2pos5set = false;
bool cam2pos6set = false;
bool cam2atPos1 = false;
bool cam2atPos2 = false;
bool cam2atPos3 = false;
bool cam2atPos4 = false;
bool cam2atPos5 = false;
bool cam2atPos6 = false;
bool cam2pos1run = false;
bool cam2pos2run = false;
bool cam2pos3run = false;
bool cam2pos4run = false;
bool cam2pos5run = false;
bool cam2pos6run = false;

bool cam3pos1set = false;
bool cam3pos2set = false;
bool cam3pos3set = false;
bool cam3pos4set = false;
bool cam3pos5set = false;
bool cam3pos6set = false;
bool cam3atPos1 = false;
bool cam3atPos2 = false;
bool cam3atPos3 = false;
bool cam3atPos4 = false;
bool cam3atPos5 = false;
bool cam3atPos6 = false;
bool cam3pos1run = false;
bool cam3pos2run = false;
bool cam3pos3run = false;
bool cam3pos4run = false;
bool cam3pos5run = false;
bool cam3pos6run = false;

int keyReadingJB;
int keyReading11;
int keyReading12;
int keyReading14;
int keyReading15;
int keyReading16;
int keyReading17;
int keyReading18;
int keyReading19;
int keyReading21;
int keyReading22;
int keyReading23;
int keyReading24;
int keyReading25;
int keyReading26;
int keyReading27;
int keyReading28;
int keyReading29;
int keyReading31;
int keyReading32;
int keyReading33;
int keyReading34;
int keyReading35;
int keyReading36;
int keyReading37;
int keyReading38;
int keyReading39;
int keyReading41;
int keyReading42;
int keyReading43;
int keyReading44;
int keyReading45;
int keyReading46;
int keyReading47;
int keyReading48;
int keyReading49;
int keyReading51;
int keyReading52;
int keyReading53;
int keyReading54;
int keyReading55;
int keyReading56;
int keyReading61;
int keyReading62;
int keyReading63;
int keyReading64;
int keyReading65;
int keyReading66;
int keyReading67;
int keyReading68;

int buttonStateJB = LOW;
int buttonState11 = HIGH;
int buttonState12 = HIGH;
int buttonState14 = HIGH;
int buttonState15 = HIGH;
int buttonState16 = HIGH;
int buttonState17 = HIGH;
int buttonState18 = HIGH;
int buttonState19 = HIGH;
int buttonState21 = HIGH;
int buttonState22 = HIGH;
int buttonState23 = HIGH;
int buttonState24 = HIGH;
int buttonState25 = HIGH;
int buttonState26 = HIGH;
int buttonState27 = HIGH;
int buttonState28 = HIGH;
int buttonState29 = HIGH;
int buttonState31 = HIGH;
int buttonState32 = HIGH;
int buttonState33 = HIGH;
int buttonState34 = HIGH;
int buttonState35 = HIGH;
int buttonState36 = HIGH;
int buttonState37 = HIGH;
int buttonState38 = HIGH;
int buttonState39 = HIGH;
int buttonState41 = HIGH;
int buttonState42 = HIGH;
int buttonState43 = HIGH;
int buttonState44 = HIGH;
int buttonState45 = HIGH;
int buttonState46 = HIGH;
int buttonState47 = HIGH;
int buttonState48 = HIGH;
int buttonState49 = HIGH;
int buttonState51 = HIGH;
int buttonState52 = HIGH;
int buttonState53 = HIGH;
int buttonState54 = HIGH;
int buttonState55 = HIGH;
int buttonState56 = HIGH;
int buttonState61 = HIGH;
int buttonState62 = HIGH;
int buttonState63 = HIGH;
int buttonState64 = HIGH;
int buttonState65 = HIGH;
int buttonState66 = HIGH;
int buttonState67 = HIGH;
int buttonState68 = HIGH;

int lastButtonStateJB = LOW;
int lastButtonState11 = HIGH;
int lastButtonState12 = HIGH;
int lastButtonState14 = HIGH;
int lastButtonState15 = HIGH;
int lastButtonState16 = HIGH;
int lastButtonState17 = HIGH;
int lastButtonState18 = HIGH;
int lastButtonState19 = HIGH;
int lastButtonState21 = HIGH;
int lastButtonState22 = HIGH;
int lastButtonState23 = HIGH;
int lastButtonState24 = HIGH;
int lastButtonState25 = HIGH;
int lastButtonState26 = HIGH;
int lastButtonState27 = HIGH;
int lastButtonState28 = HIGH;
int lastButtonState29 = HIGH;
int lastButtonState31 = HIGH;
int lastButtonState32 = HIGH;
int lastButtonState33 = HIGH;
int lastButtonState34 = HIGH;
int lastButtonState35 = HIGH;
int lastButtonState36 = HIGH;
int lastButtonState37 = HIGH;
int lastButtonState38 = HIGH;
int lastButtonState39 = HIGH;
int lastButtonState41 = HIGH;
int lastButtonState42 = HIGH;
int lastButtonState43 = HIGH;
int lastButtonState44 = HIGH;
int lastButtonState45 = HIGH;
int lastButtonState46 = HIGH;
int lastButtonState47 = HIGH;
int lastButtonState48 = HIGH;
int lastButtonState49 = HIGH;
int lastButtonState51 = HIGH;
int lastButtonState52 = HIGH;
int lastButtonState53 = HIGH;
int lastButtonState54 = HIGH;
int lastButtonState55 = HIGH;
int lastButtonState56 = HIGH;
int lastButtonState61 = HIGH;
int lastButtonState62 = HIGH;
int lastButtonState63 = HIGH;
int lastButtonState64 = HIGH;
int lastButtonState65 = HIGH;
int lastButtonState66 = HIGH;
int lastButtonState67 = HIGH;
int lastButtonState68 = HIGH;

unsigned long lastDebounceTimeJB = 0;
unsigned long lastDebounceTime11 = 0;
unsigned long lastDebounceTime12 = 0;
unsigned long lastDebounceTime14 = 0;
unsigned long lastDebounceTime15 = 0;
unsigned long lastDebounceTime16 = 0;
unsigned long lastDebounceTime17 = 0;
unsigned long lastDebounceTime18 = 0;
unsigned long lastDebounceTime19 = 0;
unsigned long lastDebounceTime21 = 0;
unsigned long lastDebounceTime22 = 0;
unsigned long lastDebounceTime23 = 0;
unsigned long lastDebounceTime24 = 0;
unsigned long lastDebounceTime25 = 0;
unsigned long lastDebounceTime26 = 0;
unsigned long lastDebounceTime27 = 0;
unsigned long lastDebounceTime28 = 0;
unsigned long lastDebounceTime29 = 0;
unsigned long lastDebounceTime31 = 0;
unsigned long lastDebounceTime32 = 0;
unsigned long lastDebounceTime33 = 0;
unsigned long lastDebounceTime34 = 0;
unsigned long lastDebounceTime35 = 0;
unsigned long lastDebounceTime36 = 0;
unsigned long lastDebounceTime37 = 0;
unsigned long lastDebounceTime38 = 0;
unsigned long lastDebounceTime39 = 0;
unsigned long lastDebounceTime41 = 0;
unsigned long lastDebounceTime42 = 0;
unsigned long lastDebounceTime43 = 0;
unsigned long lastDebounceTime44 = 0;
unsigned long lastDebounceTime45 = 0;
unsigned long lastDebounceTime46 = 0;
unsigned long lastDebounceTime47 = 0;
unsigned long lastDebounceTime48 = 0;
unsigned long lastDebounceTime49 = 0;
unsigned long lastDebounceTime51 = 0;
unsigned long lastDebounceTime52 = 0;
unsigned long lastDebounceTime53 = 0;
unsigned long lastDebounceTime54 = 0;
unsigned long lastDebounceTime55 = 0;
unsigned long lastDebounceTime56 = 0;
unsigned long lastDebounceTime61 = 0;
unsigned long lastDebounceTime62 = 0;
unsigned long lastDebounceTime63 = 0;
unsigned long lastDebounceTime64 = 0;
unsigned long lastDebounceTime65 = 0;
unsigned long lastDebounceTime66 = 0;
unsigned long lastDebounceTime67 = 0;
unsigned long lastDebounceTime68 = 0;

bool set1held = false;
unsigned long debounceDelay = 10;

#define  e3f    155     // 155 Hz
#define  a3f    208     // 208 Hz
#define  b3f    233     // 233 Hz
#define  b3     247     // 247 Hz
#define  c4     261     // 261 Hz MIDDLE C
#define  c4s    277     // 277 Hz
#define  e4f    311     // 311 Hz
#define  f4     349     // 349 Hz
#define  a4f    415     // 415 Hz
#define  b4f    466     // 466 Hz
#define  b4     493     // 493 Hz
#define  c5     523     // 523 Hz
#define  c5s    554     // 554 Hz
#define  e5f    622     // 622 Hz
#define  f5     698     // 698 Hz
#define  f5s    740     // 740 Hz
#define  a5f    831     // 831 Hz

#define rest    -1

volatile int beatlength = 100; // determines tempo
float beatseparationconstant = 0.3;

int threshold;

int a; // part index
int b; // song index
int c; // lyric index

boolean flag;

// Parts 1 and 2 (Intro)

int song1_intro_melody[] =
{c5s, e5f, e5f, f5, a5f, f5s, f5, e5f, c5s, e5f, rest, a4f, a4f};

int song1_intro_rhythmn[] =
{6, 10, 6, 6, 1, 1, 1, 1, 6, 10, 4, 2, 10};

// Parts 3 or 5 (Verse 1)

int song1_verse1_melody[] =
{ rest, c4s, c4s, c4s, c4s, e4f, rest, c4, b3f, a3f,
  rest, b3f, b3f, c4, c4s, a3f, a4f, a4f, e4f,
  rest, b3f, b3f, c4, c4s, b3f, c4s, e4f, rest, c4, b3f, b3f, a3f,
  rest, b3f, b3f, c4, c4s, a3f, a3f, e4f, e4f, e4f, f4, e4f,
  c4s, e4f, f4, c4s, e4f, e4f, e4f, f4, e4f, a3f,
  rest, b3f, c4, c4s, a3f, rest, e4f, f4, e4f
};

int song1_verse1_rhythmn[] =
{ 2, 1, 1, 1, 1, 2, 1, 1, 1, 5,
  1, 1, 1, 1, 3, 1, 2, 1, 5,
  1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 3,
  1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 4,
  5, 1, 1, 1, 1, 1, 1, 1, 2, 2,
  2, 1, 1, 1, 3, 1, 1, 1, 3
};

const char* lyrics_verse1[] =
{ "We're ", "no ", "strangers ", "", "to ", "love ", "", "\r\n",
  "You ", "know ", "the ", "rules ", "and ", "so ", "do ", "I\r\n",
  "A ", "full ", "commitment's ", "", "", "what ", "I'm ", "thinking ", "", "of", "\r\n",
  "You ", "wouldn't ", "", "get ", "this ", "from ", "any ", "", "other ", "", "guy\r\n",
  "I ", "just ", "wanna ", "", "tell ", "you ", "how ", "I'm ", "feeling", "\r\n",
  "Gotta ", "", "make ", "you ", "understand", "", "\r\n"
};

// Parts 4 or 6 (Chorus)

int song2_chorus_melody[] =
{ e3f, a3f, c4, a3f, c4, e4f,
  e3f, a3f, c4, a3f, c4, e4f
};

int song2_chorus_rhythmn[] =
{ 6, 6, 2, 2, 2, 6,
  6, 6, 2, 2, 2, 6
};

int song1_chorus_melody[] =
{ b4f, b4f, a4f, a4f,
  f5, f5, e5f, b4f, b4f, a4f, a4f, e5f, e5f, c5s, c5, b4f,
  c5s, c5s, c5s, c5s,
  c5s, e5f, c5, b4f, a4f, a4f, a4f, e5f, c5s,
  b4f, b4f, a4f, a4f,
  f5, f5, e5f, b4f, b4f, a4f, a4f, a5f, c5, c5s, c5, b4f,
  c5s, c5s, c5s, c5s,
  c5s, e5f, c5, b4f, a4f, rest, a4f, e5f, c5s, rest
};

int song1_chorus_rhythmn[] =
{ 1, 1, 1, 1,
  3, 3, 6, 1, 1, 1, 1, 3, 3, 3, 1, 2,
  1, 1, 1, 1,
  3, 3, 3, 1, 2, 2, 2, 4, 8,
  1, 1, 1, 1,
  3, 3, 6, 1, 1, 1, 1, 3, 3, 3, 1, 2,
  1, 1, 1, 1,
  3, 3, 3, 1, 2, 2, 2, 4, 8, 4
};

const char* lyrics_chorus[] =
{ "Never ", "", "gonna ", "", "give ", "you ", "up\r\n",
  "Never ", "", "gonna ", "", "let ", "you ", "down", "", "\r\n",
  "Never ", "", "gonna ", "", "run ", "around ", "", "", "", "and ", "desert ", "", "you\r\n",
  "Never ", "", "gonna ", "", "make ", "you ", "cry\r\n",
  "Never ", "", "gonna ", "", "say ", "goodbye ", "", "", "\r\n",
  "Never ", "", "gonna ", "", "tell ", "a ", "lie ", "", "", "and ", "hurt ", "you\r\n"
};

#endif

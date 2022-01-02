# Hikvision-DS1004KI
Hikvision DS-1004KI PTZ Keyboard - Reprogramming

![](https://github.com/cbradburne/Hikvision-DS1004KI/blob/main/Documents/readme-docs/ds-1004ki.jpg?raw=true)

You can completly re-write the firmware for your DS1004KI using Arduino IDE and a few extra bits.<br><br>

You'll need:<br>
Arduino IDE - https://www.arduino.cc/en/software<br>
Modified Libraries - https://github.com/cbradburne/Hikvision-DS1004KI/tree/main/Arduino/libraries<br>
Waveshare STLinkv2 - https://amzn.to/3qEdqnB<br>
STM32CubeProgrammer - https://www.st.com/en/development-tools/stm32cubeprog.html<br>
Philips Screwdriver<br>
Hair dryer - To remove the display's cover, to access hidden screws.<br><br>

## Install STM32 Arduino Boards
Open Arduino IDE<br>
Open Preferences and paste this link in to the "Additional Boards Manager URLs":<br>
`https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json`<br>
Click OK<br>
Click Tools - Board - Boards Manager...<br>
Search for "STM32"<br>
Install - "STM32 MCU based boards"<br>
Click Tools - Board - "Generic STM32F1 series"<br>
Click Tools - Board part number - "Generic F103VDTx"<br>
_(Note: the CPU used is actually a STM32F101VDT, but they are pin compatible)_

## Install Modified Arduino libraries
2 libraries are needed. These are slightly modified libraries to work with the LED matrix display.<br>
Copy these folders in to your Arduino libraries folder:<br>
&nbsp;&nbsp;&nbsp;&nbsp;[Adafruit-GFX-Library](https://github.com/cbradburne/Hikvision-DS1004KI/tree/main/Arduino/libraries)<br>
&nbsp;&nbsp;&nbsp;&nbsp;[HT1632](https://github.com/cbradburne/Hikvision-DS1004KI/tree/main/Arduino/libraries)<br><br>


## Change STM32 serial buffer size
Close Arduino IDE.<br><br>
macOS:<br>
In your home folder, open "Library" folder (may be hidden, click "View", "Show View Options", check "Show Library Folder").<br>
Open "Arduino15",<br>
Then navigate to the file "HardwareSerial.h" located below:

![](https://github.com/cbradburne/Hikvision-DS1004KI/blob/main/Documents/readme-docs/STM32%20Serial%20Buffer%20Size%20File%20Location.png?raw=true)

Open "HardwareSerial.h" in a text editor (Visual Studio Code recommended).<br>
Then change 64 to 256 on lines, 44 & 47.<br><br>
Before:<br>
![](https://github.com/cbradburne/Hikvision-DS1004KI/blob/main/Documents/readme-docs/BufferB.png?raw=true)
<br><br>
After:<br>
![](https://github.com/cbradburne/Hikvision-DS1004KI/blob/main/Documents/readme-docs/BufferA.png?raw=true)<br><br>

Save the file and reopen Arduino IDE.

You should now be able to compile the demo sketch - https://github.com/cbradburne/Hikvision-DS1004KI/tree/main/Arduino/HIKVision_DS-1004KI_github<br><br>

Click - Sketch - Export complied Binary<br>
When it's finished, click - Sketch - Show Sketch Folder<br>
There should now be a .bin file.<br><br>

Connect the STMLinkV2 to your computer and DS-1004KI via the 20 pin connector. Pin 1 (red cable) on the the DS-1004KI is top right, and power on the DS-1004KI.<br>
Open STM32CubeProgrammer.

<br><br>
To be continued...
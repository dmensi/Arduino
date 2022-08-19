hd44780 Extensible hd44780 LCD library hd44780Version
Licensing
GPLv3Logo

hd44780 is an open source project for open source projects. Those wishing to create closed projects should seek an alternate solution. hd44780 is licensed under the terms of the GNU General Public License v3.0 as opposed to the more liberal licensing terms of the GNU Lesser General Public License (LGPL), MIT, modified BSD, Apache, etc..

GPL licensing information can found here: https://www.gnu.org/licenses/

For full details on the licensing of the hd44780 library and its components, see the included licensing file.

Library Overview
hd44780 is an extensible Arduino LCD library for hd44780 based LCD displays. The library consists of a hd44780 base class combined with one or more i/o subclasses to perform the i/o communication between the host and the hd44780 display interface.

While the library is API compatible with the Arduino IDE bundled LiquidCrystal library, hd44780 is not a direct drop in replacement for the LiquidCrystal library.

The API functionality provided by the hd44780 base class, when combined with an hd44780 library i/o subclass, is compatible with most of the API functionality of the Arduino LiquidCrystal library as well as with most of the LCD API 1.0 Specification (some of which is nearly obsolete).

The hd44780 API also provides some addtional extensions and all the API functions provided by hd44780 are common across all i/o subclasses. The most most significant extensions being:

ability to enable automatic line wrapping
ability to modify the libraries expected command execution times.
API functions return a status to indicate whether successful
automatic detection and s/w work around for LCD keypad shields with bad backlight circuit
self configuration of i2c address and pin mappings for i2c backpacks
ability to tell if lcd initialization failed
ability to read data or status from the LCD (requires r/w control)
ability to tell if sending a raw command to the LCD failed
S/W requirements
IDE version 1.0.1 or later (versions 1.6.9 and higher are recommended)
IDE versions that should be avoided:
IDE versions 1.5 to 1.55 (unnecessary file name restrictions, breaks many libraries)
IDE version 1.6.6 (has function prototyping issues that can break some sketches)
IDE version 1.6.8 (has serial port issues that breaks on certain boards)
H/W support
Library should work on all Arduino boards including boards with AVR, pic32, arm, and ESP8266 processors.

WARNING
Use caution when using 3v only processors like arm and ESP8266 processors when interfacing with 5v modules as not doing proper level shifting or incorrectly hooking things up can damage the processor.

The library currenly comes with the following i/o subclasses:

hd44780_HC1627_I2C control LCD with native i2c interface (Tsingtek Display HC1627)

hd44780_I2Cexp control LCD using i2c i/o exapander backpack (PCF8574 or MCP23008)

hd44780_I2Clcd control LCD with native i2c interface (PCF2116, PCF2119x, etc...)

hd44780_NTCU165ECPB control Noritake CU165ECBP-T2J LCD display over SPI

hd44780_NTCU20025ECPB_pinIO control Noritake CU20025ECPB using direct Arduino pin connections

hd44780_NTCUUserial control Noritake CU-U Series VFD display in serial mode

hd44780_pinIO control LCD using direct Arduino Pin connections

Installation
For generic information about Arduino libraries and how to install them consult the Arduino Libraries page: https://www.arduino.cc/en/Guide/Libraries

For ease of proper installation, the preferred method of installing the library is to use the library manager. The use of importing a .zip file is highly discouraged unless using IDE versions prior to version 1.6.2

Installation using Library manager (IDE 1.6.2 and later)
In the IDE, Simply click on:
[Sketch]->Include Library->Manage Libraries...
or
[Tools]->Manage Libraries...
Then search for "Extensible hd44780" to locate the library and install it.
There is no need to uninstall or modify any other LCD libary that may have already been installed.

Installation using zip file w/o library manager (IDE 1.6.1 and earlier)
Installation requires downloading a zip image and then, depending on the version of the IDE you can either install it from the IDE or install it manually by unziping the file into your sketchbook libraries.

NOTE: due to the way github creates its zip files, there is a manual step that must be done to rename the library directory created in your sketchbook libraries area.

First, dowload a library zip image from the github repository releases area:
https://github.com/duinoWitchery/hd44780/releases
Download the image by clicking the zip icon for the desired release.

Installation of zip file library on IDE 1.0.6 to 1.6.1
The library can be installed from the zip image using the IDE. Install it by clicking on: [Sketch]->Include Library->Add .ZIP library... then, simply select the hd44780.zip image you downloaded.

The hd44780 sketchbook library must now be renamed. (see below)

Installation of zip file library on IDE 1.0 to 1.0.5
On these versions of the IDE, the install must be done manually. To install the library simply extract it into your sketchbook/libraries directory. If you don't know where you sketchbook/libraries directory is simply click on: [File]->Preferences or from the keyboard type: <ctrl>comma (hold ctrl and press comma) The location of your sketchbook directory will be in the text box. The zip image must be installed in a directory called "libraries" under that directory.

After the zip file has been extracted and the hd44780 sketchbook library has been created, the library must now be renamed. (see below)

Renaming hd44780 libary directory name after manual installation w/o library manager
When not using the library manager, the hd44780 library directory created in your sketchbook libary area will not be the correct name. This is due to the way github creates its zip files and the way the IDE library manager works. The downloaded zip file and internal directory will have a name like hd44780-X.Y.Z which causes the sketchbook library name to also be hd44780-X.Y.Z While the IDE will usually allow this to work, the proper name should be simply "hd44780" and not using its real name can cause issues in the future.
To rename the library directory, simply go to the sketchbook library location and rename it. If you don't know where you sketchbook/libraries directory is simply click on: [File]->Preferences or from the keyboard type: <ctrl>comma (hold ctrl and press comma) The location of your sketchbook directory will be in the text box.
Use your favorite tool to rename it.

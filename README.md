# Fork of Adafruit DotStar with a patch from yngndrw

Arduino library for controlling two-wire-based LED pixels and strips such as Adafruit DotStar LEDs and other APA102-compatible devices.

This version has a patch from yngndrw (from pull request https://github.com/adafruit/Adafruit_DotStar/pull/20) to enable use of a different SPI port.  For example, if a sercom is used on an M0 to define a second SPI port, then this patch allows that port to be used for the DotStar LEDs.

Attaching a DotStar strip to an M0 Adalogger or an M0 WiFi would normally need software SPI running the LEDs (as there are peripherals hard-wired into the pre-defined SPI port), but since a second SPI port can be defined using the M0's sercom capability then this library allows that second hardware SPI port to drive the DotStar LED strip.

## Usage

Clone this repo into your Arduino libraries directory (e.g. `~/Arduino/libraries`)


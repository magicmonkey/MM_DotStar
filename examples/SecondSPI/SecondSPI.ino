#include <MM_DotStar.h>
#include "wiring_private.h"

SPIClass SPI1(&sercom1, 12, 13, 11, SPI_PAD_0_SCK_1, SERCOM_RX_PAD_3);

Adafruit_DotStar dotStarStrip = Adafruit_DotStar(NUMBER_OF_PIXELS, &SPI1, DOTSTAR_BGR);

void setup()
{
	dotStarStrip.begin();
	dotStarStrip.setBrightness(32);
	dotStarStrip.show();

	pinPeripheral(11, PIO_SERCOM);
	pinPeripheral(12, PIO_SERCOM);
	pinPeripheral(13, PIO_SERCOM);
}

void loop()
{
	dotStarStrip.setPixelColor(0, 255, 0, 0);
	dotStarStrip.show();
}

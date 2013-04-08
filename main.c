#include "ch.h"
#include "hal.h"

int main(void)
{
	halInit();
	chSysInit();

	palSetPadMode(GPIOF, 6, PAL_MODE_OUTPUT_PUSHPULL);

	while (TRUE) {
		palTogglePad(GPIOF, 6);
		chThdSleepMilliseconds(500);
	}
}

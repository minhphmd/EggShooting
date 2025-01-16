#include <gui/screen4_screen/Screen4View.hpp>
#include <stdio.h>
#include "cmsis_os.h"

static const uint16_t TEXTAREA4_SIZE = 50;
touchgfx::Unicode::UnicodeChar textArea4Buffer[TEXTAREA4_SIZE];

char s4[TEXTAREA4_SIZE];

extern osMessageQueueId_t Queue2Handle;

extern uint32_t final_score;

Screen4View::Screen4View()
{

}

void Screen4View::setupScreen()
{
    Screen4ViewBase::setupScreen();

    // Explosion signal
	uint8_t data = 'L';
	osMessageQueuePut(Queue2Handle, &data, 0, 10);

	snprintf(s4, TEXTAREA4_SIZE, "%u", final_score);
	Unicode::strncpy(textArea4Buffer, s4, TEXTAREA4_SIZE);
	scoreArea.setWildcard(textArea4Buffer);
	scoreArea.resizeToCurrentText();
	scoreArea.invalidate();
}

void Screen4View::tearDownScreen()
{
    Screen4ViewBase::tearDownScreen();
}

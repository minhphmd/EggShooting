#include <gui/screen3_screen/Screen3View.hpp>
#include <stdio.h>

Screen3View::Screen3View()
{

}

void Screen3View::setupScreen()
{
    Screen3ViewBase::setupScreen();
//    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));
}

void Screen3View::tearDownScreen()
{
    Screen3ViewBase::tearDownScreen();
}

void Screen3View::tickEvent() {

}

/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN2VIEWBASE_HPP
#define SCREEN2VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/SVGImage.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class Screen2ViewBase : public touchgfx::View<Screen2Presenter>
{
public:
    Screen2ViewBase();
    virtual ~Screen2ViewBase();
    virtual void setupScreen();
    virtual void handleTickEvent();

    /*
     * Custom Actions
     */
    virtual void changeToLoseScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void tickEvent()
    {
        // Override and implement this function in Screen2
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image background;
    touchgfx::Line border;
    touchgfx::PainterRGB565 borderPainter;
    touchgfx::Circle bullet_ball;
    touchgfx::PainterRGB565 bullet_ballPainter;
    touchgfx::Circle red;
    touchgfx::PainterRGB565 redPainter;
    touchgfx::Circle green;
    touchgfx::PainterRGB565 greenPainter;
    touchgfx::Circle yellow;
    touchgfx::PainterRGB565 yellowPainter;
    touchgfx::SVGImage arrow_svg;
    touchgfx::ButtonWithLabel backButton;
    touchgfx::TextAreaWithOneWildcard scoreArea;

    /*
     * Wildcard Buffers
     */
    static const uint16_t SCOREAREA_SIZE = 50;
    touchgfx::Unicode::UnicodeChar scoreAreaBuffer[SCOREAREA_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 3600;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen2ViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREEN2VIEWBASE_HPP

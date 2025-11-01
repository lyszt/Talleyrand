//
// Created by abensoft on 10/31/25.
//

#include "screen_component.h"
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>


void screen_component::renderScreen() {
    auto screen = ftxui::Screen::Create(
        ftxui::Dimension::Full(),   
        ftxui::Dimension::Fixed(10) // Fixed height of 10 rows
    );

    screen.Print();
}
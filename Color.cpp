#include "Color.h"
#include <iostream>

Color::Color(uint8_t red, uint8_t green, uint8_t blue)
    : m_red(red), m_green(green), m_blue(blue)
{
}

void Color::print()
{
    std::cout << "r: " << static_cast<int>(m_red)
              << ", g: " << static_cast<int>(m_green)
              << ", b: " << static_cast<int>(m_blue) << std::endl;
}

uint8_t Color::getRed() const
{
    return m_red;
}

uint8_t Color::getGreen() const
{
    return m_green;
}

uint8_t Color::getBlue() const
{
    return m_blue;
}

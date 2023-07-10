#pragma once

#include <cstdint>

class Color
{
public:
    Color(uint8_t red, uint8_t green, uint8_t blue);

    void print();

    uint8_t getRed() const;
    uint8_t getGreen() const;
    uint8_t getBlue() const;

private:
    uint8_t m_red;
    uint8_t m_green;
    uint8_t m_blue;
};

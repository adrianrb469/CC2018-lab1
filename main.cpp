#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cstring>
#include <cmath>
#include <algorithm>

#include "Framebuffer.h"
#include "Color.h"
#include "Vertex2.h"

void render(Framebuffer &framebuffer)
{

    Color white = Color(255, 255, 255);
    Color yellow = Color(255, 255, 0);
    Color red = Color(255, 0, 0);
    Color green = Color(0, 255, 0);
    Color blue = Color(0, 0, 255);
    Color black = Color(0, 0, 0);

    std::vector<Vertex2> p1 = {
        {165, 380},
        {185, 360},
        {180, 330},
        {207, 345},
        {233, 330},
        {230, 360},
        {250, 380},
        {220, 385},
        {205, 410},
        {193, 383}};

    framebuffer.fillPolygon(p1, yellow);
    framebuffer.polygon(p1, white);

    framebuffer.renderBuffer();
}

int main()
{
    Framebuffer framebuffer(800, 420, Color(0, 0, 0));
    render(framebuffer);

    return 0;
}

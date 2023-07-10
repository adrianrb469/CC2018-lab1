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

    std::vector<Vertex2> p4 = {
        {413, 177},
        {448, 159},
        {502, 88},
        {553, 53},
        {535, 36},
        {676, 37},
        {660, 52},
        {750, 145},
        {761, 179},
        {672, 192},
        {659, 214},
        {615, 214},
        {632, 230},
        {580, 230},
        {597, 215},
        {552, 214},
        {517, 144},
        {466, 180}};

    std::vector<Vertex2> p5 = {
        {682, 175},
        {708, 120},
        {735, 148},
        {739, 170}};

    framebuffer.polygon(p4, white);
    framebuffer.fillPolygon(p4, green);
    framebuffer.polygon(p5, white);
    framebuffer.fillPolygon(p5, black);

    framebuffer.renderBuffer();
}

int main()
{
    Framebuffer framebuffer(800, 420, Color(0, 0, 0));
    render(framebuffer);

    return 0;
}

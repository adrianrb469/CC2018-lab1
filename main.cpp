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

    std::vector<Vertex2> p3 = {
        {377, 249},
        {411, 197},
        {436, 249}};

    framebuffer.polygon(p3, white);
    framebuffer.fillPolygon(p3, red);

    framebuffer.renderBuffer();
}

int main()
{
    Framebuffer framebuffer(800, 420, Color(0, 0, 0));
    render(framebuffer);

    return 0;
}

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

    std::vector<Vertex2> p2 = {
        {321, 335},
        {288, 286},
        {339, 251},
        {374, 302}};

    std::vector<Vertex2> p3 = {
        {377, 249},
        {411, 197},
        {436, 249}};

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
    framebuffer.fillPolygon(p1, yellow);
    framebuffer.polygon(p1, white);
    framebuffer.fillPolygon(p2, blue);
    framebuffer.polygon(p2, white);
    framebuffer.polygon(p3, white);
    framebuffer.fillPolygon(p3, red);
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

#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>
#include <cstdio>
#include "shapes.h"

sf::RectangleShape ShapesGameBorder;

void shapesGameBorderFunction() {
    ShapesGameBorder.setSize(sf::Vector2(250.f, 250.f));
    ShapesGameBorder.setPosition(20, 20);
    ShapesGameBorder.scale(2.4, 2.4);
    ShapesGameBorder.setFillColor(sf::Color::Black);
    ShapesGameBorder.setOutlineColor(sf::Color::Red);
    ShapesGameBorder.setOutlineThickness(10.f);
};
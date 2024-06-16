#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cstdio>
#include "shapes.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 640), "Tetroid");

    shapesGameBorderFunction();

    sf::Font GameFont;
    if (!GameFont.loadFromFile("arial.ttf")) {
        printf("Error loading fonts!");
        return -1;
    }

    void TextGameName();

    sf::Text GameName;
    GameName.setFont(GameFont);
    GameName.setString("TETROID");
    GameName.setCharacterSize(64);
    GameName.setStyle(sf::Text::Bold);
    GameName.setPosition(200, 25);
    GameName.setFillColor(sf::Color::White);

    sf::Music music;
    if (!music.openFromFile("gamemusic.wav")) {
        printf("error loading music!");
        return -1;
    }

    /*music.setLoop(true);
    music.play();*/

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear();
        window.draw(ShapesGameBorder);
        window.draw(GameName);
        window.display();
    }

    return 0;
}
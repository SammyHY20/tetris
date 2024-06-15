#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 640), "Tetroid");
    
    sf::RectangleShape RectangleShape(sf::Vector2(250.f, 250.f));
    RectangleShape.setFillColor(sf::Color(225, 255, 210, 255));

    sf::CircleShape CircleShape(100.f);
    CircleShape.setFillColor(sf::Color::Blue);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear();
        window.draw(RectangleShape);
        window.display();
    }

    return 0;
}
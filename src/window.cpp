#include <SFML/Graphics.hpp>

#include "window.h"

Window::Window() {
}

void Window::main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "TileRPG");

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }
}

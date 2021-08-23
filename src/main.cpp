#include <iostream>
#include <SFML/Window.hpp>

int main()
{
    sf::Window wnd(sf::VideoMode(1024, 768), "TopLog");

    while (wnd.isOpen())
    {
        sf::Event event;
        while(wnd.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                wnd.close();
        }
    }
    return 0;
}





#include <iostream>
#include <cstdlib>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Window/Event.hpp>
#include <string>


int randomgeneratorinit()
{
    srand(time(NULL));
    return 0;
}
int tmp_random_init = randomgeneratorinit(); // that trick makes function execute before main

int startGUIMode()
{

    std::cout<<"Started GUI mode"<< std::endl;
    sf::RenderWindow window(sf::VideoMode(800, 600, 32), "title");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}
int startCMDMode()
{
    std::cout<<"CMD mode"<< std::endl;
    return 0;
}



int main(int argc, char* argv[])
{
    std::cout<< "Use command --no-GUI to start app in command line mode or skip to start GUI"<< std::endl;
    if(!argv[1])
    {
        startGUIMode();
    }
    else if(static_cast<std::string>(argv[1])=="--no-GUI")
    {
        startCMDMode();
    }
    else
    {
        std::cout<< "Command not recognized." << std::endl;
    }
    return 0;
}

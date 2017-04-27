#include <SFML/Graphics.hpp>
#include "Menu.h"


sf::RenderWindow app;
int main()
{
    // Create the main window
    app.create(sf::VideoMode(800, 600), "TicTacToe");

    Menu menu1;
    // Load a sprite to display
	// Start the game loop
    while (app.isOpen())
    {
        // Process events
        sf::Event event;
        while (app.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                app.close();
            if (event.type == sf::Event::MouseMoved)
                menu1.MouseOn(event.mouseMove.x, event.mouseMove.y);
        }

        // Clear screen
        app.clear();

        // Draw the sprite
        app.draw(menu1);
//        app.draw(sprite9x9);
//        app.draw(sprite16x16);
//        app.draw(sprite99x99);

        // Update the window
        app.display();
    }

    return EXIT_SUCCESS;
}

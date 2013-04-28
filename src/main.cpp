#include <stdio.h>
#include "SFML/Graphics.hpp"

int main(int argc, char const *argv[])
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "PONG");

	while (window.IsOpened()) {
		sf::Event event;

		// Process any input events
		while (window.GetEvent(event)) {
			// Quit game if the window was closed or if the escape key was pressed
			if ((event.Type == sf::Event::Closed) ||
				((event.Type == sf::Event::KeyPressed) && (event.Key.Code == sf::Key::Escape)))
			{
				window.Close();
				break;
			}
		}

		// TODO: Limit framerate to make it easier on processors (max 60fps?)
		window.Clear();

		// Do drawing here
		// Drawing a rectangle
		sf::Color rectangleColor = sf::Color(255, 255, 255);	// Color it white!
		sf::Shape rectangle = sf::Shape::Rectangle(0.0f, 0.0f, 10.0f, 10.0f, rectangleColor);
		window.Draw(rectangle);

		// Display the drawn frame in the window
		window.Display();
	}

	return 0;
}

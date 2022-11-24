#include <SFML/Graphics.hpp>

#include <Windows.h>
#include <iostream>

using namespace sf;

int main() {
	RenderWindow window(VideoMode(800, 600), "title");

	Font arial;
	if (!arial.loadFromFile("resources/fonts/arial.ttf")) printf("error font");

	Text miya;
	miya.setFont(arial);
	miya.setString("hello");
	miya.setCharacterSize(24);
	miya.setFillColor(Color::Red);
	miya.setStyle(sf::Text::Bold | sf::Text::Underlined);

	RectangleShape rect;
	rect.setSize(Vector2f(50, 50));
	rect.setFillColor(Color::Red);

	while (window.isOpen()) {
		Event ev;
		while (window.pollEvent(ev))
			if (ev.type == Event::Closed)
				window.close();

		window.clear(Color(33,33,33));

		Vector2i pos = Mouse::getPosition(window);

		miya.setPosition(pos.x + 50,pos.y);

		window.draw(miya);

		window.display();
	}

	return 1;
}


/*

to-do:

polymorphism etc...
testing
different 'scenes'
	- each for different algorithm thingys

sql data save for each scene of inputs

*/
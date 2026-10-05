#include <SFML/Graphics.hpp>
#include <iostream>
//main.cpp
sf::Texture spritesheet;
sf::Sprite invader;

void init() {
    if (!spritesheet.loadFromFile("res/img/invaders_sheet.png")) {
        std::cerr << "Failed to load spritesheet!" << std::endl;
    }
    invader.setTexture(spritesheet);
    invader.setTextureRect(IntRect(Vector2i(0, 0), Vector2i(32, 32)));
}

void render(sf::RenderWindow& window) {
    window.draw(invader);
}
void update(float dt) {
	// Update Everything
}

void render(sf::RenderWindow& window) {
	// Draw Everything
}

void clean() {
	//free up the memory if necessary.
}
int main() {
	//create the window
	sf::RenderWindow window(sf::VideoMode({ game_width, game_height }), "PONG");
	//initialise and load
	init();
	while (window.isOpen()) {
		//Calculate dt
		
			window.clear();
		update(dt);
		render(window);
		//wait for the time_step to finish before displaying the next frame.
		sf::sleep(time_step);
		//Wait for Vsync
		window.display()
	}
	//Unload and shutdown
	clean();
}
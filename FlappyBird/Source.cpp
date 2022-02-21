#include<SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include<SFML/System.hpp>
#include "Defenitions.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(sWidth, sHieght), "Flappy Bird");

	while (window.isOpen())
	{
		//events managment		

		//update game 

		//draw
		window.clear();

		//draw objects 
		window.display();
	}

	return 0;
}

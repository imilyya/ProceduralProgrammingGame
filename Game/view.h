#include <SFML/Graphics.hpp>

sf::View view;

void setPlayersCoordinateForView(float x, float y) 
{
	float tempX{ x }, tempY{ y };

	if (x < 320) tempX = 320;
	if (y < 240) tempY = 240;
	if (y > 554) tempY = 554;
	if (x > 1920) tempX = 1920;

	view.setCenter(tempX, tempY);
}

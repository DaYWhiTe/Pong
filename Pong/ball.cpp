#include "stdafx.h"
#include "ball.h"

// This the constructor and it is called when we create an object
Ball::Ball(float startX, float startY)
{
	position.x = startX;
	position.y = startY;

	ballShape.setSize(sf::Vector2f(10, 10));
	ballShape.setPosition(position);
}
FloatRect Ball::getPosition()
{
	return ballShape.getGlobalBounds();
}

RectangleShape Ball::getShape()
{
	return ballShape;
}

float Ball::getXVelocity()
{
	return xVelocity;
}

void Ball::reboundSides()
{
	xVelocity = -xVelocity;
}

void Ball::reboundBatOrTop()
{
	position.y -= (yVelocity * 30);
	yVelocity = -yVelocity;

}

void Ball::hitBottom()
{
	position.y = 1;
	position.x = 500;
}

void Ball::update()
{
	// Update the ball position variables
	position.y += yVelocity;
	position.x += xVelocity;

	// Move the ball and the bat
	ballShape.setPosition(position);
}
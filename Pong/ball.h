#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Ball
{
private:
	Vector2f position;

	// A RectangleShape object called ref
	RectangleShape ballShape;

	float xVelocity = .1f;
	float yVelocity = .1f;

public:
	Ball(float startX, float startY);

	FloatRect getPosition();

	RectangleShape getShape();

	float getXVelocity();

	void reboundSides();

	void reboundBatOrTop();

	void hitBottom();

	void update();

};
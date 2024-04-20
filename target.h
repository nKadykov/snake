#pragma once
#include <SFML/Graphics.hpp>

struct TargetPoint {
	int x;
	int y;
};

class Target
{
private:
	TargetPoint target_point{ 1, 1 };
	float target_width = 0.062;
	float target_height = 0.065;

	sf::Sprite target_sprite;
public:
	Target() = delete;
	Target(int, int, float, float, sf::Sprite&);
	Target(const Target&) = delete;
	Target(Target&&) = delete;
	Target& operator=(const Target&) = delete;
	Target& operator=(Target&&) = delete;
	~Target() = default;

	TargetPoint getTargetPoint() const;
	void setTargetPoint(int, int);

	void draw(sf::RenderWindow&);
};

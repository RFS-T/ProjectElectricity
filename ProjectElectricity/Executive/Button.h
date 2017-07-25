#pragma once
#include "Interactive.h"

namespace tl
{
	class Button : public Interactive
	{
	public:
		//standart constructor
		Button() {}
		//standart destructor
		~Button() {}

		//Check is user interact with object and start the animation
		bool isInteract(sf::RenderWindow &window)
		{
			if (object.getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(window))))
			{
				//animation
			}
		}
	};
}


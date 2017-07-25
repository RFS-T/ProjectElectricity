#pragma once
#include <SFML/Graphics.hpp>

//The Limbo Namespace 
namespace tl 
{
	class Interactive
	{
	protected:
		sf::Sprite object;

	public:
		//standart constructor
		Interactive() {}
		//standart destructor
		~Interactive() {}

		//full constructor
		Interactive(sf::Texture texture, float x, float y, float scale)
		{
			object.setTexture(texture);
			object.setPosition(x, y);
			object.setScale(scale, scale);
		}
		//One more constructur
		Interactive(sf::Texture texture, float x, float y)
		{
			object.setTexture(texture);
			object.setPosition(x, y);
		}
		//Set the texture of the object
		void setTexture(sf::Texture texture)
		{
			object.setTexture(texture);
		}
		//Return the texture of the object
		sf::Texture getTexture()
		{
			return *object.getTexture();
		}
		//Set the spite of the object (for DIY creation)
		void setSprite(sf::Sprite sprite)
		{
			object = sprite;
		}
		//Return the spite of the object (use it for render)
		sf::Sprite getSprite()
		{
			return object;
		}
		//Set the position of the object
		void setPosition(float x, float y)
		{
			object.setPosition(x, y);
		}
		//Return the position of the object
		sf::Vector2f getPosition()
		{
			return object.getPosition();
		}
		//Set the scale of the object
		void setScale(float s)
		{
			object.setScale(s, s);
		}
		//Return the scale of the object
		sf::Vector2f getScale()
		{
			object.getScale();
		}
		//Check is user interact with object
		bool isInteract(sf::RenderWindow &window)
		{
			return object.getGlobalBounds().contains(sf::Vector2f(sf::Mouse::getPosition(window)));
		}
	};
}

//   ---------------------------------------------
//  | Code by TheLimboDeveloper aka Nick of Limbo |
//   ---------------------------------------------
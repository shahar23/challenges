#ifndef BUTTON_H
#define BUTTON_H
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Button    : public sf::Drawable
{
    friend class Menu;
    public:
        Button(sf::Sprite& sprite, int x=0, int y=0);
        virtual ~Button();
        bool IsMouseOn(int x, int y);
        void Hover();
        void UnHover();
    protected:
    private:
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
        sf::FloatRect GetButtonBounds();
        sf::Sprite m_sprite;
        int m_pos_x;
        int m_pos_y;
};

#endif // BUTTON_H

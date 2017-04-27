#ifndef MENU_H
#define MENU_H
#include "Button.h"
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Menu  : public sf::Drawable
{
    public:
        Menu();
        virtual ~Menu();
        void MouseOn(int x, int y);
    protected:
    private:
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

        Button* m_Get_button_mouse_on(int x, int y);
        void ButtonUnhover(int x, int y);

        Button* m_Button_3x3;
        Button* m_Button_9x9;
        Button* m_Button_16x16;
        Button* m_Button_99x99;

        sf::Texture m_texture;
};

#endif // MENU_H

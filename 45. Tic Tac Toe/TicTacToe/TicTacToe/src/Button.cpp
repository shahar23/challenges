#include "Button.h"

Button::Button(sf::Sprite& sprite, int x, int y) : m_sprite(sprite), m_pos_x(x), m_pos_y(y)
{
    m_sprite.setPosition(m_pos_x, m_pos_y);
}
void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(m_sprite);
}
void Button::Hover()
{
    m_sprite.setScale(1.05, 1.05);
}
void Button::UnHover()
{
    m_sprite.setScale(1.0, 1.0);
}
bool Button::IsMouseOn(int x, int y)
{
   return this->GetButtonBounds().contains(x, y);
}
sf::FloatRect Button::GetButtonBounds()
{
    return this->m_sprite.getGlobalBounds();
}
Button::~Button()
{
    //dtor
}

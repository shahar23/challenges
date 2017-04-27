#include "Menu.h"
#include <iostream>
Menu::Menu()
{
    m_texture.loadFromFile("menu.png");
    sf::Sprite tmpspr3(m_texture, sf::IntRect(0,0,400,300));
    m_Button_3x3 = new Button(tmpspr3, 0, 0);

    sf::Sprite tmpspr9(m_texture, sf::IntRect(400,0,800,300));
    m_Button_9x9 = new Button(tmpspr9, 400, 0);

    sf::Sprite tmpspr16(m_texture, sf::IntRect(0,300,400,600));
    m_Button_16x16 = new Button(tmpspr16, 0, 300);

    sf::Sprite tmpspr99(m_texture, sf::IntRect(400,300,800,600));
    m_Button_99x99 = new Button(tmpspr99, 400, 300);
}

Button* Menu::m_Get_button_mouse_on(int x, int y)
{
    if(m_Button_3x3->IsMouseOn(x, y)) return m_Button_3x3;
    if(m_Button_9x9->IsMouseOn(x, y)) return m_Button_9x9;
    if(m_Button_16x16->IsMouseOn(x, y)) return m_Button_16x16;
    if(m_Button_99x99->IsMouseOn(x, y)) return m_Button_99x99;

}
void Menu::ButtonUnhover(int x, int y)
{
    if(m_Button_3x3->IsMouseOn(x, y)==false) m_Button_3x3->UnHover();
    if(m_Button_9x9->IsMouseOn(x, y)==false) m_Button_9x9->UnHover();
    if(m_Button_16x16->IsMouseOn(x, y)==false) m_Button_16x16->UnHover();
    if(m_Button_99x99->IsMouseOn(x, y)==false) m_Button_99x99->UnHover();
}
void Menu::MouseOn(int x, int y)
{
//    std::cout<< "m_Button_3x3: " << m_Button_3x3 << std::endl;
//    std::cout<< "m_Button_9x9: " << m_Button_9x9 << std::endl;
//    std::cout<< "m_Button_16x16: " << m_Button_16x16 << std::endl;
//    std::cout<< "m_Button_99x99: " << m_Button_99x99 << std::endl;
//
//    std::cout<< "m_Get_button_mouse_on(x, y): " << m_Get_button_mouse_on(x, y)<< std::endl;
    //std::cout<< "m_Get_button_mouse_on(x, y) is NULL?: " << (m_Get_button_mouse_on(x, y)==nullptr)<< std::endl;

    if(m_Get_button_mouse_on(x, y)!=nullptr) m_Get_button_mouse_on(x, y)->Hover();
    ButtonUnhover(x, y);

}
void Menu::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(*m_Button_3x3);
    target.draw(*m_Button_9x9);
    target.draw(*m_Button_16x16);
    target.draw(*m_Button_99x99);
}
Menu::~Menu()
{
    delete m_Button_3x3;
    delete m_Button_9x9;
    delete m_Button_16x16;
    delete m_Button_99x99;
}

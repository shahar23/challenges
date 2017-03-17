#include "Person.h"
#include <time.h>
#include <cstdlib>
#include <iostream>

namespace nameGenerator
{
Person::Person()
{
    std::srand(time(NULL));

    m_age = rand()%99;
    m_is_male = rand()%2;
    m_height = rand()%200;
    m_work = static_cast<Job>(rand() %5+1);
}

void Person::DisplayInfo()
{
    std::cout<<"Name: " << this->m_name << std::endl;
    std::cout<<"Surname: " << this->m_surname << std::endl;
    std::cout<<"Sex: ";
    if(this->m_is_male==true)
    {
        std::cout<< "Male"<< std::endl;
    }
    else
    {
        std::cout<< "Female"<< std::endl;
    }
    std::cout<<"Age: " << this->m_age << std::endl;
    std::cout<<"Height: " << this->m_height/100 << std::endl;
    std::cout<<"Job: " << this->m_work << std::endl;
}

Person::~Person()
{
    //dtor
}
}

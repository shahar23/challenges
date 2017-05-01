#include "Person.h"


namespace nameGenerator
{

Person::Person()
{
    std::srand(time(NULL));
    m_age = rand()%99+1;
    m_is_male = rand()%2;
    m_height = rand()%40+150;
    m_work = static_cast<Job>(rand() %5+1);
    m_name = m_getNameFromFile(m_is_male);
}

std::string Person::m_getNameFromFile(bool is_male)
{
    std::fstream m_male_names; 
    const int male_names = 4275; // file contains 4275 male names row by row
    std::fstream m_female_names; 
    const int female_names = 4275; // file contains 4275 female names row by row
    std::string name;
    if(is_male == true)
    {
		int name_row = (rand()%male_names);
        m_male_names.open("males.txt");
        if (m_male_names.is_open())
        {
            for(int i=0; i<=name_row; i++)
            {
                std::getline(m_male_names, name);
            }
            m_male_names.close();
        }
        else
        {
            std::cout << "Error opening males file";
        }
    }
    else
    {
		int name_row = (rand()%female_names);
        m_female_names.open("females.txt");
        if (m_female_names.is_open())
        {
            for(int i=0; i<=name_row; i++)
            {
                std::getline(m_female_names, name);
            }
            m_female_names.close();
        }
        else
        {
            std::cout << "Error opening females file";
        }
    }
    return name;
}
std::string Person::m_displayJob()
{
    if(m_work==Doctor) return "Doctor";
    if(m_work==Fireman) return "Fireman";
    if(m_work==Student) return "Student";
    if(m_work==Teacher) return "Teacher";
    if(m_work==Plumber) return "Plumber";
    if(m_work==Writer) return "Writer";
    if(m_work==Soldier) return "Soldier";
    if(m_work==Policeman) return "Policeman";
	return "";
}
void Person::DisplayInfo()
{
    std::cout<<"Name: " << this->m_name << std::endl;
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
    std::cout<<"Height: " << this->m_height << " cm" << std::endl;
    std::cout<<"Job: " << this->m_displayJob();
}

Person::~Person()
{
    //dtor
}
}

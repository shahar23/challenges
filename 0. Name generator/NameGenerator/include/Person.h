#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
    public:
        Person();
        virtual ~Person();
    protected:
    private:
        int m_age;
        int m_height;
        std::string m_name;
        std::string m_surname;
        bool m_is_male;


};

#endif // PERSON_H

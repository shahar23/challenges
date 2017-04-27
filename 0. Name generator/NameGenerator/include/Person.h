#ifndef PERSON_H
#define PERSON_H
#include <string>

namespace nameGenerator{
class Person
{
    public:
        Person();
        void DisplayInfo();
        virtual ~Person();
    protected:
    private:
        std::string m_name;
        std::string m_surname;
        bool m_is_male;
        int m_age;
        double m_height;
        enum Job { Doctor, Fireman, Student, Teacher, Plumber, Writer, Soldier, Policeman} m_work;

        std::ostream & Person::operator<< (std::ostream &wyjscie, const Person::Job &work) {
            return wyjscie << static_cast<Person::Job>(work)<<endl;
            }
};
}
#endif // PERSON_H

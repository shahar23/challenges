#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <fstream>
#include <time.h>
#include <cstdlib>
#include <iostream>

namespace nameGenerator
{
class Person
{
public:
    Person();
    void DisplayInfo();
    virtual ~Person();
protected:
private:
    std::string m_getNameFromFile(bool is_male);
    std::string m_displayJob();
    std::string m_name;
    bool m_is_male;
    int m_age;
    double m_height;
    enum Job { Doctor, Fireman, Student, Teacher, Plumber, Writer, Soldier, Policeman} m_work;
};
}
#endif // PERSON_H

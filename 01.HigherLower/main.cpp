#include <iostream>
#include <cstdlib>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Window/Event.hpp>
#include <string>


int randomgeneratorinit()
{
    srand(time(NULL));
    return 0;
}
int tmp_random_init = randomgeneratorinit(); // that trick makes function execute before main

int headtails()
{
    int tmp = rand()%2;
    if(tmp==0)  std::cout<<"Head"<<std::endl;
    if(tmp==1)  std::cout<<"Tails"<<std::endl;
    return 0;
}

int hilowresults(int &range, int &lower_upper_bound, int &start_from, int &result)
{
    if(range%2==0)
    {
        lower_upper_bound = range/2;
        start_from = 1;
        result = rand()%range+start_from;
    }
    else
    {
        lower_upper_bound = (range-1)/2;
        start_from = 0;
        result = rand()%(range+1);
    }
    return 0;
}
int higherlower()
{
    int range=0;
    while(range<=0||range>9999)
    {
        std::cout<<"Input range between 1-9999"<<std::endl;
        std::cin>>range;
    }
    int lower_upper_bound, start_from, result;
    hilowresults(range, lower_upper_bound, start_from, result);

    std::cout<< "Range is between " << start_from << " and " << range << std::endl;
    std::cout<< "Lower is between " << start_from << " (including) and " << lower_upper_bound << " (including)" << std::endl;
    std::cout<< "Higher is between " << lower_upper_bound+1 << " (including) and " << range << " (including) \n"  << std::endl;
    std::cout<< "Result is " << result << " so it is ";
    if(result<=lower_upper_bound)
    {
        std::cout<<"Lower \n"<< std::endl;
    }
    else
    {
        std::cout<<"Higher \n"<< std::endl;
    }
        return 0;
}

int startGUIMode()
{
    std::cout<<"GUI not ready yet"<< std::endl;
    return 0;
}
int startCMDMode()
{
    std::cout<<"CMD mode \n"<< std::endl;

    int choice;
    while(true)
    {
        std::cout<<"1. Head / Tails"<< std::endl;
        std::cout<<"2. Higher / Lower"<< std::endl;
        std::cout<<"0. Exit"<< std::endl;
        std::cin >> choice;
        if(choice==1)   headtails();
        if(choice==2)   higherlower();
        if(choice==0)   break;
    }
    return 0;
}



int main(int argc, char* argv[])
{
    std::cout<< "Use command --no-GUI to start app in command line mode or skip to start GUI"<< std::endl;
    if(!argv[1])
    {
        startGUIMode();
    }
    else if(static_cast<std::string>(argv[1])=="--no-GUI")
    {
        startCMDMode();
    }
    else
    {
        std::cout<< "Command not recognized." << std::endl;
    }
    return 0;
}

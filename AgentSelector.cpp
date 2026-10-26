#include <iostream>
#include <cstdlib> //for the randomiser function
#include <ctime> //for the time function so that the randomiser resets

void randomiser();

int main(){
    int playerchoice;

    std::cout<<"Welcome to the Valorant Agent Selector!\n";
    std::cout<<"Would you like to choose a role or just a random character?\n";
    std::cout<<"1. Random character\n";
    std::cout<<"2. Random duelist\n";
    std::cout<<"3. Random initiator\n";
    std::cout<<"4. Random controller\n";
    std::cout<<"5. Random sentinel\n";
    std::cout<<"Enter: ";
    std::cin>>playerchoice;

    srand(time(0));

    randomiser();

    return 0;
}

void randomiser(){
    int randNum = rand() % 29;
    std::cout<<randNum;
}
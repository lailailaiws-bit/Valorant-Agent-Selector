#include <iostream>
#include <cstdlib> //for the randomiser function
#include <ctime> //for the time function so that the randomiser resets

void randomiser();

int main(){
    srand(time(0));

    randomiser();

    return 0;
}

void randomiser(){
    int randNum = rand() % 29;
    std::cout<<randNum;
}
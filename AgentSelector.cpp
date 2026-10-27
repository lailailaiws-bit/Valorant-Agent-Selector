#include <iostream>
#include <cstdlib> //for the randomiser function
#include <ctime> //for the time function so that the randomiser resets
#include <vector> //vectors size can change accordingly while arrays cannot, a more bug friendly array

void randomiser(std::vector<std::string> Agents); //Added a vector argument so that it can accept different vectors accordingly

std::vector<std::string> AllAgents = {"Jett", "Yoru", "Iso", "Reyna", "Brimstone", "Chamber", "Clove", "Cypher", 
"Deadlock", "Fade", "Gekko", "Harbor", "Miks", "Astra", "Waylay", "Veto","KAY/O", "Killjoy", "Neon", "Omen", 
"Phoenix", "Raze", "Tejo", "Breach", "Sage", "Skye", "Sova", "Viper", "Vyse", "Hush"};
std::vector<std::string> Duelists = {"Jett", "Yoru", "Iso", "Reyna", "Waylay", "Neon", "Pheonix", "Raze", "Hush"};
std::vector<std::string> Initiators = {"Fade", "Gekko", "KAY/O", "Breach", "Skye", "Sova"};
std::vector<std::string> Controllers = {"Brimstone", "Clove", "Harbor", "Astra", "Omen", "Viper"};
std::vector<std::string> Sentinels = {"Chamber", "Cypher", "Deadlock", "Killjoy", "Sage", "Vyse"};

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
    std::cin.ignore();

    if (playerchoice==1){
        srand(time(0));
        randomiser(AllAgents);
    }
    else if (playerchoice==2){
        srand(time(0));
        randomiser(Duelists);
    }
    else if (playerchoice==3){
        srand(time(0));
        randomiser(Initiators);
    }
    else if (playerchoice==4){
        srand(time(0));
        randomiser(Controllers);
    }
    else if (playerchoice==5){
        srand(time(0));
        randomiser(Sentinels);
    }
    else{
        std::cout<<"Please enter a correct input T_T";
    }

    return 0;
}

void randomiser(std::vector<std::string>Agents){
    int randNum = rand() % Agents.size();
    std::cout<<randNum<<"\n";
    std::cout<<Agents.at(randNum);
}
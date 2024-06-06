#include<iostream>

void winningPercentage(int gamesWon, int totalGames){
    std::cout<<"Winning Percentage: "<<((float)gamesWon/totalGames)*100.0f;
}

int main(){
    int gamesWon=98;
    int gamesLost=55;
    int totalGames=gamesWon+gamesLost;
    winningPercentage(gamesWon,totalGames);
    return 0;
}
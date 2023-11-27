#include <iostream>
#include <time.h> //time//
#include <stdlib.h> //srand,rand//
#include <algorithm>
using namespace std;
int main() {
    
    int number;
    int truth;
    int response;
    int score=0;
    
    srand(time(NULL));
    
    number=rand()%10+1;
    
    cout << "Hello! Welcome to the guessing game.\n";
    cout << "Good luck! :-)\n";
    do{
        cout << "\nEnter your guess (1-10): ";
        cin >> response;
        
   string truth[4]={"\nMoment of truth!","...","...","...\n"};
        for(int i=0;i<4;i++){
            cout<<truth[i];
        }
        
    if(response>number) {
        cout << "\nAww, that was too high! Try again.\n";
    }
    else if(response<number) {
        cout << "\nAww, that was too low! Try again.\n";
    }
    else {
        cout << "\nThat was correct!\n";
    }
    score++;
} while(number!=response);
 cout << "\nNumber is:" << number <<"\n";
 cout << "\nGuesses:" << score << "\n";
 
 cout << "\nThanks for playing!\n I hope I cured your boredom.\n";
    return 0;
}



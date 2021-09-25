//C++Final A1.cpp 
//8/29/2021	
//Mansoor Ali, CISP 400
/*You are coding a simple game called Pig. Players take turns rolling
a die. The die determines how many points they get. You may get
points each turn your roll (turn points), you also have points for the
entire game (grand points). The first player with 100 grand points is
the winner. 
The rules are as follows:
Each turn, the active player faces a decision (roll or hold):
Roll the die. If it’s is a:
1: You lose your turn, no turn total points are added to your
grand total.
2-6: The number you rolled is added to your turn total.
Hold: Your turn total is added to your grand total. It’s now the
next player’s turn.
*/
#include <iostream>		
using namespace std;
struct somestruct {
};
//Function Prototypes
void ProgramGreeting();		
void Unittest();			
int D6();
int D3();
int RandomNumber();

int main() {
// specification C1 - Fixed Seed
  srand(0);
	ProgramGreeting();		
	Unittest();				
  return 0;
	
}

// specification B2 - Due date
void ProgramGreeting() {
  cout<<"\n------------------------Due Date: August 29th,2021----------------------"<<endl;
  cout<<"- Welcome to the game of PIG Oink! Oink!"<<endl;
  cout<<"\n- This is a simple game of numbers and you will be playing with a die."<<endl;
  cout<<"\n- You can either hold or roll on your turn"<<endl;
  cout<<"\n***Description: You can have as many roll as you want until the roll number is one: You lose your turn and turn points, two-six:whichever number is rolled is added to your turn total, Hold: the player total points is added to the grand total and it's the next players turn.***"<<endl;
  cout<<"\n- Whoever hits the grand total of 100 wins the game."<<endl;
  cout<<"\n- All the best! May the probability be on your side."<<endl;
  cout<<"\n---------------------------------------------------"<<endl;
}
// specification C2 - Player's Name
void Unittest(){
  string fname, lname; 
  cout<< "\nPlease Enter your first and last name"<<endl;
  cin>>fname>>lname; 
  cout<<"|------| "<<fname<<" "<<lname<<" |------|"<<endl;
// specification C3 - Numeric Menu
  cout<<"Player Decisions:\n1. Roll\n2. Hold \n3. Quit"<<endl;
  int rollp=0, goal=100, rollc=0;
  int turnpointsP=0, grandpointsP=0,grandpointsC=0, turnpointsC=0;
  int r=1, h=2, q=3, RoH;
  cout<<"Type 1, 2 or 3 respectfully: "<<endl;
  cin>>RoH; 
// specification C4 - Bulletproof Menu
  while(RoH<1 || RoH>3){
    cout<< "Error: Please Enter the Number Option between 1-3: "<< endl;
    cin.clear();
    cin.ignore(123, '\n');
    cin>> RoH;
    
  }
// specification B1 - Display Turn Stats
  while(goal){
    while(RoH==r){
      if(RoH==h){
        cout<<fname<<" "<<lname<<" Turnpoints: "<<turnpointsP<<endl;
        cout<<fname<<" "<<lname<<" Grandpoints: "<<grandpointsP<<endl;
        break;
      }
      else{
        if(grandpointsP>=goal){
          RoH=q;
          break;
        }
        cout<<"\nHold or Roll"<<endl;
        cin>>RoH;
        if(RoH==h){
          grandpointsP+=turnpointsP;
          cout<<fname<<" "<<lname<<" Turnpoints: "<<turnpointsP<<endl;
          cout<<fname<<" "<<lname<<" Grandpoints: "<<grandpointsP<<endl;
          turnpointsP=0;
          break;
        }
        rollp = RandomNumber();
        cout<<fname<<" "<<lname<<" Rolled: "<<rollp<<endl;
        turnpointsP+=rollp;
        //grandpointsP+=turnpointsP;
        if(rollp==1){
          //turnpointsP=0;
          grandpointsP+=0;
          cout<<fname<<" "<<lname<<" Rolled 1, 0 points!"<<endl;
          cout<<fname<<" "<<lname<<" Turnpoints: "<<turnpointsP<<endl;
          cout<<fname<<" "<<lname<<" Grandpoints: "<<grandpointsP<<endl;
          turnpointsP=0;
          RoH=h;
          break;
        }
        //grandpointsP+=turnpointsP;
      }
      if(grandpointsC>=goal){
          RoH=q;
          break;
      }
    }
    while(RoH==h){
      if(grandpointsC>=goal){
        RoH=q;
        break;
      }   
      cout<<"------------------------------"<<endl;
      cout<<"Ai'Turn"<<endl;
      rollc = RandomNumber();
      cout<<"Ai Rolled: "<<rollc<<endl;
      turnpointsC+=rollc;
      
      if(rollc==1 || rollc==2 || rollc==3){
        grandpointsC+=turnpointsC;
        if(grandpointsC>=goal){
          RoH=q;
          break;
        }
        cout<<"Ai decided to hold"<<endl;
        cout<<"Ai Turnpoints: "<<turnpointsC<<endl;
        cout<<"-----------Score Card---------"<<endl;
        cout<<"Ai Grandpoints: "<<grandpointsC<<endl;
        cout<<fname<<" "<<lname<<" Grandpoints: "<<grandpointsP<<endl;
        cout<<"------------------------------"<<endl;
        RoH=r;
        break;
      }   
    }
    if(RoH==q){
      cout<<"Ai Grandpoints: "<<grandpointsC<<endl;
      cout<<fname<<" "<<lname<<" Grandpoints: "<<grandpointsP<<endl;
      break;
    }
  }
// specification B3 - Hi Score on Heap
  int *highscore = new int;
  if(grandpointsP>grandpointsC){   
    cout<<fname<<" "<<lname;
    *highscore = grandpointsP;
  } 
  else{
    cout<<"Ai";
    *highscore = grandpointsC; 
  }
// specification B4 – Display High Score
  cout<<" Highscore: "<<*highscore<<endl; 
  if(grandpointsP>=100){
    cout<<"*** "<<fname<<" "<<lname<<" is the WINNER!***"<<endl; 
  }
  else if(grandpointsC>=100){
    cout<<"*** "<<"Ai is the WINNER!***"<<endl;
  }
  delete highscore;

}
// specification A1 - D6() function
int D6(){
  int roll = rand()%6 + 1;
  return roll;
}
// specification A2 - RandomNumber() function
int RandomNumber(){
  int lo = 1 , hi=100;
  //int rollRandomNumber = rand()%hi + lo;
  int roll = D6();
// specification A3 - Protect RandomNumber() input
  if(roll<lo){
    return -1;
  }
// specification A4 - Protect RandomNumber() output
  else if(roll>hi){
    return -2;
  }
  return roll;
} 

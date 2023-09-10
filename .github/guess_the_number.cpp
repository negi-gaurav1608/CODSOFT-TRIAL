#include <iostream>
#include<cstdlib>
#include<unistd.h>
using namespace std;
//function

int play(int n){
  int count=0;
  cout<<"ENTER A NUMBER (0,1) "<<endl;
  cout<<endl;
  for(int i=0;i<n;i++){
    cout<<"\t \t ROUND "<<i+1<<endl;
    cout<<"_______________________________________________________"<<endl;
    cout<<endl;
    sleep(1);
    if_wrong:
    int user;
    cout<<"ENTER YOUR GUESSED NUMBER ";
    cin>>user;
    sleep(1);
    int comp;
    comp=rand()%2;
    if(user != 1 && user!=0){
      cout<<"\t \t WARNING"<<endl;
      sleep(1);
      cout<<"YOU CAN FILL ONLY 0 OR 1 AS OPTION"<<endl;
      sleep(1);
      cout<<"PLEASE FILL AGAIN"<<endl;
      sleep(1);
      cout<<endl;
      goto if_wrong;
    }
    if(user ==comp){
      cout<<"KEEP IT UP , YOU GOT IT CORRECT"<<endl;
      count++;
    }
    else{
      cout<<"OOPS! LOOK LIKE YOU GUESSED WRONG"<<endl;
    }
    cout<<endl;
    sleep(1);
  }

  if(count>=n/2){
    return 1;
  }
  return 0;
}

int main() {
  // to display starting of game
  cout<<endl;
  sleep(2);
  cout<<"\t \t LETS BEGIN THE GAME"<<endl;
  sleep(2);
  cout<<endl;
  cout<<endl;
  // to take input

  label:

  cout<<"CHOOSE THE OPTION TO PLAY THE GAME LEVEL"<<endl;
  sleep(1);
  cout<<endl;
  cout<<"0. TO PLAY PRACTISE SET"<<endl;
  sleep(1);
  cout<<endl;
  cout<<"1. EASY LEVEL"<<endl;
  sleep(1);
  cout<<endl;
  cout<<"2. MODERATE LEVEL"<<endl;
  sleep(1);
  cout<<endl;
  cout<<"3. HARD LEVEL"<<endl;
  sleep(1);
  cout<<endl;
  cout<<"4. EXPERT LEVEL"<<endl;
  sleep(1);
  cout<<endl;
  cout<<"5. EXIT"<<endl;
  sleep(1);
  cout<<endl;
  
  int option_chosen;#include <iostream>
#include<cstdlib>
#include<unistd.h>
using namespace std;

// fuunction

int game(){
  int points=100;
  int round=0;

  while(points > 0){
    round++;
    
    if_wrong:
    int user;
    cout<<"_________________________________________________________"<<endl;
    cout<<endl;
    cout<<"ENTER THE NUMBER ";
    cin>>user;
    cout<<endl;
    int comp=rand()%10;
    sleep(1);

    if(user>9){
      cout<<"THIS IS NOT VALID INPUT ACCORDING TO THE GAME";
      sleep(1);
      cout<<"\nPLEASE SELECT A NUMBER IN RANGE BETWEEN 0 TO 9"<<endl;
      goto if_wrong;
    }
    
    if(comp==user){
      cout<<"YOUR GUESS IS RIGHT"<<endl;
      cout<<endl;
      sleep(1);
      cout<<"YOUR POINTS ARE "<<points<<endl;
      cout<<endl;
      sleep(1);
      cout<<"YOU GUESSED CORRECT ANSWER IN "<<round<<" attempt";
      return 1;
    }
    
    if(comp-user<=3 && comp-user>0){
      points=points-5;
      cout<<"OHH! YOU WERE NEAR "<<endl;
      cout<<endl;
      sleep(1);
      cout<<"THE ACTUAL NUMBER WAS "<<comp<<endl;
      cout<<endl;
      sleep(1);
      cout<<"YOU GUESSED LITTLE SMALLER THAN THE ACTUAL NUMBER"<<endl;
      cout<<endl;
      sleep(1);
      cout<<"YOUR POINTS ARE "<<points<<endl;
    }
      
    else if(user-comp<=3 && user - comp>0){
      points=points-5;
      cout<<"OHH! YOU WERE NEAR "<<endl;
      cout<<endl;
      sleep(1);
      cout<<"THE ACTUAL NUMBER WAS "<<comp<<endl;
      cout<<endl;
      sleep(1);
      cout<<"YOU GUESSED LITTLE HIGHER THAN THE ACTUAL NUMBER"<<endl;
      cout<<endl;
      sleep(1);
      cout<<"YOUR POINTS ARE "<<points<<endl;
    }
      
    else if(comp-user>3 && comp-user>0){
      points=points-10;
      cout<<"YOU GUESSED TOO LOWER THAN THE ACTUAL NUMBER"<<endl;
      cout<<endl;
      sleep(1);
      cout<<"THE ACTUAL NUMBER WAS "<<comp<<endl;
      cout<<endl;
      sleep(1);
      cout<<"YOUR POINTS ARE "<<points<<endl;
    }
      
    else{
      points=points -10;
      cout<<"YOU GUESSED TOO HIGHER THAN THE ACTUAL NUMBER"<<endl;
      cout<<endl;
      sleep(1);
      cout<<"THE ACTUAL NUMBER WAS "<<comp<<endl;
      cout<<endl;
      sleep(1);
      cout<<"YOUR POINTS ARE "<<points<<endl;
    }
    
  }
  
  return 0;
}

int main() {
  // starting the game
  cout<<"\t \t LETS THE GAME BEGIN"<<endl;
  cout<<endl;
  sleep(1);

  // these are instructions to play the game

  cout<<"\t \t INSTRUCTIONS"<<endl;
  cout<<"\t \t ____________"<<endl;
  cout<<endl;
  sleep(1);
  cout<<"1. PLAYER STARTS WITH 100 POINTS"<<endl;
  sleep(1);
  cout<<endl;
  cout<<"2. PLAYER HAS TO CHOOSE A NUMBER IN RANGE BETWEEN 0 TO 9 AGAINST COMPUTER "<<endl;
  sleep(1);
  cout<<endl;
  cout<<"3. GAME ENDS AS SOON AS USER INPUT THE CORRECT NUMBER"<<endl;
  sleep(1);
  cout<<endl;
  cout<<"4. ON GUESSING THE WRONG NUMBER AND DIFFERENCE BETWEEN NUMBER IS GREATER THAN 3 , YOUR POINTS DECRESES BY 10"<<endl;
  sleep(1);
  cout<<endl;
  cout<<"5. IF DIFFERENCE IS LESSER THAN EQUAL TO 3 POINTS DECRESES BY 5"<<endl;
  sleep(1);
  cout<<endl;
  cout<<"6. IF POINTS BECOME 0 OR LESS THAN 0 , THE GAME ENDS AND YOU LOOSES THE GAME"<<endl;
  cout<<endl;
  sleep(1);
  play:
  int result=game();

  if(result==0){
    cout<<"SOORY , YOU LOOSES THE GAME"<<endl;
    sleep(1);
    cout<<endl;
    cout<<"PLEASE TRY AGAIN LATER"<<endl;
    cout<<endl;
  }

  cout<<"\n_________________________________________________________"<<endl;

  cout<<"\nDO YOU WANT TO PLAY AGAIN "<<endl;
  cout<<"PRESS 1 TO PLAY AGAIN OR ELSE TO QUIT THE GAME "<<endl;
  int option;
  cout<<"\nENTER YOUR CHOICE ";
  cin>>option;
  
  if(option == 1){
    goto play;
  }
  
  cout<<endl;
  sleep(1);
  cout<<"\t \t THANKU FOR PLAYING THIS GAME";
  return 0;
} 
  cout<<"ENTER THE CHOICE ";
  cin>>option_chosen;   //to take input of option
  int num;
  int result;
  sleep(1);
  switch(option_chosen){
    case 0:
    cout<<"THIS IS A TEST CASE"<<endl;
    result=play(1);
    break;

    case 1:
    cout<<"YOU HAVE TO WIN ATLEST 2 ROUND OUT OF 3  TO WIN THIS GAME"<<endl;  
    result=play(3);
    break;

    case 2:
    cout<<"YOU HAVE TO WIN ATLEST 3 ROUND OUT OF 5 TO WIN THIS GAME"<<endl;
    result=play(5);
    break;

    case 3:
    cout<<"YOU HAVE TO WIN ATLEST 4 ROUND OUT OF 7 TO WIN THIS GAME"<<endl;  
    result=play(7);
    break;

    case 4:
    cout<<"YOU HAVE TO WIN ATLEST 5 ROUND OUT OF 10 TO WIN THIS GAME"<<endl;
    result=play(10);
    break;

    case 5:
    result=-1;
    goto ending;

    case 6:
    cout<<endl;
    cout<<"INCORRECT OPTION"<<endl;
    sleep(1);
    cout<<"please fill correct option"<<endl;
    result=-1;
    break;
    
  }
  sleep(1);
  cout<<"_______________________________________________________"<<endl;
  if(result==1){
    cout<<"CONGRATULATION YOU WON THE GAME"<<endl;
  }
  else if(result==0){
    cout<<"OOPS! LOOKS LIKE YOU LOSSES"<<endl;
    sleep(1);
    cout<<"PLEASE TRY AGAIN LATER"<<endl;
  }

  cout<<endl;
  cout<<"DO YOU WANT TO PLAY AGAIN"<<endl;
  sleep(1);
  cout<<endl;
  cout<<"PRESS 1 TO PLAY AND ELSE TO QUIT"<<endl;
  int play;
  cout<<endl;
  cout<<"ENTER YOUR CHOICE ";
  cin>>play;
  if(play==1){
    goto label;
  }
  cout<<endl;
  ending:
  cout<<"\t \t THANKYOU FOR PLAYING";
  return 0;
}

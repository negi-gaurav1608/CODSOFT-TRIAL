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
  
  int option_chosen;
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

#include<iostream>
using namespace std;

int main(){
   bool ships[4][4]={
          {0,1,1,0},
          {0,0,0,0},
          {0,0,1,0},
          {0,0,1,0}
   };
   int hits=0;
   int numberOfTurns=0;

   while(hits<4){
    int r,c;
    cout<<"Selecting Coordinates\n";
    cout<<"Choose a row number between 0 and 3:";
    cin>>r;
    cout<<"Choose a column number between 0 and 3:";
    cin>>c;
    if(ships[r][c]){
        ships[r][c]=0;
        hits++;
        cout<<"Hit!"<<(4-hits)<<" "<<"left.\n\n";
    }
    else{
        cout<<"Miss\n\n";
    }
    numberOfTurns++;
   }
   cout<<"Victory!\n";
   cout<<"You Won in : "<<numberOfTurns<<" turns.";
}

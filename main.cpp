#include<iostream>;
#include<ctime>;
using namespace std;
void drawboard(char *spaces);
void playermove(char* spaces,char player);
void computermove(char*spaces,char computer);
bool check_win(char*spaces,char player,char computer);
bool check_tie(char*spaces);

int main(){
char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
char player = 'X';
char computer = 'O';
drawboard(spaces);
bool running = true;
while(running){
    playermove(spaces, player);
    drawboard(spaces);
    if(check_win(spaces,player,computer)){
        running=false;
           break;
    }else if (check_tie(spaces)){
        running=false;
           break;
    }
    computermove(spaces,computer);
    drawboard(spaces);
    if(check_win(spaces,player,computer)){
        running=false;
             break;
} else if (check_tie(spaces)){
        running=false;
           break;
}}
return 0;
cout<<"THANKS FOR PLAYING"<<endl;


}
void drawboard(char *spaces){
cout<<"     |     |     "<<'\n';
cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"   "<<'\n';
cout<<"_____|_____|_____ "<<'\n'; 
cout<<"     |     |     "<<'\n';
cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"   "<<'\n';
cout<<"_____|_____|_____ "<<'\n'; 
cout<<"     |     |     "<<'\n';
cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"   "<<'\n';
cout<<"     |     |     "<<'\n';
}
void playermove(char *spaces,char player){
    int num;
do{
    cout<<"enter a number from spot(1-9)";
    cin>>num;
    num--;
    if(spaces[num]==' '){
        spaces[num]=player;
        break;    
    }
}while(!num >0 || !num<8);
    
}
    


void computermove(char*spaces,char computer){
int num;
    srand(time(0));
while(true){
    num=rand()%9;
     if(spaces[num]==' '){
        spaces[num]=computer;
        break;  
}
}}

bool check_win(char*spaces,char player,char computer){
        if (spaces[0]!=' '&& spaces[0]==spaces[1] && spaces[1]==spaces[2]){
            spaces[0]== player? cout<<"YOU WIN!!\n":cout<<"YOU LOSE\n";
        }
        else if (spaces[3]!=' '&& spaces[3]==spaces[4] && spaces[4]==spaces[5]){
            spaces[3]== player? cout<<"YOU WIN!!\n":cout<<"YOU LOSE\n";   
        }
        else if (spaces[6]!=' '&& spaces[6]==spaces[7] && spaces[7]==spaces[8]){
            spaces[6]== player? cout<<" YOU WIN!!\n":cout<<"YOU LOSE\n"; 
        }
        else if (spaces[0]!=' '&& spaces[0]==spaces[3] && spaces[3]==spaces[6]){
            spaces[0]== player? cout<<"YOU WIN!!\n":cout<<"YOU LOSE\n";
        }
        else if (spaces[1]!=' '&& spaces[1]==spaces[4] && spaces[4]==spaces[7]){
            spaces[1]== player? cout<<"YOU WIN!!\n":cout<<"YOU LOSE\n";
        }
        else if (spaces[2]!=' '&& spaces[2]==spaces[5] && spaces[5]==spaces[8]){
            spaces[2]== player? cout<<"YOU WIN!!\n":cout<<"YOU LOSE\n";
        }
        else if (spaces[0]!=' '&& spaces[0]==spaces[4] && spaces[4]==spaces[8]){
            spaces[0]== player? cout<<"YOU WIN!!\n":cout<<"YOU LOSE\n";
        }
        else if (spaces[2]!=' '&& spaces[2]==spaces[4] && spaces[4]==spaces[6]){
            spaces[2]== player? cout<<"YOU WIN!!\n":cout<<"YOU LOSE\n";
            }
        else {return false;
              } return true;
return 0;
}
bool check_tie(char*spaces){
    for (int i =0;i<9;i++){
        if (spaces[i]==' '){
            return false;
        }
    }
     cout<<"IT IS A TIE";

}

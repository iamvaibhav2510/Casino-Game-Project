#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void splashscreen(){
    cout<<endl;
    cout<<"\t****-----------------------*$CODY SINS CASINO$---------------------------****"<<endl;
    cout<<"\n\t\t\t\tWELCOME TO THE CODY SINS CASINO"<<endl;
    cout<<"\n\t****-----------------------*$CODY SINS CASINO$---------------------------****"<<endl;
    cout<<"\nPress Any Key to Continue: ";
    getch();
    system("cls");
    cout<<"RULES:"<<endl;
    cout<<"1. The Player will choose a number Between 1-10\n";
    cout<<"2. If the number is choosen by player is winning number then the player will get 10% the bet money\n";
    cout<<"3. If the user fails to make a correct guess he looses his betting money"<<endl;
    cout<<"4. User can stop playing anytime he wants"<<endl;
    cout<<"*---------------------------------------------------------------*\n";
    cout<<"\nPress any key to continue:";
    getch();
    system("cls");
}

int start(){
    char ch;
    char name[20];
    int deposit_amount=10000,Bal,betAmt;
    Bal=deposit_amount;
    int guess,randnum,run=0;
    cout<<"Enter Your Name: ";
    cin>>name;
    while(run==0){
        cout<<"*--------------------CODY SINS CASINO--------------------------*\n";
        cout<<"\t \t \t \t \t \t balance: "<<Bal;
        bet:
        cout<<"\nEnter your guess:";
        cin>>guess;
        cout<<"Enter the amount you bet:";
        cin>>betAmt;
        if(betAmt>Bal){
            cout<<"\nInsufficient Balance:"<<endl;
            goto bet;
        }
        else{
            Bal=Bal-betAmt;
        };
        randnum=rand()%10;
        cout<<"Winning Number:"<<randnum<<endl;
        if(guess==randnum){
            cout<<"Congratulations You won!!"<<endl;
            Bal=Bal+(10*betAmt);
        }
        else{
            cout<<"Better Luck Next Time! :(\n";
        };
        cout<<"Do You Want To Play again!?\n (Y/N)";
        cin>>ch;
        if(ch=='n'||ch=='N'){
            cout<<"Thanks For Playing:";
            cout<<"\n Rs:"<<Bal<<"Will be credited to your account."<<endl;
            cout<<"Press any key to continue:"<<endl;
            getch();
            run=1;
        };
        if(ch=='y'||ch=='Y'){
            system("cls");
        };
    }

    return 0;
};
int gameMenu(){
    int ch;
    cout<<"\n______MENU__________\n";
    cout<<"1.START\n2.HELP \n3.EXIT";
    cout<<"\nEnter your choice:";
    cin>>ch;

    switch(ch){
        case 1:
        start();
        return 0;
        break;

        case 2:
        splashscreen();
        gameMenu();
        return 0;
        break;

        case 3:
        return 0;
        break;
    }
    return 0;
};

int main(){
    splashscreen();
    gameMenu();
    return 0;
}
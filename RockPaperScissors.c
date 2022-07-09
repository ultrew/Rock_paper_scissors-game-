#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rps(char you, char comp){
    //returns 1 if win, returns -1 if lose ,return 0 if draw
    //Draw part
    if(you ==  comp){
        return 0;
    }
    //Non draw part
    if(you == 'r' && comp == 'p'){
        return -1;
    }
    else if(you == 'p' && comp == 'r'){
        return 1;
    }
   
    if(you == 'p' && comp == 's'){
        return -1;
    }
    else if(you == 's' && comp == 'p'){
        return 1;
    }
    
    if(you == 's' && comp == 'r'){
        return -1;
    }
    else if(you == 'r' && comp == 's'){
        return 1;
    }
}
   int main() 
   {
    char you,comp;
    srand(time(NULL)); //NULL and 0 are same
    int n = rand()%100 + 1; // + 1 is here for take random num after +1 in privious num

    if(n<33){
        comp = 'r';
    }
    else if(n>33 && n<66){
        comp='p';
    }
    else{
        comp='s';
    }
    printf("Enetr r for rock, p for paper, s scissor :\n");
    scanf("%c",&you);
    int final = rps(you,comp);
    printf("You chose %c and Computer chose %C : ",you,comp);
  
    if (final == 0){
        printf("Draw game. Try agin!\n");
    }
    else if (final == 1){
        printf("Congratulations. YOU WIN :)\n");
    }
    else if(final == -1){
        printf("YOU LOSE");
    }
    else{
        printf("Invalid. Please try again :\n");
    }
    printf("The random num is %d",n);
    return 0;
}

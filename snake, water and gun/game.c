#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int snakeWaterGun(char you,char comp){
        
        //condition for draw
        //covered cases:
        // ss 
        // gg 
        // ww
        if(you==comp){
            return 0;
        }

        //non draw condition
        //covered cases:
        // sg 
        // gs 
        // sw 
        // ws 
        // gw 
        // wg 

        if(you=='s' && comp=='g'){
            return -1;
        }
        else if(you=='g' && comp=='s'){
            return 1;
        }
        if(you=='s' && comp=='w'){
            return 1;
        }
        else if(you=='w' && comp=='s'){
            return -1;
        }
        if(you=='g' && comp=='w'){
            return -1;
        }
        else if(you=='w' && comp=='g'){
            return 1;
        }
    }

int main(){
    char you,comp;srand(time(0));

    //random generation of s,w,g
    int number = rand()%100+1;  

    if(number<33){
        comp='s';
    }
    else if(number>33 && number<66){
        comp='w';
    }
    else{
        comp='g';
    }

    printf("enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c",&you);

    int result= snakeWaterGun(you,comp);    //result funtion call
    
    printf("you chose %c and computer chose %c. ",you,comp);
    if (result ==0){
        printf("game draw\n");
    }
    else if(result==1){
        printf("you win\n");
    }
    else{
        printf("you lose\n");
    }
    return 0;
}
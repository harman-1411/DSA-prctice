/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int userchoice,usernum,compnum,tossnum,comptoss,userscore=0,compscore=0,sum;
    srand(time(0));
    
    printf("Press enter to start the odd-eve game \n");
    printf("Start the toss:\n1.odd\n2.Even\nchoose the choice");
    printf("%d",&userchoice);
    printf("enter your toss number(1-6):");
    scanf("%d",&tossnum);
    
    comptoss=(rand()%6)+1;
    printf("cop choose %d\n",comptoss);
    
    int userwon=0;
    
    if(sum%2==0&& userchoice==2||sum%2!=0&&userchoice==1){
        
        printf("you won the toss");
       int userwontoss=1;
    }else{
        printf("computer win the toss");
        userwon=0;
    }
    
    int battingfirst;
    if(userwon==1){
        printf("what do you choose?\n1.batting\n2,bowling.enter");
        scanf("%d",&battingfirst);
        if(battingfirst==1)
        printf("youchoose to bat\n.1");
        else
        printf("you choose to bowl\n.2");
    }else{
        battingfirst=(rand()%2);
        if(battingfirst==1)
        printf("comp choose to batfirst\n");
        else
        printf("comp choose to bowl fist\n");
        
        
        if(battingfirst==1){
            printf("\nyou are batting first");
            
            while(1){
                
                printf("enter your run(1-6)");
                scanf("%d",&usernum);
                
                compnum=(rand()%6)+1;
                
                printf(" computer choose:%d",compnum);
                
                if(usernum==compnum){
                    printf("you are out\n");
                    break;
                }else{
                    
                    userscore+=usernum;
                    printf("yourscore:%d\n",userscore);
                }
            }
            printf("\n your score:%d\n",userscore);
            }
            }
            printf("\n your total:%d\n",userscore);
            
            printf("target for computer:%d",userscore+1);
            
            printf("\n now comp is batting");
            
            while(1){
                
                compnum=(rand()%6)+1;
                printf("computer plays:%d\n",compnum);
                
                printf("enter your bowl(1-6):");
                scanf("%d",&usernum);
                
                if(compnum==usernum){
                    printf("comp is out");
                    
                    break;
                }else{
                    compscore+=compnum;
                    printf("compscore:%d",compscore);
                    
                    
                    if(compscore>userscore){
                        printf("computerwins\n");
                    }else{
                        printf("you wins");
                    }
                        
                }
            }
}
                        
                    
    
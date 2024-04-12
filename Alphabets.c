//WAP to print to print all the letters from 'a' to 'z', or 'A' to 'Z' separated by tab using switch-case and for loop.
#include<stdio.h>
#include<math.h>
int main(){
    char alphabet;

    printf("Press 'A' for lowercase and 'a' for uppercase: ");      //Asks the user if they want alphabets in upper-case or in lower-case.
    scanf("%c", &alphabet);
    switch(alphabet){                                                   //switch-case is implemented to switch b/w upper and lower case.
        case 'a' : for(alphabet='a'; alphabet<='z'; alphabet++){        //for-loop is used to print all the letters from 'a' to 'z'.
        printf("%c \t", alphabet);
        }
        break;

        case 'A' : for(alphabet='A'; alphabet<='Z'; alphabet++){        //for-loop is used to print all the letters from 'A' to 'Z'
            printf("%c \t", alphabet);
        }
        break;
        
        default : printf("No such alphabet exixts.");       //default statement for some other symbols.
    }
    
    return 0;
}

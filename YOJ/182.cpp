#include<stdio.h>
int main()
{
    char assumedkiller,realkiller;
    int n;
    scanf("%d",&n);
    int solution_number = 0,truth_number;
    for(assumedkiller = 'A';assumedkiller <= 'H';assumedkiller++){
        int stmtA =(assumedkiller == 'H' || assumedkiller == 'F');
        int stmtB =(assumedkiller == 'B');
        int stmtC =(assumedkiller == 'G');
        int stmtD =(assumedkiller != 'B');
        int stmtE =(assumedkiller !='H' && assumedkiller != 'F');
        int stmtF =(assumedkiller !='F' && assumedkiller != 'H');
        int stmtG =(assumedkiller !='C');
        int stmtH =(assumedkiller =='H' || assumedkiller == 'F');
        truth_number = stmtA+stmtB+stmtC+stmtD+stmtE+stmtF+stmtG+stmtH;
        if(truth_number == n){
            solution_number++;
            realkiller = assumedkiller;
        }
    }
    if(solution_number == 1){
        printf("%c",realkiller);
    }else{
        printf("DONTKNOW");
    }
    return 0;
}
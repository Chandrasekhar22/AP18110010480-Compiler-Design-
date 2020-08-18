//  Implementation of Language recognizer for set of all strings
//  ending with two symbols of same type.
//
//  Set of alphabets = {a, b}
//  Set of States = {A, B, C, D, E}
//  Start State = A
//  Set of Accept Sates = {D, E}
//


#include <stdio.h>

int main()
{
    char str[100], State = 'A';
    printf("Give the input :  ");
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if ( State=='A' && str[i]=='a')
            State='B';
        else if (State=='A' && str[i]=='b')
            State='C';
        else if (State=='B' && str[i]=='a')
            State='D';
        else if (State=='B' && str[i]=='b')
            State='C';
        else if (State=='C' && str[i]=='a')
            State='B';
        else if (State=='C' && str[i]=='b')
            State='E';
        else if (State=='D' && str[i]=='a')
            State='D';
        else if (State=='D' && str[i]=='b')
            State='C';
        else if (State=='E' && str[i]=='a')
            State='B';
        else if (State=='E' && str[i]=='b')
            State='E';
        else
        {
            State='F';
            break;
        }
    }
    if (State=='E' || State=='D')
        printf("String Accepted\n");
    else if (State=='F')
        printf("Invalid Input\n");
    else
        printf("String Rejected\n");
    
    return 0;
}

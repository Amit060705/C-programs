#include<stdio.h>

int main(){
    char ch;
    for (int i = 1; i <= 4; i++)
    {
        if (i%2!=0)
        {
            ch='@';
        }
        else{
            ch='#';
        }
        for (int j = 1; j <= 4; j++)
        {
            printf("%c",ch);
            if (ch=='@')
            {
                ch='#';
            }
            else
            ch='@';
            
        }
        printf("\n");
        
        
    }
    
    return 0;
}
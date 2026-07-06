#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1;

    /*while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }*/

    /*do
    {
        printf("%d ", i);
        i++;
    } while (i<=10);*/

    /*for (i=1; i<=10; i++)
    {
        printf("%d\n", i);

        if(i==5){
            break;  
        }
    }*/
    
    /*for ( i = 1; i <= 10; i++)
    {
        if(i==5) {
            continue;
        }

        printf("%d ", i);
    }*/
    
    do{
        printf("%d ", i);
        i++;
        if ( i == 5){ 
            continue;
        }

    } while (i <= 10);
    
    
    
    

    return 0;
}
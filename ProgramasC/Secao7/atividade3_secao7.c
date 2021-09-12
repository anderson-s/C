#include <stdio.h>

int main()
{
    int n, p, i;
    printf("Digite o valor");
    scanf("%d", &n);
    
    if(n%2==0){
        p = n;
       printf("O valor é par"); 
    }

    else{
        i = n;
       printf("O valor é impar"); 
    }
}


#include <stdio.h>

int main()
{
    int i,j,n=5,k=1;
   
   for(j=1; j<=n;j++){

            for(i=1; i<=j; i++)
           {
                printf("%d\t",k);
                k++;
           }
            printf("\n");


}
}

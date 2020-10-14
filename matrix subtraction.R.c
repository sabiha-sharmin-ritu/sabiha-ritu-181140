#include<stdio.h>
int main(){
int i,j,NumberOfRows,NumberOfCols;
int A[10][10],B[10][10],C[10][10];

printf("Enter the Number of Rows and Cols:");
scanf("%d %d",&NumberOfRows,&NumberOfCols);

printf("Enter the element for A matrix:\n");
for(i=0;i<NumberOfRows;i++)
    {
        for(j=0;j<NumberOfCols;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);

        }printf("\n");


}
printf("Enter the element for B matrix:\n");
for(i=0;i<NumberOfRows;i++)
{
    for(j=0;j<NumberOfCols;j++)
    {
        printf("B[%d][%d]= ",i,j);
        scanf("%d",&B[i][j]);
    }printf("\n");
    }

    printf("A= ");
    for(i=0;i<NumberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<NumberOfCols;j++)
        {
            printf("\t%d",A[i][j]);
        }printf("\n");
    }

   printf("B= ");
   for(i=0;i<NumberOfRows;i++)
    {
         printf("\t");
       for(j=0;j<NumberOfCols;j++)
       {
           printf("\t%d",B[i][j]);
       }printf("\n");
   }

for(i=0;i<NumberOfRows;i++)
{
    for(j=0;j<NumberOfCols;j++)
    {
        C[i][j] = A[i][j] - B[i][j];
    }
}
printf("\nA-B= ");


   for(i=0;i<NumberOfRows;i++)
{
    printf("\t");
    for(j=0;j<NumberOfCols;j++)
    {
        printf("\t%d",C[i][j]);
    }printf("\n");
}


return 0;
}








































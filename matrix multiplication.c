#include<stdio.h>
int main(){

int i,j,k,first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,sum=0;


printf("Enter Row and column for First Matrix: ");
scanf("%d %d",&r1,&c1);


printf("Enter Rows and Column for second matrix: ");
scanf("%d %d",&r2,&c2);

while(c1!=r2)
{
    printf("Error !! Column of first matrix not equal to row of second matrix\n");
    printf("Enter Row and column for First Matrix: ");
    scanf("%d %d",&r1,&c1);


    printf("Enter Rows and Column for second matrix: ");
    scanf("%d %d",&r2,&c2);

}
printf("\nEnter element for first matrix:\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
        {
            printf("first[%d][%d]= ",i,j);
        scanf("%d,&first[i][j]");
    }
}

printf("\nEnter element for second matrix:\n");
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)

{
    printf("second[%d][%d]= ",i,j);
        scanf("%d,&second[i][j]");
}
}

for(i=0;i<r1;i++)
{
    for(j=0;j<c2;j++)
    {
        for(k=0;k<c1;k++)
        {
        sum=sum + first[i][k] * second[k][j];
        }
        result[i][j] = sum;
        sum=0;
    }
}

printf("\n\nfirst matrix\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
    printf("%d ",first[i][j]);
    printf("\n");

}

printf("\n\nsecond matrix\n");
for(i=0;i<r2;i++)
{
    for(j=0;j<c2;j++)
    printf("%d ",second[i][j]);
    printf("\n");
}

printf("\n\nResult Matrix\n");
for(i=0;i<r1;i++)
{
    printf("\t");
    for(j=0;j<c2;j++)
        printf("%d ",result[i][j]);
        printf("\n");
}
































}

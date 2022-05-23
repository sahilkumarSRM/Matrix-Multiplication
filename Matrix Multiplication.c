#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,row,col,k, sum=0;

    printf(" Enter the rows and column  for First matrix : ");
    scanf("%d %d",&r1,&c1);

    printf(" Enter the rows and column  for Second matrix : ");
    scanf("%d %d",&r2,&c2);


    while(c1!=r2)
    {
        printf("Error !! Column of first matrix not Equal Row of Second Matrix \n");

        printf(" Enter the rows and column  for First matrix: ");
        scanf("%d %d",&r1,&c1);

        printf(" Enter the rows and column  for Second matrix : ");
        scanf("%d %d",&r2,&c2);
    }

    // first matrix

    printf("Taking Element for first Matrix : \n");

    for(row=0;row<r1;row++)
    {
        for(col=0;col<c1;col++)
        {
            printf("first[%d][%d]: ",row,col);
            scanf("%d",&first[row][col]);
        }
        printf("\n");
    }

    printf("Taking Element for Second Matrix : \n");

    for(row=0;row<r2;row++)
    {
        for(col=0;col<c2;col++)
        {
            printf("second[%d][%d]: ",row,col);
            scanf("%d",&second[row][col]);
        }
        printf("\n");
    }

    //Multiplying matrix
    for(row=0;row<r1;row++)
    {
        for (col=0;col<c2;col++)
            {
                for(k=0;k<c1;k++)
                {
                    sum=sum+ first[row][k] * second[k][col];
                }
                result[row][col] = sum;
                sum=0;
            }
        }



    // printing Firs matrix

    printf("\n \n A matrix \n");
    for(row=0;row<r1;row++)
    {
        printf("\t \t");
        for(col=0;col<c1;col++)
        {
            printf("%d ",first[row][col]);
        }
        printf("\n");
    }


    // printing Second matrix

    printf("\n \n B matrix \n");

    for(row=0;row<r2;row++)
    {
        printf("\t \t");
        for(col=0;col<c2;col++)
        {
            printf("%d ",second[row][col]);
        }
        printf("\n");
    }
 // printing Result  matrix

     printf("\n \n Result  matrix \n");

    for(row=0;row<r1;row++)
    {
        printf("\t \t");
        for(col=0;col<c2;col++)
        {
            printf("%d ",result[row][col]);
        }
        printf("\n");
    }
}
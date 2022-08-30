//For printing a smiple matrix
#include<stdio.h>
void main()
{
    int a[10][10],i,j,k,row,col,b[10][10],c[10][10];
    printf("Enter the no. of rows and columns");
    scanf("%d%d",&row,&col);
    printf("Enter the values of 1st matrix:\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}



//For addition of two matrices
/*#include<stdio.h>
void main()
{
    int a[10][10],i,j,k,row,col,b[10][10],c[10][10];
    printf("Enter the no. of rows and columns");
    scanf("%d%d",&row,&col);
    printf("Enter the values of 1st matrix:\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            printf("Enter the elements:");
            scanf("%d",&a[i][j]);
        }
    printf("Enter the values of 2nd matrix:\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            printf("Enter the elements:");
            scanf("%d",&b[i][j]);
        }
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    printf("Sum of two matrices:\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            printf("%d\t",c[i][j]);
            if(j==col-1)
            {
                printf("\n");
            }
        }
}*/


//For multiplication of two matrices
/*#include<stdio.h>
void main()
{
    int a[10][10],i,j,k,row,col,b[10][10],c[10][10];
    printf("Enter the no. of rows and columns");
    scanf("%d%d",&row,&col);
    printf("Enter the values of 1st matrix:\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            printf("Enter the elements:");
            scanf("%d",&a[i][j]);
        }
    printf("Enter the values of 2nd matrix:\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            printf("Enter the elements:");
            scanf("%d",&b[i][j]);
        }
    printf("multiplication of the matrix=\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            c[i][j]=0;
            for(k=0;k<col;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
        }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}*/

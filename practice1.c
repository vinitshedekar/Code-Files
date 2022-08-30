/*#include<stdio.h>
int main()
{
    int arr[10]={10,15,17,9,18,11,21,23,6,19},n=10,odd=0,even=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==1)
        odd++;
        else
        even++;
    }
    printf("Odd numbers:%d\n",odd);
    printf("Even numbers:%d\n",even);
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int n, i, largest_num;
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter %d elements of  the array: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest_num = arr[0];
    for (i = 1; i < n; i++)
    {
        if (largest_num < arr[i])
        largest_num = arr[i];
    }
    printf("largest element in the array is : %d\n", largest_num);
    return 0;
}*/



/*#include <stdio.h>
void main ()
{
    int arr[100];
    int i, j, a, n;
    printf("enter size of array\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;++i)
    {
      for (j=i+1;j< n;++j)
      {
         if (arr[i]>arr[j])
         {
            a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
         }
      }
   }
   printf("sorted elements are:\n");
   for (i = 0; i < n; ++i){
      printf("%d\n", arr[i]);
   }
}*/




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
}*/


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
}



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
        }*/

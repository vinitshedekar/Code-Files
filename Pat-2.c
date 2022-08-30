/*PAT-2
Write a C program to reverse the elements of an integer array and store them in another array. Compare the elements of these two arrays. If the elements in both the arrays are the same print "EQUAL" else print "NOT EQUAL".

Should dynamically allocate memory for the array depending upon the number of elements to be stored.

Use pointers to deal with the array elements. 

Eg.

Input:

Enter number of elements in array1

Enter the elements in array1

Output:

EQUAL/NOT EQUAL

Sample Input:

5 

5 8 10 8 5

Output:

EQUAL*/

//Code:
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b,*temp1,*temp2,n,val=1,i,j;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    temp1=a;
    for (i=0;i<n;i++)
    {
        scanf("%d", &temp1);
        temp1++;
    }
    temp1--;
    temp2=b;
    for (int i=0;i<n;i++)
    {
        *temp2=*temp1;
        temp2++;
        temp1--;
    }
    temp1=a;
    temp2=b;
    for(i=0;i<n;i++)
	{
    	if(*temp1!=*temp2)
       	{
            val=0;
            break;
        }
        else
        {
            temp1++;
            temp2++;
        }
	}
	if(val==1)
		printf("EQUAL");
	else
		printf("NOT EQUAL");
return 0;
}


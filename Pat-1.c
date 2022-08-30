/*PAT 1-Bus
In order to maintain social distancing, theatre authorities were instructed to allot seats to the audience following standard operating procedures(SOP). The SOP states that between every two allotted seats, there should be atleast two seats left empty. Write a C program to check this above mentioned constraint.

Note: 1 represents occupied seats

          0 represents empty seats

Input:

Number of seats in theatre

Occupancy status

Output:

Followed SOP/Not followed SOP

Eg:

Input:

17

10010010010001001

Output:

Followed SOP*/

//code:
/*#include<stdio.h>
#include<string.h
int main()
{
    int n,j=0,len;
    scanf("%d",&n);
    char seats[n];
    scanf("%s",&seats);
    len=strlen(seats);
    for(int i=0;i<)

}*/



#include<stdio.h>
#include<string.h>
int main()
{
    int n,len,j=0;
    scanf("%d",&n);

    char seats[n];
    scanf("%s",&seats);
    len=strlen(seats);

    for(int i=0;i<(1-2);i++)
    {
        if((seats[i]=='1')&&(seats[i+1]=='0')&&(seats[i+2]=='0'))
        {
            j=1;
        }
        else if(seats[i]=='0')
        {
            continue;
        }
        else{
            j=0;
            printf("Not followed SOP");
            break;
        }
    }
    if (j==1) 
    printf("Followed SOP");
    return 0;
}
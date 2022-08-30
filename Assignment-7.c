//String-without string handling function
//Write a program to reverse a string without using string handling function.

/*Algorithm:
step1: Take a string as input and store it in the array of characters
step2: Create 2 counter variables i and n where 'n' is used to store the length of the string
step3: Count the length of the string using strlen function
step4: Using for loop write the condition to reverse a string
step5: Print the result*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char string[100];
    scanf("%s",string);
    n=strlen(string);
    for(i=n-1;i>=0;i--)
    {
       printf("%c",string[i]);
    }
    return 0;
}*/




//Write a program to check that a string is palindrome.

/*Algorithm:
step1: Take a string as input and store it in the array of characters
step2: Create 3 counter variables i,c and j
step3: Count the length of the string using strlen function
step4: Using for loop write the condition to store the new value in the variable i and in the for loop using if statement write the condition to check whether the string is palindrome or not
step5: Using the if-else statement write the condition to print whether the string is palindrome or not*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int i,c,j=0;
    scanf("%s",&string);
    c=strlen(string);
    for(i=0;i<c;i++)
    {
        if (string[i]!=string[c-i-1])
        {
            j++;
            break;
        }
    }
    if(j==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}*/



//Write a program to count number of characters and number of words in line of text.
//Output should print the number of characters and words

/*Algorithm:
step1: Take a string as input and store it in the array of characters
step2: Create 3 counter variables i,c, and w where 'c' is used to the number of characters in a string and 'w' is used to store the number of words
step3: Using while loop write condition to check whether the string is empty or not, if it empty then it will terminate the code and it will print the result
step4: Using the if-else statement write the condition to check whether the string contains space or not, if it contains a space then the code will count the number of characters and words after space
step5: Print the result*/

/*#include<stdio.h>
int main()
{
    int i=0,c=0,w=1;
    char string[100];
    scanf("%[^\n]s",&string);
    while (string[i]!='\0')
    {
        if (string[i]==' ')
        {
            c++;
            w++;
        }
        else
            c++;
            i++;
    }
    printf("%d\n",c);
    printf("%d",w);
    return 0;
}*/

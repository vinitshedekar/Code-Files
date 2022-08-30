/*#include<stdio.h>
void main()
{
    printf("Enter the string: ");
    char name1[20];
    scanf("%s",name1);
    char name2[20];
    scanf("%s",name2);
    char name3[20];
    scanf("%s",name3);
    printf("%s\n",name1);
    printf("%s %s %s\n",name1,name2,name3);
    printf("%.3s\n",name1);
}*/

//Using getchar()
#include<stdio.h>
void main()
{
    int i=0,count=0;
    char ch,name[20];
    printf("Enter name:");
    do
    {
        ch=getchar();
        name[i]=ch;
        i++;
    }
    while(ch!='\n');
    printf("Entered name is:%s",name);
    for(int i=1;i<strlen(name);i++)
        {
        if(name[i] != ' ')
            count++;
        }
    printf("Total number of characters in string:%d",count);
}

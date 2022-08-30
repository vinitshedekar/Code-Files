/*PAT
Assume that a bank has X account holders WITH initial balance of Rs.5000. Implement the following operations

Deposit amount ( D) accepting account number and  amount
Withdraw amount (W) accepting account number and amount
Display the number of transactions done by each account holder (Use static)
If the number of transactions exceed 5 then  charge Rs.100 from their account
 

Testcase

Input

Total number of transactions n and number of account holders x is represented in the first line

Each of the following n line represents the operation, account number and amount

Output

First line represents the number of transactions of all x account holders

Followed by X lines where each line diplays the balance amount of the account holder

Sample Input

9 10

­W 1 1000

D 1 500

W 9 2000

D 1 1000

D 1 10000

D  1 11000

W 1 10000

D 8 2000

D 9 6000

Sample Output

6 0 0 0 0 0 0 1 2 0

16400

5000

5000

5000

5000

5000

5000

7000

9000

5000*/




#include<stdio.h>
void deposit();
void withdraw();
void display();
void trans();
struct bank
{
    int no;
    int bal;
    int dep;

}s[100;]
int main()
{
    int ch;
    scanf("%d",& ah) ; switch(ch)
    {
        case 1:
        deposit();
        break;
        case 2:
        withdraw();
        break;
    }
}
void deposit()
{
    int n,b=0,m=0;
    int a;
    scanf (\%d,&n);
    for (b=0 ,b<1;b+)
    {
        if(s[b].n==n)
        {
            m=b;
        }
    }
    if(s[m].n==n)
    {
        scanf("%d",&a);
        s[m].dep+=a;
        getch();
    }
}
void withdraw()
{
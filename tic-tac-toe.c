#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char a[9]={'0','1','2','3','4','5','6','7','8'};
int m=0,q,a3,k1=1;
int ab[9]={100,101,110,103,104,105,106,107,108};
void winners()
{
if((a[0]==a[1]&&a[1]==a[2])||(a[3]==a[4]&&a[4]==a[5]))
{

    if(a[0]=='x'||a[3]=='x')
    printf("Player 1 wins\n");
    else
        if(a3==2)
        printf("Player 2 wins\n");
    else
        printf("Computer wins\n");
        exit(1);
}
else if((a[6]==a[7]&&a[7]==a[8])||(a[0]==a[3]&&a[3]==a[6]))
{

    if(a[0]=='x'||a[6]=='x')
    printf("Player 1 wins\n");
    else
    if(a3==2)
        printf("Player 2 wins\n");
    else
        printf("Computer wins\n");
        exit(1);
}
else if((a[1]==a[4]&&a[4]==a[7])||(a[2]==a[5]&&a[5]==a[8]))
{
    if(a[1]=='x'||a[5]=='x')
    printf("Player 1 wins\n");
    else
    if(a3==2)
        printf("Player 2 wins\n");
    else
        printf("Computer wins\n");
        exit(1);
}
else if((a[2]==a[4]&&a[4]==a[6])||(a[0]==a[4]&&a[4]==a[8]))
{
    if(a[2]=='x'||a[4]=='x')
    printf("Player 1 wins\n");
    else
    if(a3==2)
        printf("Player 2 wins\n");
    else
        printf("Computer wins\n");
        exit(1);
}
}
void display()
{
printf("  |  |  \n");
printf(" %c| %c| %c\n",a[0],a[1],a[2]);
printf("__|__|__\n");
printf(" %c| %c| %c\n",a[3],a[4],a[5]);
printf("__|__|__\n");
printf(" %c| %c| %c\n",a[6],a[7],a[8]);
return ;
}
void player1()
{
k1++;
char a1;
printf("Player1=");
fflush(stdin);
scanf("%c",&a1);
ab[m]=a1-'0';
a[a1-'0']='x';
display();
winners();
m++;
if(k1==9)
{
printf("No one is the winner \n");
return 0;
}
if(a3==2)
player2();
else
comp();
}
void player2()
{
char a2;
k1++;
printf("Player2=");
fflush(stdin);
scanf("%c",&a2);
a[a2-'0']='0';
display();
winners();
if(k1==9)
{
printf("No one is the winner \n");
return ;
}
player1();
}
void comp()
{
int f,temp;
k1++;
while(1)
{
temp=1;
srand((unsigned)time(NULL));
f=rand()%10;
if(f!=9)
{
for(int i=0;i<9;i++)
{
if(ab[i]==f)
{
temp=0;
break;
}
}
if(temp==1)
{
ab[m]=f;
a[f]='0';
break;
}
}
}
m++;
display();
winners();
if(k1==9)
{
printf("No one is the winner \n");
return ;
}
player1();
}
void single(char c,int k)
{
    if((c=='H'&&k==1)||(c=='T'&&k==0))
        player1();
    else
        comp();
}
void doble(int b,char c,int k)
{
    if((c=='H'&&k==1)||(c=='T'&&k==0))
    {
        if(b==1)
            player1();
        else
            player2();
    }
    else
    {
        if(b==1)
            player2();
        else
            player1();
    }
}
int main()
{
    int b,k;
    char c;
    printf("Enter 1 for Single Player and 2 for Double Player\n");
    scanf("%d",&a3);
    printf("Enter player number and choice 'H' for Head and 'T' for Tail\n");
    scanf("%d%c",&b,&c);
  srand((unsigned)time(NULL));
  k=rand();
  printf("%d\n",k);
  if(k%2==0)
    k=1;
  else
    k=0;

    if(a3==1)
        single(c,k);
    else
           doble(b,c,k);
 return 0;
}

import java.io.*;
class game
{
static int l=1;
static char winner(char a[])
{
if(a[0]==a[1]&&a[1]==a[2])
return a[0];
else if(a[3]==a[4]&&a[4]==a[5])
return a[3];
else if(a[6]==a[7]&&a[7]==a[8])
return a[6];
else if(a[0]==a[3]&&a[3]==a[6])
return a[0];
else if(a[1]==a[4]&&a[4]==a[7])
return a[1];
else if(a[2]==a[5]&&a[5]==a[8])
return a[2];
else if(a[0]==a[4]&&a[8]==a[4])
return a[0];
else if(a[2]==a[4]&&a[4]==a[6])
return a[2];
else
return '9';
}
static void display(char a[])
{
System.out.print("  |  |  \n");
System.out.print(" "+a[0]+"| "+a[1]+"| "+a[2]+"\n");
System.out.print("__|__|__\n");
System.out.print(" "+a[3]+"| "+a[4]+"| "+a[5]+"\n");
System.out.print("__|__|__\n");
System.out.print(" "+a[6]+"| "+a[7]+"| "+a[8]+"\n");
return ;
}
static int match(char a[],char n,int k)
{
char w;
if(k==1)
{
for(int i=0;i<9;i++)
{
if(a[i]==n)
a[i]='x';
}
}
else
{
for(int i=0;i<9;i++)
{
if(a[i]==n)
a[i]='0';
}
}
display(a);
w=winner(a);
int m;
if(w=='x')
{
System.out.print("Player1 wins the game\n");
return 0;
}
else if(w=='0')
{
System.out.print("Player2 wins the game \n");
return 0;
}
int z;
if(l==9)
{
char k1=winner(a);
if(k1=='9')
System.out.print("No one is the winner \n");
return 0;
}
l++;
return 8;
}
static void input1(char a[])throws IOException
{
InputStreamReader ob1=new InputStreamReader(System.in);
BufferedReader ob2=new BufferedReader(ob1);
int k;
String a1;
System.out.println("Player1=\n");
a1=ob2.readLine();
char a11=a1.charAt(0);
k=match(a,a11,1);
if(k==0||k==9)
return ;
input2(a);
}
static void input2(char a[])throws IOException
{
InputStreamReader ob3=new InputStreamReader(System.in);
BufferedReader ob4=new BufferedReader(ob3);
String a2;
int k;
System.out.println("Player2=\n");
a2=ob4.readLine();
char a22=a2.charAt(0);
k=match(a,a22,0);
if(k==0||k==9)
return ;
input1(a);
}
public static void main(String args[])throws IOException
{
char a[]={'0','1','2','3','4','5','6','7','8'};
 display(a);
 input1(a);
 return ;
}
}

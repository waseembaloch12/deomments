#include <stdio.h>
#include<conio.h>
int main  ()
{
	up:
int x;
printf ("enter your marks");
scanf("%d",&x);
if(x==50){
	printf ("your gpa is 1.0");
}
else if(x==51){
	printf("your gpa is 1.1");
}
else if (x==52){
	printf ("your gpa is1.2");
}
else if (x==53)
{
  printf("your gpa is 1.3");
}
else if (x==54){
	printf("your gpa is1.4");
}
else if (x==55){
	printf("your gpa is1.5");
}
else if (x==56){
	printf("your gpa is1.6");
}
else if (x==57){
	printf("your gpa is1.7");
}
else if (x==58){
	printf("your gpa is1.8");
}
else if (x==59){
	printf("your gpa is1.9");
}
else if (x==60){
	printf("your gpa is2.0");
}
else if (x==61){
	printf("your gpa is2.1");
}
else if (x==62){
	printf("your gpa is2.2");
}
else if (x==63){
	printf("your gpa is2.3");
}
else if (x==64){
	printf("your gpa is2.4");
}
else if (x==65){
	printf("your gpa is 2.5");
}
else if (x==66){
	printf("your gpa is 2.6");
}
else if (x==67){
	printf("your gpa is 2.7");
}
else if (x==58){
	printf("your gpa is 2.8");
}
else if (x==69){
	printf("your gpa is 2.9");
}
else if (x==70){
	printf("your gpa is3.0");
}
else if (x==71){
	printf("your gpa is3.1");
}
else if (x==72){
	printf("your gpa is3.2");
}
else if (x==73){
	printf("your gpa is3.3");
}
else if (x==74){
	printf("your gpa is 3.4");
}
else if (x==75){
	printf("your gpa is 3.5");
}
else if (x==76){
	printf("your gpa is 3.6");
}
else if (x==77){
	printf("your gpa is 3.7");
}
else if (x==78){
	printf("your gpa is 3.8");
}
else if (x==79){
	printf("your gpa is 3.9");
}

else if (x>80 && x<=100){
	printf("youre gpa is 4.0  ");
}
else if (x>1 && x<49){
	printf(" sorry you are fail");
}

else{
	printf( "sorry invalid number");
	goto,
}
}
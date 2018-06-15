#include<conio.h>
#include<stdio.h>

float Minus(float x,float y){
	return x-y;
}

void main(){
  clrscr();
  float x,y,rs;
  printf("Input x : "); scanf("%f",&x);
  printf("Input y : "); scanf("%f",&y);
  printf("1. +\n2. -\n3. *\n4. \\nChoose : ");
  switch(getch()){
    case '1' : break;
    case '2' : 
				rs = Minus(x,y);
				break;
    case '3' : break;
    case '4' : break;
  }
  printf("\nResult : %.2f",rs);
  getch();
}

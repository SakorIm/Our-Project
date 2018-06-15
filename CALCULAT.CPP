#include<conio.h>
#include<stdio.h>
<<<<<<< HEAD
float division(float x, float y){
	return x / y;
}
float Add(float x,float y){
  return x + y;
}
=======

float Minus(float x,float y){
	return x-y;
}

>>>>>>> 915323f0c0b37a5205edad25bb18cfd01fea31b5
void main(){
  clrscr();
  float x,y,rs;
  printf("Input x : "); scanf("%f",&x);
  printf("Input y : "); scanf("%f",&y);
  printf("1. +\n2. -\n3. *\n4. \\nChoose : ");
  switch(getch()){
<<<<<<< HEAD
    case '1' : rs = Add(x,y); break;
    case '2' : break;
=======
    case '1' : break;
    case '2' : 
				rs = Minus(x,y);
				break;
>>>>>>> 915323f0c0b37a5205edad25bb18cfd01fea31b5
    case '3' : break;
    case '4' : rs = division(x,y); break;
  }
  printf("\nResult : %.2f",rs);
  getch();
}

#include<conio.h>
#include<stdio.h>
<<<<<<< HEAD
<<<<<<< HEAD
float division(float x, float y){
	return x / y;
}
=======

>>>>>>> 06671e4acf1988cb117c71c6726d21c31c4e3417
float Add(float x,float y){
  return x + y;
}

float Minus(float x,float y){
	return x-y;
}

float Multi(float x,float y){
	return x*y;
}

void main(){
  clrscr();
  float x,y,rs;
  printf("Input x : "); scanf("%f",&x);
  printf("Input y : "); scanf("%f",&y);
  printf("1. +\n2. -\n3. *\n4. \\nChoose : ");
  switch(getch()){
    case '1' : rs = Add(x,y); break;
<<<<<<< HEAD
    case '2' : break;
=======
    case '1' : break;
    case '2' : 
				rs = Minus(x,y);
				break;
>>>>>>> 915323f0c0b37a5205edad25bb18cfd01fea31b5
    case '3' : break;
    case '4' : rs = division(x,y); break;
=======
    case '2' : rs = Minus(x,y); break;
    case '3' : rs = Multi(x,y); break;
    case '4' : break;
>>>>>>> 06671e4acf1988cb117c71c6726d21c31c4e3417
  }
  printf("\nResult : %.2f",rs);
  getch();
}

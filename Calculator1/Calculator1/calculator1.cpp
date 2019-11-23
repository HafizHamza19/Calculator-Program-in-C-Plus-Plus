#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
void main(void)
{
printf ("=========Calculator==========\n\n");
int opt;
printf("What Do You Want?  Press Code 1,2,3,4,5 \n(1)Addition (2)Substraction (3)Multiply (4)Divide (5)Square (6)Cube (7)Area : ");
scanf("%d",& opt);
switch(opt)
	{
     case(1):
     int b;
	printf("Press First Number For Add : ");
	scanf("%d",& b);
	int c;
	printf("Press Second Number For Add : ");
	scanf("%d",& c);
	int z;
	z=b+c;
	printf("%d + %d = %d\n\n",b,c,z);
	break;
	 
	 case (2):
     int d;
	printf("Press First Number For Substraction : ");
	scanf("%d",& d);
	int e;
	printf("Press Second Number For Substraction : ");
	scanf("%d",& e);
	int f;
	f=d-e;
	printf("%d - %d = %d \n",d,e,f);
	break;
    
	case(3):
     int aa;
	printf("Press First Number For Multiply : ");
	scanf("%d",& aa);
	int bb;
	printf("Press Second Number For Multiply : ");
	scanf("%d",& bb);
	int cc;
	cc=aa*bb;
	printf("%d * %d = %d \n",aa,bb,cc);
	break;

	case(4):
     float ee;
	printf("Press First Number For Divide : ");
	scanf("%f",& ee);
	float ff;
	printf("Press Second Number For Divide : ");
	scanf("%f",& ff);
	float gg;
	gg=ee/ff;
	printf("%f / %f =%f\n\n",ee,ff,gg);
	break;

	case (5):
		int s;
		printf("Enter Value For Take Square : ");
		scanf("%d",& s);
		int sq;
		sq=s*s;
		printf("The Square of: %d is=%d\n\n",s,sq);
		break;
	
	case (6):
		int cube;
		printf("Enter Value For Take Cube : ");
		scanf("%d",& cube);
		int cubic;
		cubic=cube*cube*cube;
		printf("The Cube of: %d is=%d\n\n",cube,cubic);
		break;

	case (7):
			int r;
			float area;
			printf("Enter Value : ");
			scanf("%d",&r);
			printf("The Area Of %d Is :%f\n\n",r,area);
			area = 3.14*(r^2);
			break;
	default:
		printf("Code Is Out Of Range\n\n");

}

cout<<"----------Thanks For Download Made By Hafiz Hamza-----------";
	getch();
}
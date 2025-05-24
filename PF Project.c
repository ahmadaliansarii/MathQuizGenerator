#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include<windows.h>

int score=0;
void EQ1();void EQ2();void EQ3();void EQ4();void EQ5();void EQ6();void EQ7();void EQ8();void EQ9();void EQ10();void EQ11();void EQ12();void EQ13();void EQ14();void EQ15();
void MQ1();void MQ2();void MQ3();void MQ4();void MQ5();void MQ6();void MQ7();void MQ8();void MQ9();void MQ10();void MQ11();void MQ12();void MQ13();void MQ14();void MQ15();
void HQ1();void HQ2();void HQ3();void HQ4();void HQ5();void HQ6();void HQ7();void HQ8();void HQ9();void HQ10();void HQ11();void HQ12();void HQ13();void HQ14();void HQ15();

int main(){ 
	int i,a,x,num[10],arr[20]={0},j=0,r,sc[15]={0};
	char diff;
	printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - Welcome To Math's Quiz - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
	
	time_t now=time(NULL),z,now2,b,now3;
    z=now%1000;
    
	printf("YOU HAVE OPENED THIS QUIZ ON:\t");
	char *string_now=ctime(&now);
	printf("%s\n",string_now);
	printf("\nNOTE:TRY TO COMPLETE THIS QUIZ WITH IN 5 MINUTES\n\n\n");
	do{
		printf("Choose Difficulty ('E' for Easy, 'M' for Medium, 'H' for Hard): ");
		scanf(" %c",&diff);
	}
	while(diff!='e'&&diff!='E'&&diff!='m'&&diff!='M'&&diff!='h'&&diff!='H');
	srand(time(0));
    for(i=0;i<10;i++){
		int r=(rand()%15)+1; 
		if(arr[r]==0){
			num[i]=r;
		}
		else i--; 
		arr[r]=1;
	}
	if((diff=='e')||(diff=='E')){
		printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - Easy Level - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		printf("\n                                                          Start\n\n");
		score=0;
		

		
		
		for( i=0;i<10;i++){
			a=score;
			printf("Q%d: ",i+1);
			switch (num[i]){
				case 1:
				EQ1();
				break;
				case 2:
				EQ2();
				break;
				case 3:
				EQ3();
				break;
				case 4:
				EQ4();
				break;
				case 5:
				EQ5();
				break;
				case 6:
				EQ6();
				break;
				case 7:
				EQ7();
				break;
				case 8:
				EQ8();
				break;
				case 9:
				EQ9();
				break;
				case 10:
				EQ10();
				break;
				case 11:
				EQ11();
				break;
				case 12:
				EQ12();
				break;
				case 13:
				EQ13();
				break;
				case 14:
				EQ14();
				break;
				case 15:
				EQ15();
				break;
			}
			if(score>a){
				sc[i]=1;
			}
		}
		if(score<4) printf("\t\t\t\t\t\t!!!Better Luck Next Time!!!\n");
		else if(score>=4 && score<=7) printf("\t\t\t\t\t\t!!!Nice Try!!!");
		else if(score>7) printf("\t\t\t\t\t\t!!!You're a Champ!!!");
		printf("\nYour Score Is %d out of 10\n",score);
		goto end;		
	}
	else if((diff=='m')||(diff=='M')){
		printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - Medium Level - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		printf("\n                                                          Start\n\n");
		score=0;
		

		
		
		for( i=0;i<10;i++){
			a=score;
			printf("Q%d: ",i+1);
			switch (num[i]){
				case 1:
				MQ1();
				break;
				case 2:
				MQ2();
				break;
				case 3:
				MQ3();
				break;
				case 4:
				MQ4();
				break;
				case 5:
				MQ5();
				break;
				case 6:
				MQ6();
				break;
				case 7:
				MQ7();
				break;
				case 8:
				MQ8();
				break;
				case 9:
				MQ9();
				break;
				case 10:
				MQ10();
				break;
				case 11:
				MQ11();
				break;
				case 12:
				MQ12();
				break;
				case 13:
				MQ13();
				break;
				case 14:
				MQ14();
				break;
				case 15:
				MQ15();
				break;
			}
			if(score>a){
				sc[i]=1;
			}
		}
		if(score<4) printf("\t\t\t\t\t\t!!!Better Luck Next Time!!!\n");
		else if(score>=4 && score<=7) printf("\t\t\t\t\t\t!!!Nice Try!!!");
		else if(score>7) printf("\t\t\t\t\t\t!!!You're a Champ!!!");
		printf("\nYour Score Is %d out of 10\n",score);
		goto end;
	}
	else if((diff=='h')||(diff=='H')){
		printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - Hard Level - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
		printf("\n                                                          Start\n\n");
		score=0;
		
		

		
		
		
		for( i=0;i<10;i++){
			a=score;
			printf("Q%d: ",i+1);
			switch (num[i]){
				case 1:
				HQ1();
				break;
				case 2:
				HQ2();
				break;
				case 3:
				HQ3();
				break;
				case 4:
				HQ4();
				break;
				case 5:
				HQ5();
				break;
				case 6:
				HQ6();
				break;
				case 7:
				HQ7();
				break;
				case 8:
				HQ8();
				break;
				case 9:
				HQ9();
				break;
				case 10:
				HQ10();
				break;
				case 11:
				HQ11();
				break;
				case 12:
				HQ12();
				break;
				case 13:
				HQ13();
				break;
				case 14:
				HQ14();
				break;
				case 15:
				HQ15();
				break;
			}
			if(score>a){
				sc[i]=1;
			}
		}
		if(score<4) printf("\t\t\t\t\t\t!!!Better Luck Next Time!!!\n");
		else if(score>=4 && score<=7) printf("\t\t\t\t\t\t!!!Nice Try!!!");
		else if(score>7) printf("\t\t\t\t\t\t!!!You're a Champ!!!");
		printf("\nYour Score Is %d out of 10\n",score);
		goto end;	
	}
	end:
		
	    now2=time(NULL);
        b=now2%1000;
        int g=b-z;
        
        if(g>300)
        {
        	printf("\n\nYOU HAVE TAKEN TIME MORE THAN 5 MINUTES");
		}
		else 
		{
			printf("\n\nYOU HAVE COMPLETED WITHIN 5 MINUTES");
		}
		
        printf("\n\n***YOU HAVE COMPLETED THE QUIZ IN %d SECONDS***\n\n",g);
    	end1:
		printf("\nEnter 1 to Check Answers\nEnter 2 to END\n");
		printf("\nOption:");
		scanf("%d",&x);
		
		if(x!=1 && x!=2){
			printf("\nERROR 404!!!\nSelect Correct Option\n");
			goto end1;
		}
		
		if(x==1){
			for( i=0;i<10;i++){
				printf("Q%d:",i+1);
				if(sc[i]==1) printf("O\n");
				else printf("X\n");

			}
			
				printf("\n                                           BYE HAVE A NICE DAY \n");
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
			return 0;
		}
		else if(x==2){
			    
			    		
			

			
			printf("\n                                                BYE HAVE A NICE DAY \n");
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
			return 0;
		}

		
} //main
//Easy Questions
void EQ1(){
	char ans,a[]="tangent",b[]="chord",c[]="traversal",d[]="intersector";
	printf("A line segment which joins two points on the circumference of the circle is called:\n");
	printf("a:%s\tb:%s\t\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='b'||ans=='B') score++;
}
void EQ2(){
	char ans,a[]="180",b[]="240",c[]="360",d[]="None Of These",e=248;
	printf("An angle whose value is _____, is called complete angle.\n");
	printf("a:%s%c\tb:%s%c\tc:%s%c\td:%s\n",a,e,b,e,c,e,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='c'||ans=='C') score++;
}
void EQ3(){
	char ans,a[]="Tangent",b[]="Secant",c[]="Chord",d[]="Diameter";
	printf("A straight line that cuts a circle in two parts is called\n");
	printf("a:%s\tb:%s\tc:%s\t\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='b'||ans=='B') score++;
}
void EQ4(){
	char ans,a[]="7",b[]="9",c[]="12",d[]="8";
	printf("What is the Arithmetic Mean of the following data 3,6,9,12,15.\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='b'||ans=='B') score++;
}
void EQ5(){
	char ans,a[]="12,16",b[]="18,10",c[]="15,13",d[]="14,12";
	printf("Which two number have the sum=28 and the difference=4? __,__\n");
	printf("a:%s\t\tb:%s\t\tc:%s\t\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;	 
}
void EQ6(){
	char ans,a[]="(0,1)",b[]="(1,1)",c[]="(1,0)",d[]="(0,0)";
	printf("Co-ordinates of Origin are:(__,__)?\n");
	printf("a:%s \tb:%s \tc:%s \td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='d'||ans=='D') score++;	 
}
void EQ7(){
	char ans,a[]="Odd Number",b[]="Even Number",c[]="Whole Number",d[]="None Of These";
	printf("Zero Is a __________.\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='c'||ans=='C') score++;	 
}
void EQ8(){
	char ans,a[]="0",b[]="-2",c[]="2",d[]="1";
	printf("What is 2+2/2x2-2?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='c'||ans=='C') score++;	 
}
void EQ9(){
	char ans,a[]="7",b[]="8",c[]="9",d[]="-9";
	printf("What is the value of x in the equation 3x-15-6=0?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;	 
}
void EQ10(){
	char ans,a[]="In-centre ",b[]="Orthocenter",c[]="Circumcenter",d[]="Centroid";
	printf("The point where the 3 medians of a triangle meet is called the ________\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='d'||ans=='D') score++;	 
}
void EQ11(){
	char ans,a[]="Concurrent",b[]="Collinear",c[]="Opposite",d[]="Bisectors";
	printf("If 3 or more lines pass through the same point, they are called ______\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;	 
}
void EQ12(){
	char ans,a[]="Width ",b[]="Angle",c[]="Volume",d[]="Altitude";
	printf("If one side of a parallelogram is taken as its base, the perpendicular distance between that side and the side parallel to it is known as:\n");
	printf("a:%s\tb:%s\t\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='d'||ans=='D') score++;
}
void EQ13(){
	char ans,a[]="Width",b[]="Angle",c[]="Altitude",d[]="Area";
	printf("If 1 side of a triangle is taken as its base, the perpendicular to that side, from the opposite vertex is called the:\n");
	printf("a:%s\t\tb:%s\t\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='c'||ans=='C') score++; 
}
void EQ14(){
	char ans,a[]="Orthocentre ",b[]="Incentre",c[]="Centroid",d[]="Circumcentre";
	printf("The internal bisectors of the angles of a triangle meet at a point called the:\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='b'||ans=='B') score++; 
}
void EQ15(){
	char ans,a[]="Tangent",b[]="Secant",c[]="Chord",d[]="Diameter";
	printf("A line touching circle or an ellipse at only one point is called:\n");
	printf("a:%s\tb:%s\tc:%s\t\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;	 
}
//Medium Questions
void MQ1(){
	char ans,a[]="Normal line",b[]="Secant line",c[]="Chord",d[]="None Of These";
	printf("The line perpendicular to the tangent line is called ?\n");
	printf("a:%s\tb:%s\tc:%s\t\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;	
}
void MQ2(){
	char ans,a[]="0",b[]="2",c[]="4",d[]="8";
	printf("|-4| + |4| - 4 + 4 = ?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='d'||ans=='D') score++;	
}
void MQ3(){
	char ans,a[]="22",b[]="19",c[]="32",d[]="11";
	printf("Complete the series: 4,8,9,13,14,18,___?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='b'||ans=='B') score++;	
}
void MQ4(){
	char ans,a[]="12",b[]="14",c[]="16",d[]="18";
	printf("x/2 +x/3 =10. x=__?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;	
}
void MQ5(){
	char ans,a[]="1",b[]="3",c[]="9",d[]="27";
	printf("3^5/3^3=___?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='c'||ans=='C') score++;	
}
void MQ6(){
	char ans,a[]="2/3",b[]="3/2",c[]="7/4",d[]="1/2",sqr=251;
	printf("If sin(x)=3/4, then cos(x)=____?\n");
	printf("a:%s\tb:%c%s\tc:%c%s\td:%s\n",a,sqr,b,sqr,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='c'||ans=='C') score++;	
}
void MQ7(){
	char ans,a[]="Vertex",b[]="Latus-rectum",c[]="Directrix",d[]="eccentricity";
	printf("The point of a parabola which is closest to the focus is the __________ of the parabola.\n");
	printf("a:%s    b:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;	
}
void MQ8(){
	char ans,a[]="Reflexive",b[]="Transitive",c[]="Trichotomy",d[]="Symmetric";
	printf("If a=b and b=c, then a=c. This property is called ________ property?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='b'||ans=='B') score++;	
}
void MQ9(){
	char ans,a[]="a=b",b[]="a!=b",c[]="Cannot be evaluated",d[]="Impossible";
	printf("If a > b and b > a, then ?\n");
	printf("a:%s\tb:%s\t c:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;	
}
void MQ10(){
	char ans,a[]="Area,Circumference",b[]="Area,Diameter",c[]="Circumference,Radius",d[]="Circumference,Diameter";
	printf("pi denotes the ratio of the __________ to the __________ .\n");
	printf("a:%s\t\tb:%s\t\tc:%s\t\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='d'||ans=='D') score++;	
}
void MQ11(){
	char ans,a[]="Rational number",b[]="Irrational number",c[]="Integer",d[]="Complex number";
	printf("pi is a/an __________ .\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='b'||ans=='B') score++;	
}
void MQ12(){
	char ans,a[]="1",b[]="i",c[]="1",d[]="i";
	printf("If x^2 + 1 = 0, then x = ?\n");
	printf("a:%s\tb:%s\tc:+_%s\td:+_%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='d'||ans=='D') score++;	
}
void MQ13(){
	char ans,a[]="2",b[]="3",c[]="4",d[]="5";
	printf("If 2^x=32, then x=?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='d'||ans=='D') score++;	
}
void MQ14(){
	char ans,a[]="2",b[]="3",c[]="4",d[]="5";
	printf("log(4)+log(25)=?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;
}
void MQ15(){
	char ans,a[]="e=1",b[]="e<1",c[]="e>1",d[]="None Of These";
	printf("The eccentricity of an ellipse is ________.\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='b'||ans=='B') score++;
}
void HQ1(){
	char ans,a[]="xy^2-2=0",b[]="x^2y-2=0",c[]="2x^2-y=0",d[]="All are functions";
	printf("Which from the following is NOT a function?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;
}
void HQ2(){
	char ans,a[]="i-8j+3k",b[]="i+8j-3k",c[]="-i+8j+3k",d[]="-i-8j-3k";
	printf("What is the vector from (2,-6,4) to (1,2,7)\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='c'||ans=='C') score++;
}
void HQ3(){
	char ans,a[]="y+2=0",b[]="y-2=0",c[]="y+4=0",d[]="y-4=0";
	printf("The equation of directrix of the parabola y^2=16x is ?\n");
	printf("a:%s\t\tb:%s\t\tc:%s\t\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='c'||ans=='C') score++;
}
void HQ4(){
	char ans,a[]="6",b[]="8",c[]="10",d[]="12";
	printf("If the distance between vertex and focus is 3, then the length of latusrectum is ___?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='d'||ans=='D') score++;
}
void HQ5(){
	char ans,a[]="3",b[]="-3",c[]="2",d[]="-2";
	printf("What is the remainder when x^3-5x^2+2x+11 is divided by x-2.\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;
}
void HQ6(){
	char ans,a[]="6m^2",b[]="8m^2",c[]="10m^2",d[]="12m^2";
	printf("If the sides of a triangle are 3, 4 and 5 meter. What is the area of the triangle?\n");
	printf("a:%s\t\tb:%s\t\tc:%s\t\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;
}
void HQ7(){
	char ans,a[]="0",b[]="1/2",c[]="3/4",d[]="1",e=248;
	printf("cos(-780%c) = ____\n",e);
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='b'||ans=='B') score++;
}
void HQ8(){
	char ans,a[]="10",b[]="12",c[]="14",d[]="16";
	printf("If f(x)=x^3-2x+10, then f'(2)=___?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='a'||ans=='A') score++;	
}
void HQ9(){
	char ans,a[]="x.ln4",b[]="4.lnx",c[]="4^x.ln4",d[]="4^x.lnx";
	printf("If y=4^x, then y'=___?\n");
	printf("a:%s\t\tb:%s\t\tc:%s\t\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='c'||ans=='C') score++;	
}
void HQ10(){
	char ans,a[]="sec(x)/tan(x)",b[]="sec(x).tan(x)",c[]="sin(x).tan(x)",d[]="sin(x).cos(x)";
	printf("The derivative of sec(x) is ___?\n");
	printf("a:%s\t\tb:%s\t\tc:%s\t\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='b'||ans=='B') score++;
}
void HQ11(){
	char ans,a[]="x^2",b[]="-x^2",c[]="1/x^2",d[]="-1/x^2";
	printf("d/dx(1/x)=____?\n");
	printf("a:%s\t\tb:%s\t\tc:%s\t\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='d'||ans=='D') score++;
}
void HQ12(){
	char ans,a[]="-1",b[]="0",c[]="1",d[]="None Of These";
	printf("If f(x)=x.cos(x), then f'(0)=___?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='c'||ans=='C') score++;
}
void HQ13(){
	char ans,a[]="-1",b[]="0",c[]="1",d[]="None Of These";
	printf("If f(x)=x.sin(x), then f'(0)=___?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='b'||ans=='B') score++;	
}
void HQ14(){
	char ans,a[]="0",b[]="1",c[]="10",d[]="Undefined";
	printf("0!=____?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='b'||ans=='B') score++;	
}
void HQ15(){
	char ans,a[]="24",b[]="26",c[]="28",d[]="30";
	printf("6!/4!=____?\n");
	printf("a:%s\tb:%s\tc:%s\td:%s\n",a,b,c,d);
	printf("Answer:");
	scanf(" %c",&ans);
	if(ans=='d'||ans=='D') score++;	
}
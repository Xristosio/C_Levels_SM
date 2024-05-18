#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void print_array(char** array, int height, int width);

int main()
{
	int height, width, i, j;
	char **array;
	
	////////////////////////   YOUR VARIABLES' DECLARATION  /////////////////////////////
int k,size,thesi,stili,grammi,l,stars,u,p,x;
	//////////////////////// END OF VARIABLES' DECLARATION /////////////////////////////
printf("Xristos Iwannidis A.M : 2026201900108\n");
printf("\n2h Ergasia Programmatismou I\n");
	printf("\nDose upsos pinaka: "); scanf("%d", &height);
	printf("Dose platos pinaka: "); scanf("%d", &width);
	
	array = (char**)malloc(height*sizeof(char*));
	for(i=0; i<height; i++) array[i] = (char*)malloc(width*sizeof(char));
	
	for(i=0; i<height; i++)
		for(j=0; j<width; j++)	
			array[i][j] = ' ';
					
	//////////////////////// YOUR CODE GOES HERE /////////////////////////////

printf("\n");
printf("\n 1. H skala me tin shmaia\n");
printf(" 2. To kastro\n ");
printf("3. H katapakth\n");
printf(" 4. H platforma\n");
printf(" 5. Ta empodia stis upogeies pistes\n");
printf(" 6. Ta toublakia\n");
printf("\nPosa sxhmata theleis na ektupwsei:");
scanf("%d",&l);
printf("Dose to prwto sxhma:");
while(l!=0)
{
scanf("%d",&x);
if(x==1)
{
	printf("\nEpilexes thn skala me th shmaia.\n");
printf("Dose thn thesi ths skalas kai ths shmaias:");
scanf("%d",&thesi);
printf("Dose megethos ths skalas kai ths shmaias:");
scanf("%d",&size);
if(size<6 || size>18)
printf("Lathos megethos skalas!");
else
{
if(size>=height || size+7>=width || thesi>=width || size+7+thesi>=width)
printf("Lathos timni (Den xwraei ston pinaka h' h thesi einai ektos pinaka)!");
else
{
	grammi = height-1;
stars = size;
k=0;
stars=size+1;
for(i=0;i<size;i++)
{
	stili=thesi;
	for(j=0;j<k;j++)
	{
		array[grammi][stili]=' ';
		stili++;
	}
	for(j=0;j<stars;j++)
	{
		array[grammi][stili]='*';
		stili++;
	}
	grammi--;
	stars--;
	k++;
	}
	grammi=height-1;
	stili=stili+5;
	for(j=0;j<3;j++)
	{
		array[grammi][stili]='*';
		stili++;
	}
	stili=stili-2;
	for(i=0;i<size;i++)
	{
		for(j=0;j<1;j++)
		{
		array[grammi][stili]='*';
		
	}
	grammi--;
	}
	grammi=height-size;
	stars=2;
	for(i=0;i<2;i++)
	{
		for(j=0;j<stars;j++)
		{
			array[grammi][stili]='*';
			stili--;
		}
		grammi--;
		stars++;
		stili=stili+2;
	}
	grammi=height-(size+2);
	stili=stili+1;
	array[grammi][stili]='*';
}
}
}

else if(x==2)
{	
printf("\nEpilexes to kastro.\n");
printf("Dose thesi kastrou:");
scanf("%d",&thesi);
printf("Dose megethos kastrou:");
scanf("%d",&size);
grammi=height-1;
if(size<2 || size>11)
printf("Lathos timi megethous tou kastrou!");
else
{
if(size>=height || size*2+3>=width || thesi>=width || size*2+3+thesi>=width)
printf("Lathos timi (Den xwraei ston pinaka h' h thesi einai ektos pinaka)");
else
{
for(i=0;i<2;i++)
{
	stili=thesi;
	for(j=0;j<size;j++)
	{
		array[grammi][stili]='*';
		stili++;
	}
	stili=stili+3;
	for(j=0;j<size;j++)
	{
		array[grammi][stili]='*';
		stili++;
	}
	grammi--;
}
for(i=0;i<size-1;i++)
{
	stili=thesi;
	for(j=0;j<size*2+3;j++)
	{
		array[grammi][stili]='*';
		stili++;
	}
	grammi--;
}
	stili=thesi;
	for(j=0;j<size+2;j++)
		{
		array[grammi][stili]='*';
		stili=stili+2;
	}
}
}	
}
else if(x==3)
{
			printf("\nEpilexes thn katapakth.\n");
printf("Dose thesi katapakths:");
scanf("%d",&thesi);
printf("Dose megethos katapakths:");
scanf("%d",&size);
if(size<3 || size>8)
printf("Lathos timi megethous katapakths!");
else
{
if(size>=height || size+2>=width || thesi>=width || thesi+size>=width)
printf("Lathos timi(Den xwraei ston pinaka h' h thesi einai ektos pinaka)!");
else
{
grammi=height-1;
stili=thesi;
for(j=0;j<size;j++)
{
	array[grammi][stili]='*';
	stili++;
}
grammi=height-1;
for(i=0;i<size;i++)
{
	stili=thesi;
	for(j=0;j<2;j++)
	{
		array[grammi][stili]='*';
		stili=stili+size-1;
	}
	grammi--;
}
grammi=height-size;
stili=thesi;
for(j=0;j<size;j++)
{
	array[grammi][stili]='*';
	stili++;
}
grammi=height-size-1;
for(i=0;i<2;i++)
{
stili=thesi-1;
for(j=0;j<size+2;j++)
{
	array[grammi][stili]='*';
	stili++;
}
grammi--;
}
}
}
}
else if (x==4)
{
printf("\nEpilexes thn platforma.\n");
printf("Dose thesi platformas:");
scanf("%d",&thesi);
printf("Dose to upsos ths:");
scanf("%d",&u);
printf("Dose to platos ths:");
scanf("%d",&p);
if(u<3 || u>12)
printf("Lathos timi upsous tis platformas!");
else
{
if (p==6 || p==8 || p==10 ||p==12||p==14)
{
if(u>=height || p>=width || thesi>=width || thesi+p+2>width)
printf("Lathos timi (Den xwraei ston pinaka h' h thesi einai ektos tou pinaka)!");
else
{
grammi=height-1;
for(i=0;i<u;i++)
{
	stili=thesi;
	for(j=0;j<2;j++)
	{
		array[grammi][stili]='*';
		stili++;
	}
	grammi--;
}
grammi=height-(u+1);
stili=stili+(p/2);
for(i=0;i<2;i++)
{
	stili=stili-(p+2);
	for(j=0;j<p+2;j++)
	{
		array[grammi][stili]='*';
		stili++;
	}
	grammi--;
}
}
}
else
printf("Lathos timi platous tis platformas!");
}
}
else if (x==5)
{
	printf("\nEpilexes ta empodia stis upogeies pistes.\n");
printf("Dose thesi empodiwn:");
scanf("%d",&thesi);
printf("dose megethos empodiwn:");
scanf("%d",&size);
if(size<2 || size>7)
printf("Lathos timi megethous twn empodiwn!");
else
{
	if(size>=height || size>=width || thesi>=width || size*2+thesi>=width)
	printf("Lathos timi(Den xwraei to sxhma h' h thesi einai ektos pinaka)!");
	else
	{
grammi=height-size;
k=size-1;
stars=2;
for(i=0;i<size;i++)
{
	stili=thesi;
	for(j=0;j<k;j++)
	{
		array[grammi][stili]=' ';
		stili=stili+3;
	}
	for(j=0;j<stars;j++)
	{
		array[grammi][stili]='*';
		stili=stili+3;
	}
	grammi++;
	stars=stars+2;
	k=k-1;
}
}
}
}
else if(x==6)
{
printf("\nEpilexes ta toublakia.\n");
printf("Dose th thesi twn toublakiwn:");
scanf("%d",&thesi);
printf("dose to upsos tous:");
scanf("%d",&u);
printf("Dose to platos tous:");
scanf("%d",&p);
if(u>=height || p>=width || thesi>=width || thesi+p>=width)
printf("Lathos timi(Den xwraei ston pinaka h' h thesi einai ektos pinaka)!");
else
{
grammi=height-u;
stili=thesi;
for(j=0;j<p;j++)
{
	array[grammi][stili]='*';
	stili++;
}
}
}
else 
printf("Lathos timi sxhmatos!");



print_array(array, height, width);
for(i=1;i<=l-1;i++)
printf("Dose to allo sxhma:");
l--;
}
	////////////////////////  END OF YOUR CODE  //////////////////////////////
	for(i=0; i<height; i++) free(array[i]);
	free(array);
	printf("\n\n");
	return 0;
}

void print_array(char** array, int height, int width)
{
	int i,j;

	printf("\n\n   ");
	for(i=0; i<width; i++)
		printf("%d", i%10);
	
	printf("\n  |"); for(j=0; j<width; j++) printf("-"); 
	printf("|\n ");
	for(i=0; i<height; i++)
	{
		
		printf("%d|",i%10);
		for(j=0; j<width; j++) printf("%c", array[i][j]);
		printf("|\n ");
	}
	printf(" |"); for(j=0; j<width; j++) printf("-"); 
	printf("|");
	printf("\n\n");
	
}

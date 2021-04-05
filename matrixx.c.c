#include <stdio.h>
#include <conio.h>
int  main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	
	printf ("\n\t SUM OF MATRICES\n");
	printf("\nENTER VALUES FOR MATRIX A:\n");
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("\nENTER VALUES FOR MATRIX B:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("\nthe sum of matrices is =:\n");
	for(i=0;i<3;i++)
        {
		for(j=0;j<3;j++)
			printf("%5d",c[i][j]);
		printf("\n");
	}
		printf ("\n\t PRODUCT OF MATRICES");
			printf("\nENTER VALUES FOR MATRIX A:\n");
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("\nENTER VALUES FOR MATRIX B:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			for(i=1;i<3;i++)
				for(j=1;j<3;j++)
			c[i][j]=a[i][j]*b[j][i];
	printf("\nthe product of matrices is =:\n");
		for(i=0;i<3;i++)
        {
		for(j=0;j<3;j++)
			printf("%5d",c[i][j]);
		printf("\n");
	    }
	
	return 0;
	}
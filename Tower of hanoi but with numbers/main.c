#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void display(int m[4][3],int r,int c);
int main()
{
    int mat[4][3]={1,0,0,2,0,0,3,0,0,4,0,0};
    int endgame,i,j,temp,x,y,k,p=0;
    char from,to,input;

    printf("Tower of Hanoi But only numbers take 1 to 4 from A TO C .\n");
    printf("Do not put bigger number over another.\n");
    printf("\n\n\t\t\tEnter Any Key To Start");


    getch();

do{
    printf("\n\n\n\      The Grid \n");
    display(mat,4,3);
    printf("\nWhat do u want to move     ?:\n");
    scanf(" %c",&from);
    printf("\nWhere do U want to move it ?:\n");
    scanf(" %c",&to);
    if(from=='a')
        {
    x=0;
        }
    else if(from=='b')
        {
    x=1;
        }
    else if(from=='c')
        {
    x=2;
        }
    else
    {
    printf("PLZ Dont be smart , Enter a/b/c\n");
    getch();
    }

        //retrieving loop
            for(i=0;i<4;i++)
            {
                if(mat[i][x]!=0)
                {
                temp=mat[i][x];
                mat[i][x]=0;
                break;
                }
                else
                {
                temp=399;
                }


            }
            if(temp==399)
            {
            to='N';
            }

//interchanging code
switch(to)
{
case 'a':
    for(k=0;k<4;k++)
    {
        if(mat[k][0]!=0)
        {
            if(temp<mat[k][0])
            {
                mat[k-1][0]=temp;
            }
            else
            {
                mat[i][x]=temp;
                printf("\t\nInvalid");
                getch();
            }
        break;
        }

    }
    if(k==4)
        {
        mat[3][0]=temp;
        }
break;
case 'b':
    for(k=0;k<4;k++)
    {
        if(mat[k][1]!=0)
        {
            if(temp<mat[k][1])
            {
                mat[k-1][1]=temp;
            }
            else
            {
                mat[i][x]=temp;
                printf("\t\nInvalid");
                getch();
            }
        break;
        }
    }
    if(k==4)
        {
        mat[3][1]=temp;
        }
break;
case 'c':
    for(k=0;k<4;k++)
    {
        if(mat[k][2]!=0)
        {
            if(temp<mat[k][2])
            {
                mat[k-1][2]=temp;
            }
            else
            {
                mat[i][x]=temp;
                printf("\t\nInvalid");
                getch();
            }
        break;
        }
    }
    if(k==4)
        {
        mat[3][2]=temp;
        }
break;
case 'N':
    printf("\n\tTheres Nothing on %c",from);
    getch();
break;
default:
printf("\n\tEnter a/b/c only ya dumb dumb");
getch();
mat[i][x]=temp;
}
p++;
endgame=mat[0][2]+mat[1][2]+mat[2][2]+mat[3][2];
if(endgame==10)
    {
    display(mat,4,3);
    printf("\n\t\t\tYOU WIN");
    getch();
    printf("\nTotal Steps u did =%d\n",p);
    printf("\nEnter R to Restart");
    input=getch();
    if(input!='r')
    {
    exit(0);
    }
    else
    {

        for(i=0;i<4;i++)
        {
        mat[i][0]=mat[i][2];
        mat[i][2]=0;
        }

    }

    }
}while(1);
getch();
return 0;

}
void display(int m[4][3],int r,int c)
{
    int i,j;
    printf("\nA \tB \tC\n");
    for(i=0;i<r;i++)
    {

        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d \t",m[i][j]);
        }
        printf("\n");
    }
}
/////////////////////

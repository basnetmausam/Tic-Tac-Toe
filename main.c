 #include <stdio.h>
#include<windows.h>
 #include<stdlib.h>

char  arr[10]={'0','1','2','3','4','5','6','7','8','9'};

int choice,player;

void markboard(char mark);

void displayboard();

void showinfo();

int checkforwin();


int main()
{
    showinfo();


    int whathappened;

    player=1;

    char mark;

   do
   {
       displayboard();

       player=(player %2)  ?  1 : 2 ;

       printf("\n\n\t\t\tPlayer %d Choose the box:",player);

       scanf("%d",&choice);

       mark=(player==1) ? 'X' : 'O';

       markboard(mark);

       whathappened=checkforwin();

       player++;

   }while(whathappened==-1);


   if (whathappened==1)
   {

        displayboard();
        printf("\n\n\t\t\t===>> Player %d wins.\n\n\n",--player);
        MessageBeep(MB_ICONWARNING);

   }


   else
   {

        displayboard();
        printf("\n\n\t\t\t===>> Game Draw.\n\n\n");
        MessageBeep(MB_OK);

   }


    return 0;
}


void showinfo()
{
    printf("\n\n\t\t\t\tHello Folks!\n\t\t\t\t \b\b\bLet's TICTACTOE\n\n");Sleep(100);
    Sleep(100);
    printf("\t-->The game is as simple as you have expected.\n");Sleep(100);
    printf("\t-->First player goes with 'X' and second goes with 'O'.\n");Sleep(100);
    printf("\t-->Choose your mark by entering the numbers(0-9).\n");Sleep(100);
    printf("\t-->You know the TICTACTOE rule right. ;)\n\n\n");Sleep(100);
    Sleep(500);
    printf("                              |          |           \n");Sleep(100);
    printf("                              |          |           \n");Sleep(100);
    printf("                          %c   |     %c    |   %c       \n",arr[1],arr[2],arr[3]);Sleep(100);
    printf("                              |          |           \n");Sleep(100);
    printf("                    __________|__________|__________ \n");Sleep(100);
    printf("                              |          |           \n");Sleep(100);
    printf("                              |          |           \n");Sleep(100);
    printf("                          %c   |     %c    |   %c       \n",arr[4],arr[5],arr[6]);Sleep(100);
    printf("                              |          |           \n");Sleep(100);
    printf("                    __________|__________|__________ \n");Sleep(100);
    printf("                              |          |           \n");Sleep(100);
    printf("                              |          |           \n");Sleep(100);
    printf("                          %c   |     %c    |   %c       \n",arr[7],arr[8],arr[9]);Sleep(100);
    printf("                              |          |           \n");Sleep(100);
    printf("                              |          |           \n\n\n");Sleep(100);
    system("pause");
}


void displayboard()
{
    system("cls");

    printf("\n\n\t\t \tPlayer1:(X)----Player2:(O)\n\n");

     printf("                              |          |           \n");
    printf("                              |          |           \n");
    printf("                          %c   |     %c    |   %c       \n",arr[1],arr[2],arr[3]);
    printf("                              |          |           \n");
    printf("                    __________|__________|__________ \n");
    printf("                              |          |           \n");
    printf("                              |          |           \n");
    printf("                          %c   |     %c    |   %c       \n",arr[4],arr[5],arr[6]);
    printf("                              |          |           \n");
    printf("                    __________|__________|__________ \n");
    printf("                              |          |           \n");
    printf("                              |          |           \n");
    printf("                          %c   |     %c    |   %c       \n",arr[7],arr[8],arr[9]);
    printf("                              |          |           \n");
    printf("                              |          |           \n\n\n");
}





void markboard(char mark)
{
    if(choice==1&&arr[1]=='1')
        arr[1]=mark;

    else if(choice==2&&arr[2]=='2')
        arr[2]=mark;

    else if(choice==3&&arr[3]=='3')
        arr[3]=mark;

    else if(choice==4&&arr[4]=='4')
        arr[4]=mark;

    else if(choice==5&&arr[5]=='5')
        arr[5]=mark;

    else if(choice==6&&arr[6]=='6')
        arr[6]=mark;

    else if(choice==7&&arr[7]=='7')
        arr[7]=mark;

    else if(choice==8&&arr[8]=='8')
        arr[8]=mark;

    else if(choice==9&&arr[9]=='9')
        arr[9]=mark;

    else
    {
        printf("\n\n\t\t\tInvalid move ): \n\n\n\t\t\tDo it again.");
        delay(800);
        player--;

    }
}


int checkforwin()
{
int returnvalue=0;

if(arr[1]==arr[2]&&arr[2]==arr[3])
    returnvalue=1;


else if(arr[4]==arr[5]&&arr[5]==arr[6])
    returnvalue=1;


else if(arr[7]==arr[8]&&arr[8]==arr[9])
    returnvalue=1;


else if(arr[1]==arr[4]&&arr[4]==arr[7])
    returnvalue=1;


else if(arr[2]==arr[5]&&arr[5]==arr[8])
    returnvalue=1;

else if(arr[3]==arr[6]&&arr[6]==arr[9])
    returnvalue=1;

else if(arr[1]==arr[5]&&arr[5]==arr[9])
    returnvalue=1;

else if(arr[3]==arr[5]&&arr[5]==arr[7])
    returnvalue=1;

else if(arr[1]!='1'&&arr[2]!='2'&&arr[3]!='3'&&arr[4]!='4'&&arr[5]!='5'&&arr[6]!='6'&&arr[7]!='7'&&arr[8]!='8'&&arr[9]!='9')
    returnvalue=0;

else
    returnvalue=-1;

return returnvalue;
}



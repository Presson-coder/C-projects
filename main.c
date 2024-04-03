#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//include <>
int main()
{

     system ("COLOR 10");
    //voter system
    int i=0;
    int cMuchakata=0;
    int cPresson=0;
    int cPraize=0;
    int cStray=0;
    int cMainmenu;
    char V,C;

    printf("\t\t\t\t\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*********************************************\n*\n*\n*\n*\n*\n*\n*\n*\n*\n*");
    printf("\t\t\t\tWELCOME TO THE NUST SRC ELECTIONS\n\n\n");
    printf("\t\t\t\t*******************************************\n\n\n\n\n");
    printf("Press Key 1 to vote for MUCHAKATA | Key 2 to vote for PRESSON | Key 3 to vote for PRAISE\n\n\n");

    printf("Press 8 to view current statistics    | Enter 7 close up the vote  \n\n\n\n\n");


    do{

            printf("\t\t\tPlease Enter key(1 or 2 or 3) to vote: \n");
            scanf("%d",&i);

            Sleep(900);
            if(i==7){break;}

                    if(i==1){
                        cMuchakata++;
                          //("systemcls");
                    }else if(i==2){
                        cPresson++;
                          //system("cls");

                    }else if(i==3){
                        cPraize++;
                          //system("cls");

                    }else if(i!=1 && 1!=2 && i!=3 && i!=8 ){
                        cStray++;
                          //system("cls");

                    }
                    if(i==8){

                       printf("\n\n\t\t**********Displaying current statistics...\n\n");
                       Sleep(1100);

            printf("\tMuchakata\t Presson\t \tPraize\t \tStray\t\n");
            printf("\t%d\t         \t%d\t            %d\t             %d\n\n\t\t\t \n\n",cMuchakata,cPresson,cPraize,cStray);

            continue;

                    }
            }


    while(i!=7);



            printf("\n\nLoading Results...\n\n\n");
            Sleep(1100);
            system("cls");

            printf("\tMuchakata\t Presson\t \tPraize\t \tStray\t\n");
            printf("\t%d\t         \t%d\t            %d\t             %d\n\n\t\t\t RESULTS:\n\n\n\n",cMuchakata,cPresson,cPraize,cStray);
            if(cMuchakata>cPresson && cMuchakata>cPraize){
                printf("\t\t........MUCHAKATA Wins!!!***********\n\n\n\n");
            }else if(cPresson>cMuchakata && cPresson>cPraize){
                printf("\t\t........PRESSON Wins!!!**********\n\n\n\n");
            }else if(cPraize>cPresson && cPraize>cMuchakata){
                printf("\t\t........PRAIZE Wins!!!!***********\n\n\n\n");

            }
            else {
                printf("\t\t******There is a TIE!!!********\n\n\n\n");

            }
    return 0;
}

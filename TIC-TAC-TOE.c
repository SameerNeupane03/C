    #include<stdio.h>
    #include<conio.h>
    int checkWin();
    char box[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};     //this is for numbers in the TIC-TAC-TOE box
    void printBoard();
    int main()
    {
    int player = 1,input,status = 1;                       //status is initialized by 1 to keep the iteration always be true
    while(status)                                         //this loop will always be true so it will iterate until it returns something
    {
        printBoard();
        player = (player % 2 == 0) ? 2 : 1;               //player is initialized by 1 so first entered value is always for player X
    char mark = (player == 1) ? 'X' : 'O';                 //First player be X and Second player will be O
    printf("Enter a position for %d player: \n",player);
    scanf("%d",&input);
    if(input < 1 && input > 9)                             //can only take the numbers from 1 to 9 because there are only 9 boxes
    {
        printf("Invalid input");
    }
    int row = (input - 1) / 3;
    int col = (input - 1) % 3;
    box[row][col] = mark;           //assigning X or O to the IIC-TAC-TOE box
    printBoard();                                             //function call to print the board of IIC-TAC-TOE
    int result = checkWin();
    if(result == 1){
        printf("Player %d is the winner: \n",player);
        return;
    }
    else if(result == 0){
        printf("Draw\n");
        return;
    }
    player ++;
    }
    }
    void printBoard()
    {
    printf("\n\n\t    === TIC TAC TOE ===\n\n");
    printf("\t        |        |     \n");
    printf("\t   %c    |   %c    |   %c   \n",box[0][0],box[0][1],box[0][2]);
    printf("\t________|________|________\n");
    printf("\t        |        |        \n");
    printf("\t   %c    |   %c    |   %c   \n",box[1][0],box[1][1],box[1][2]);
    printf("\t________|________|________\n");
    printf("\t        |        |        \n");
    printf("\t   %c    |   %c    |    %c  \n",box[2][0],box[2][1],box[2][2]);
    printf("\t        |        |        \n");
    printf("\n\n");
    }

    int checkWin()
    {
             if(box[0][0] == box[0][1] && box[0][1] == box[0][2])                     //horizontal
            return 1;
             if(box[1][0] == box[1][1] && box[1][2] == box[1][2])
            return 1;
             if(box[2][0] == box[2][1] && box[2][1] == box[2][2])
            return 1;
             if(box[0][0] == box[1][0] && box[1][0] == box[2][0])                     //verticle
            return 1;
             if(box[0][1] == box[1][1] && box[1][1] == box[2][1])
            return 1;
             if(box[0][2] == box[1][2] && box[1][2] == box[2][2])
            return 1;
             if(box[0][2] == box[1][1] && box[1][1] == box[2][1])                      //diagonal
            return 1;
             if(box[0][0] == box[1][1] && box[1][1] == box[2][2])
            return 1;

            int i,j,count = 0;
            for(i = 0; i < 3; i ++)
            {
                for(j = 0; j < 3; j ++){
                if(box[i][j] == 'X' || box[i][j] == 'O')
                {
                    count++;
                }}
            }
            if(count == 9)
            {
                printf("Draw\n");
                return 0;
            }
                return -1;
    }

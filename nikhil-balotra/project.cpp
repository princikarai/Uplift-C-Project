#include<iostream>
#include<windows.h>
int* input(int board[3][3],int player);
int check_win_draw(int board[3][3],int player);
void print_board(int board[3][3]);
char get_c(int p);
int input_return[2];
int moves=9;

int main(){
    system("Color 0D");
    int board[3][3] = {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };
    const int player1 = 1;
    const int player2 = 2;
    int win=-1;
    int player = 1;
    int *input_pos;
    while(1){
        print_board(board);
        if(win == 1){
            printf("Player 1 won\n");
            break;
        }
        else if(win == 2){
            printf("player 2 won\n");
            break;
        }
        else if(win == 0){
            printf("Draw\n");
            break;
        }
        else if(win == -1){
            input_pos = input(board, player);
            board[input_pos[0]][input_pos[1]] = player;
        }
        win = check_win_draw(board, player);
        if(player == 1){
            player = 2;
        }
        else{
            player = 1;
        }
    }

}
char get_c(int p){
    if(p == 0)return ' ';
    else if(p == 1)return 'X';
    else if(p == 2)return 'O';         /*0 or o???*/
}

void print_board(int board[3][3]){
    int i,j;
    printf("   1   2   3\n");
    for(i=0; i<3; i++){
        printf("%d ",i+1);
        for(j=0; j<3; j++){
            printf(" %c ",get_c(board[i][j]));
            if(j<2)printf("|");
        }
        printf("\n");
        if(i<2)printf("  ---+---+---\n");
    }
    printf("\n");
}

int check_win_draw(int board[3][3],int player)
{
    if(moves)
        moves--;
    int stroke=0;

    if(board[0][0]==board[1][0] && board[0][0]==board[2][0] && board[0][0]!=0)
        stroke++;
    else if(board[0][1]==board[1][1] && board[0][1]==board[2][1] && board[0][1]!=0)
        stroke++;
    else if(board[0][2]==board[1][2] && board[0][2]==board[2][2] && board[0][2]!=0)
        stroke++;
    else if(board[0][0]==board[0][1] && board[0][0]==board[0][2] && board[0][0]!=0)
        stroke++;
    else if(board[1][0]==board[1][1] && board[1][0]==board[1][2] && board[1][0]!=0)
        stroke++;
    else if(board[2][0]==board[2][1] && board[2][0]==board[2][2] && board[2][0]!=0)
        stroke++;
    else if(board[0][0]==board[1][1] && board[0][0]==board[2][2] && board[0][0]!=0)
        stroke++;
    else if(board[2][0]==board[1][1] && board[2][0]==board[0][2] && board[2][0]!=0)
        stroke++;

    if(!stroke && moves)
        stroke=-1;
    else if(stroke)
        stroke=player;

    /*if(!moves && stroke)
        stroke=moves;*/

    return stroke;
}

int* input(int board[3][3],int player){     //function to take input from player and return an array consisting of coordinates of the input by the player

    int x,y;

    printf("\nTurn of Player %d\n",player);     //printing which player has to enter a move

    while(1){
    printf("Enter row no.: ");
    scanf("%i",&x);
    fflush(stdin);
    if (x>=1&&x<=3)       //checking validity of the row no. entered
    {

    }
    else
    {
        printf("Invalid input. Try again.\n");
        continue;
    }

    printf("Enter column no.: ");
    scanf("%d",&y);
    fflush(stdin);
    if (y>=1&&y<=3)       //checking validity of the column no. entered
    {

        if (board[x-1][y-1]) printf("Slot already taken. Try again.\n");        //checking if the slot entered is available
        else break;
    }
    else printf("Invalid input. Try again.\n");
    }

    printf("\n");

    input_return[0] = x-1;      //x co-ordinate of the board array
    input_return[1] = y-1;      //y co-ordinate of the board array
    return input_return;
}


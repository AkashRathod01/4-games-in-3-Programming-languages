# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main(){
    int number, guesses, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    do{
        printf("\nGuess the number between 1 - 100\n");
        scanf("%d", &guesses);
        if(number > guesses){
            printf("Choose higher number please!\n");
        }
        else if(number < guesses){
            printf("Choose lower number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    }while(number!=guesses);
    return 0;
}
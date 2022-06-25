# include<iostream>
# include<stdlib.h>
# include<time.h>
using namespace std;

void random_number();
void start(int number);
void yes(int number);
void no(int number);
void end(int player);

int score=0;
// 15 birds and 15 animals
string animals[30] = {"Peacock", "Sparrow", "Dove", "Cuckoo", "Rooster", "Parrot", "Owl", "Kingfisher", "Eagle", "Swallow", "Crow", "Flamingo", "Ostrich", "Butterfly", "Pigeon", "Cat", "Lion", "Tiger", "Giraffe", "Fox", "Chimpanzee", "Squirrel", "Camel", "Deer", "Monkey", "Elephant", "Horse", "Kangaroo", "Sheep", "Panda"};


// Random number generator
void random_number(){
    srand(time(0));
    int number = rand() % 30;
    // cout << number;
    start(number);
}

// Start the game
void start(int number){

    if (number>=0 && number<15)
    {
        yes(number);
    }
    else
    {
        no(number);
    }
}

void yes(int number){
    fflush(stdin);
    char player;
    cout << "--> " << animals[number] << " flies? : ";
    cin >> player;
    cout << endl;
    
    if(player==89 || player==121){
        score++;
        random_number();
    }
    else if(player==78 || player==110){
        end(player);
    }
}

void no(int number){
    fflush(stdin);
    char player;
    cout << "--> " << animals[number] << " flies? : ";
    cin >> player;
    cout << endl;
    
    if(player==89 || player==121){
        end(player);
    }
    else if(player==78 || player==110){
        score++;
        random_number();
    }
}

// End the game
void end(int player){
    cout << "\n\n=======================================================================\n";
    cout << "\n\t\t\t==> You scored: " << score << " <==\n";
    cout << "You loose! :(\n";
    cout << "Try again.";
    cout << "\n=======================================================================\n";
}

int main(){
    // int num;
    cout << "\n-----------------------------------------------------------------------";
    cout << "\n\t\t~~~~~~~~ FLY OR NOT ~~~~~~~~\n";
    cout << "\n\t********* Welcome to world of Flying *********\n";
    cout << "Rules:\n\tEnter y for correct\n\tEnter n for wrong\n";
    cout << "-----------------------------------------------------------------------\n\n";
    
    random_number();

    return 0;
}
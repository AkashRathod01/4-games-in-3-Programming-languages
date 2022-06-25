import random

def gamewin(comp, you):
    if comp == you:
        return None
    
    elif comp == 's':
        if you == 'p':
            return True
        elif you == 'c':
            return False
    
    elif comp == 'p':
        if you == 'c':
            return True
        elif you == 's':
            return False

    elif comp == 'c':
        if you == 's':
            return True
        elif you == 'p':
            return False

print('''\n\n\t\t<<<<  Welcome to my game world  >>>>
\n\t-----  This is a game of Stone, Paper & Scissor  -----
\n1. For Stone ---> choose 's'
2. For Paper ---> choose 'p'
3. For Scissor ---> choose 'c'
4. Press 'e' to exit the game
''')

while True:
    print('>>> Comp turn: Stone(s), Paper(p) or Scissor(c)?')
    randno = random.randint(1,3)
    if randno == 1:
        comp = 's'
    elif randno == 2:
        comp = 'p'
    elif randno == 3:
        comp = 'c'

    print('\tComputer had choosed\n')
    you = input(">>> Your turn: Stone(s), Paper(p) or Scissor(c)?: ")
    if you == 'e':
        break
    if (you != 's') and (you != 'p') and (you != 'c') and (you != 'e'):
        print("\n!!!!!!!!!!!!!!!!  Warning: Please choose the correct value... !!!!!!!!!!!!!!!!\n\n")
    else:
        a = gamewin(comp,you)

        print(f'\nComputer chose: {comp}')
        print(f'You chose: {you}')

        if a == None:
            print("------------------  The game is a tie!  ------------------\n")
        elif a:
            print("------------------  You win! :)  ------------------\n")
        else:
            print("------------------  You lose! Better luck next time...  ------------------\n")
        print("--------------------------------------------------------------------------------------------\n\n")

print("\n\n\t\t------------------  Thank you for playing with me  ------------------\n")
print("\t\t---------------------  Hope to see you again!!  ---------------------\n")
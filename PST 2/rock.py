import random 
from random import randint 
def rock():
    play = True
    play_again = 'iwdhb'
    arr = ["r","p","s"]
    points = 0
    while play==True:
        option = input("rock, paper, scissors")
        pc = arr[random.randint(0,3)]
        print(f'Computer Chooses: {pc}')
        if pc == option.lower()[0]:
            play_again = input("Y or N")
            if play_again.lower() == "n":
                break 
        else
            if pc == arr[0]:
                if option.lower()[0]==


        



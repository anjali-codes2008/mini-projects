import random

def get_choice():
    player_choice=input("enter a choice(rock , paper , scissors:")
    options = ["rock","paper","scissors"]
    computer_choice = random.choice(options)
    choices={"player":player_choice,"computer":computer_choice}
    
    return choices

def check_win(player,computer):
    print(f"you chose { player },computer chose { computer }")
    if player == computer: 
        return "it a tie!"
    elif player == "rock":
        if(computer == "scissors"):
            return "rock smashes scissors! you win"
        else:
            return "paper covers rock! you lose"
    
    elif player == "paper":
        if computer == "rock":
            return "paper covers rock! you win."
        else:
            return "scissors cuts paper! lose"
    
    elif player =="scissors":
        if computer =="rock":
            return "rocks smashes the scissor! you win"
        else:
            return "scissors cuts the paper! you lose"
        

    
choices=get_choice()
print(choices)
result=check_win(choices["player"],choices["computer"])
print(result)

    
    


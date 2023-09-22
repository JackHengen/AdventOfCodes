#What I learned: Be careful to change while statement variables at bottom but to change variables that depend on those variables at beggining

#1 point for rock, 2 points for paper, 3 points for scissors
#0 points for losing, 3 points for draw, 6 points for a win


yourPoints =0
stratGuide = open("input.txt")

round =(stratGuide.readline())
while round!="":
    foeHand = round[0]
    yourHand = round[2]
    if yourHand=="X" and foeHand=="C" or yourHand=="Y" and foeHand=="A" or yourHand=="Z" and foeHand=="B":
        yourPoints+=6
    elif yourHand=="X" and foeHand=="A" or yourHand=="Y" and foeHand=="B" or yourHand=="Z" and foeHand=="C":
        yourPoints+=3
    if yourHand=="X":
        yourPoints+=1
    if yourHand=="Y":
        yourPoints+=2
    if yourHand=="Z":
        yourPoints+=3
    #set round here but set foehand and yourhand up top because if round is empty then asigning a variable to parts of the string which don't exists will throw an error
    round =(stratGuide.readline())
print("The elf left, based on your intuition on how the encryption works, You will get %d points" % yourPoints)



yourPoints =0
stratGuide = open("input.txt")

round =(stratGuide.readline())
while round!="":
    foeHand = round[0]
    yourHand = round[2]
    if yourHand=="X":#You lost
        if foeHand=="A":
            yourPoints+=3 #Threw Scissors
        if foeHand=="B": 
            yourPoints+=1 #Threw Rock
        if foeHand=="C":
            yourPoints+=2 #Threw Paper
    elif yourHand=="Y":
        yourPoints+=3
        if foeHand=="A":
            yourPoints+=1 #Threw Rock
        if foeHand=="B":
            yourPoints+=2 #Threw Paper
        if foeHand=="C":
            yourPoints+=3 #Threw Scissors
    else:
        yourPoints+=6
        if foeHand=="A":
            yourPoints+=2 #Threw Paper
        if foeHand=="B":
            yourPoints+=3 #Threw Scissors
        if foeHand=="C":
            yourPoints+=1 #Threw Rock
    round = (stratGuide.readline())

print("The elf came back, you were wrong!! The actual amount of points is %d" % yourPoints)
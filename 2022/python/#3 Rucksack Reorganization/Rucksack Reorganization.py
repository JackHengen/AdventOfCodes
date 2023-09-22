#What I learned: [:] syntax, ord() function, range is exclusive for top value so no need to do -1


#find priority points of a single character
def prio(character):
    #A == ascii 65 a== ascii 97| a =1 point, b =2 points A=26+1 points
    if character.isupper():
        return ord(character)-64+26
    else:
        return ord(character)-96

#find priority points of an entire list of characters
def listToPrio(list):
    priorityPoints=0
    for i in range(0,len(list)):
        priorityPoints+=prio(list[i])
    return priorityPoints



#divide rucksacks into 2 pockets and then find the common item
rucksacks = open("input.txt")
rucksack= rucksacks.readline()
allSackDupes=[]
while rucksack!='':
    rucksack= rucksack.removesuffix("\n")
    firstSack = rucksack[:int(len(rucksack)/2)]
    secondSack = rucksack[int(len(rucksack)/2):]
    for i in range(0,len(firstSack)):
        if firstSack[i] in secondSack:
            allSackDupes.append(firstSack[i])
            break             
    rucksack=rucksacks.readline()
print("The total priorities of all items in both rucksacks is %d" % listToPrio(allSackDupes))



rucksacks = open("input.txt")
ruck1=rucksacks.readline()
ruck2=rucksacks.readline()
ruck3=rucksacks.readline()
badges=[]
while(ruck3!=""):
    firstTwoRuckDupes=[]
    #find all in common between first 2
    for i in range(len(ruck1)):
        if(ruck1[i] in ruck2):
            firstTwoRuckDupes.append(ruck1[i])
    #find in common with first 2 and 3rd
    for i in range(len(firstTwoRuckDupes)):
        if(firstTwoRuckDupes[i] in ruck3):
            badges.append(firstTwoRuckDupes[i])
            break
    ruck1=rucksacks.readline()
    ruck2=rucksacks.readline()
    ruck3=rucksacks.readline()    
print("The total priorities of each groups badge is %d" % listToPrio(badges))






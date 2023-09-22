#Things I learned: With statement works with classes with __enter__() and __exit__() methods so classes which need to setup and close?
#Classes that need to end when they are done?
#For each loops are: For var in iterable
#Compare ints not strings!!! this took 2 hours



#find sections which completely overlap
#seperate each string by ,
#compare the small of one to the small of the other
#compare the large of one to the large of the other
#small1=<small2 and big1>=big2 or small1>=small2 and small1<=small2

def getElfPairs():
    elfPairs=[]
    #Remove whitespace
    #Split by Elf
    #Split by high and low sections
    with open("input.txt") as file:
        for line in file:
            partnerSections=line.rstrip().split(",")
            partner1=partnerSections[0].split("-")
            partner2=partnerSections[1].split("-")
            elfPairs.append([partner1,partner2])
    return elfPairs


count =0
for elfPair in getElfPairs():
    partner1Low=int(elfPair[0][0])
    partner1High=int(elfPair[0][1])
    partner2Low=int(elfPair[1][0])
    partner2High=int(elfPair[1][1])
    
    if((partner1Low<=partner2Low and partner1High>=partner2High) or (partner2Low<=partner1Low and partner2High>=partner1High)):
        count+=1
        print(partner1Low, " ", partner1High, " ", partner2Low, " ", partner2High, " contained")
    else:
        print(partner1Low, " ", partner1High, " ", partner2Low, " ", partner2High)   
print(f"A total of {count} elf pairs had sections to clean which completely overlapped")

count=0
for elfPair in getElfPairs():
    partner1Low=int(elfPair[0][0])
    partner1High=int(elfPair[0][1])
    partner2Low=int(elfPair[1][0])
    partner2High=int(elfPair[1][1])

    for i in range(partner1Low,partner1High+1):
        if i in range(partner2Low,partner2High+1):
                count+=1
                break
                
print(f"A total of {count} elf pairs had sections to clean which overlapped at all")


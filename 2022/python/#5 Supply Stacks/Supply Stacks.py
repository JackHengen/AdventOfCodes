#Things I learned: re is a regular expression library, | for either or in RE and [] for a set of characters +is to chain onto the next characters
#re.split leaves in empty strings where we removed old delimiters
#I used filter but I don't really get how I used it
#r strip l strip strip is both
#copy library has deepcopy functionality
#This was so much harder than all the previous ones
import re
import math
import copy


def FlipArr(arr):
    reversed=[]
    for i in range(0,len(arr)):
        row=arr[len(arr)-1-i]
        reversed.append(row)
    return reversed

def RowsToCrateStack(arr):#flip arr then add 1 from each row to column
    BottomRowsFirst =FlipArr(arr)#flip arr (get bottom rows to top rows)
    crateStack=[]
    for j in range(0,len(BottomRowsFirst)):#loop rows
        row=BottomRowsFirst[j] 
        for i in range(0, len(row)): #loop crates i is position of crate
            crate=row[i]
            if(j==0): #if this is the first loop make enough columns in the crateStack
                crateStack.append([])
            crateStack[i].append(crate) #Position of crate in row determines what column to add it too
    for i in range(0,len(crateStack)): #remove air above crates
            crateStack[i] = list(filter(None, crateStack[i]))
                
    return crateStack

def ParseCrates(input):
    with open(input) as file:
        crateRows=[]
        for row in file:
            tempRow =row.rstrip("\n")#removes trailing spaces as well unless we specific to remove \n
            finalRow=[]
            rowLength = math.ceil(len(tempRow)/4)
            for i in range(0,rowLength):
                crate=tempRow[i*4:(i+1)*4]
                finalRow.append(crate)
            for i in range(0,len(finalRow)):#change gaps to be empty and
                finalRow[i] = finalRow[i].rstrip()
                finalRow[i] = finalRow[i].lstrip("[")
                finalRow[i] = finalRow[i].rstrip("]")
            crateRows.append(finalRow)
        return RowsToCrateStack(crateRows)

def ParseProcedure(input):
    with open(input) as file:
        instructions=[]
        for line in file:
            line =line.rstrip()
            line =(re.split(r"[a-z]+",line))
            line = list(filter(None, line))
            instructions.append(line)
        return instructions

def CrateMover9000(inCrates, instructions):
    crates=inCrates
    for instructionGroup in instructions:
        number =int(instructionGroup[0])
        fromColumn = int(instructionGroup[1])
        toColumn = int(instructionGroup[2])
        for i in range(0,(number)):
            crates[toColumn-1].append(crates[fromColumn-1].pop())
    return crates

def CrateMover9001(inCrates, instructions):#Crate mover 9001 pop the top to get it in terms of first is on the bottom last is on top, then pop again to flip first on top and last on bottom
    crates=inCrates
    for instructionGroup in instructions:
        number =int(instructionGroup[0])
        fromColumn = int(instructionGroup[1])
        toColumn = int(instructionGroup[2])
        craneCarry=[]
        for i in range(0,(number)):
            craneCarry.append(crates[fromColumn-1].pop())
        for i in range(0,number):
            crates[toColumn-1].append(craneCarry.pop())
    return crates
 
def TopOfCrates(crateStack):
    crateString = "Top Crates: "
    for column in crateStack:
        crateString+=(column[len(column)-1])
    return crateString

crateStack=ParseCrates("Crates.txt")
instructionsArr=ParseProcedure("Procedure.txt")
crateStack9000=CrateMover9000(copy.deepcopy(crateStack),instructionsArr)
crateStack9001=CrateMover9001(copy.deepcopy(crateStack),instructionsArr)


print(TopOfCrates(crateStack9000))
print(TopOfCrates(crateStack9001))

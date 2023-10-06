#This I learned: isinstance() checks type and works with inheiritance as it detects subclasses as that class type only detects the exact class
#isinstance(truck, car)= true        type(truck)==car = false

#Find all of the directories with a total size of at most 100000. What is the sum of the total sizes of those directories?
#Arr of Arrays
#Int or Arr inside each array
#Recursively go through each array until the files inside the array are not arrays anymore and then strat sending back the size of the files in each array to the previous arrays function call
import re

def CheckSizeOfDir(dir):
    size=0
    for i in range(1,len(dir)):
        if isinstance(dir[i], int):
            size+=dir[i]
        else:
            size+=CheckSizeOfDir(dir[i])
    return size



def ContainingArr(arr,arrSet): #Go through every branch of the array until it finds the arr it needs and then returns the containing array
    contArr=[]
    if arr in arrSet:
        return contArr
    else:
        for i in range(1,len(arrSet)):
            if isinstance(arrSet[i],list):
                contArr=ContainingArr(arr,arrSet[i])

def ls(dir):
    for i in range(1,len(dir)):
        if isinstance(dir[i],list):
            print("Directory: ",dir[i][0])
        elif isinstance(dir[i],int):
            print("File: ", dir[i]," bytes")

def FormatFilesystem(input):
    with open(input) as file:
        file=file.readlines()
        for lineNum in range(0,len(file)):
            file[lineNum]=file[lineNum].rstrip()
            #read command and either make a new array or int, ints are easy, arrays need to have links to past array in them somehow but that would fuck up
            #the checkSize function because it would have a pointer to that array so we have to change checkSize function to ignore the first
            #index of the array which isn't a file or new dir but Metadata of old dir

sampleFileSystem = ["Main",13441,31414,["Folder",134,["xyz",31414],["drive",3155],13],["Another Folder",23151,3155,["Important Info",31255132,3125],674],["Photos",64745],6475]



ls(sampleFileSystem)
print(CheckSizeOfDir(sampleFileSystem))

inputFileSystem =FormatFilesystem("input.txt")

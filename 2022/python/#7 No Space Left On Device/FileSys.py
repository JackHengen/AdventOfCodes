
sampleFileSystem = ["Main",13441,31414,["Folder",134,["xyz",31414],["drive",3155],13],["Another Folder",23151,3155,["Important Info",31255132,3125],674],["Photos",64745],6475]
workingDir=sampleFileSystem

def cd(inp):
    if inp=="..":
        return NotImplementedError
    else:
        #parse for full path or relative path
        #if relative path then for each \ it has to cd
        for i in range(0,len(workingDir)):
            if isinstance(workingDir[i], list):
                print(f"Checking if {inp} == {workingDir[i][0]}")
                if workingDir[i][0]==inp:
                    workingDir=workingDir[i]
def ls(dir=workingDir):
    for i in range(1,len(dir)):
        if isinstance(dir[i],list):
            print("Directory: ",dir[i][0], " ", CheckSizeOfDir(dir[i]), " bytes")
        elif isinstance(dir[i],int):
            print("File: ", dir[i]," bytes")

def CheckSizeOfDir(dir):
    size=0
    for i in range(1,len(dir)):
        if isinstance(dir[i], int):
            size+=dir[i]
        else:
            size+=CheckSizeOfDir(dir[i])
    return size

def parseCMDInp(input):
    parsedIn=input.split(" ")
    parsedIn= list(filter(None,parsedIn))
    if parsedIn==[]:
        return
    elif parsedIn[0]=="cd":
        cd(parsedIn[1])
    elif parsedIn[0]=="ls":
        if len(parsedIn)>1:
            ls(parsedIn[1])
        else:
            ls()
    



while True:
    print(workingDir[0],"> ",end="")
    parseCMDInp(input())
#Things I learned:

#find the first spot in the line where the last 4 digits had no dupes
#relative path has to do with what directory the terminal is in, not what directories the two files are in
deviceSignal =open("input.txt").readline()

def shiftArr(arr):
    for i in range(0,len(arr)):
        if i!=0:
            arr[i-1]=arr[i]
    arr.pop()
    return arr


def findMarkerOfDistinctNumbers(signal,numOfDistinct):
    mostRecent=[]
    for i in range(0,len(signal)):
        if signal[i] in mostRecent: #if the current signal is in the past 4 then loop through every signal up until that symbol and wipe
            for j in range(0,mostRecent.index(signal[i])+1):#index returns 0-3 not 1-4
                mostRecent=shiftArr(mostRecent)
        mostRecent.append(signal[i])
        if(len(mostRecent)==numOfDistinct):
            return i+1

print("index of start-of-packet marker: ", findMarkerOfDistinctNumbers(deviceSignal,4))
print("index of start-of-message marker: ", findMarkerOfDistinctNumbers(deviceSignal,14))

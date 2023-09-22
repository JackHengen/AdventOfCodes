#What I learned: 
file = open("Input.txt")


calorieInFoodItem=file.readline()
highestElfCalorieCount=0
currentElfCalorieTotal=0


while calorieInFoodItem!="":
    if calorieInFoodItem!='\n':
        currentElfCalorieTotal += int(calorieInFoodItem.removesuffix("\n"))
        calorieInFoodItem=file.readline()
    else:
        if currentElfCalorieTotal>highestElfCalorieCount:
            highestElfCalorieCount=currentElfCalorieTotal
        currentElfCalorieTotal=0
        calorieInFoodItem=file.readline()
print("The elf with the most amount of calories has " + str(highestElfCalorieCount) + " calories")
#by default print() adds a new line except the string already has a newline in it

#Have an array and remove the top 3 by doing a shitton of comparisons or just sort the array
#Have a line of 3 elfs??
highestElfCalorieCount=0
secondHighestElfCalorieCount=0
thirdHighestElfCalorieCount=0
currentElfCalorieTotal=0

file = open("Input.txt")


calorieInFoodItem=file.readline()
while calorieInFoodItem!="":
    if calorieInFoodItem!='\n':
        currentElfCalorieTotal += int(calorieInFoodItem.removesuffix("\n"))
        calorieInFoodItem=file.readline()
    else:
        if currentElfCalorieTotal>highestElfCalorieCount:
            thirdHighestElfCalorieCount=secondHighestElfCalorieCount
            secondHighestElfCalorieCount=highestElfCalorieCount
            highestElfCalorieCount=currentElfCalorieTotal
        elif currentElfCalorieTotal>secondHighestElfCalorieCount:
            thirdHighestElfCalorieCount=secondHighestElfCalorieCount
            secondHighestElfCalorieCount=currentElfCalorieTotal
        elif currentElfCalorieTotal>thirdHighestElfCalorieCount:
            thirdHighestElfCalorieCount=currentElfCalorieTotal
        currentElfCalorieTotal=0
        calorieInFoodItem=file.readline()
print("The top three elfs with the highest calorie counts were " + str(highestElfCalorieCount) + " " + str(secondHighestElfCalorieCount) + " " +  str(thirdHighestElfCalorieCount) + " for a total of " + str(highestElfCalorieCount + secondHighestElfCalorieCount + thirdHighestElfCalorieCount))
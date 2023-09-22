public class Day1 {
    public static String puzzleInput(){
        return "84242\n" +
                "87800\n" +
                "131272\n" +
                "84629\n" +
                "105398\n" +
                "91086\n" +
                "99863\n" +
                "146591\n" +
                "58757\n" +
                "51370\n" +
                "108422\n" +
                "95689\n" +
                "91513\n" +
                "113692\n" +
                "79189\n" +
                "113603\n" +
                "52750\n" +
                "123562\n" +
                "147710\n" +
                "145313\n" +
                "98785\n" +
                "86959\n" +
                "89755\n" +
                "97093\n" +
                "62048\n" +
                "98872\n" +
                "145829\n" +
                "76682\n" +
                "65788\n" +
                "119356\n" +
                "124600\n" +
                "69459\n" +
                "80167\n" +
                "56122\n" +
                "117390\n" +
                "72303\n" +
                "141896\n" +
                "140568\n" +
                "82565\n" +
                "75431\n" +
                "54613\n" +
                "124106\n" +
                "104628\n" +
                "78531\n" +
                "63748\n" +
                "139285\n" +
                "111926\n" +
                "101999\n" +
                "53435\n" +
                "57906\n" +
                "58120\n" +
                "146795\n" +
                "147754\n" +
                "79892\n" +
                "65395\n" +
                "121551\n" +
                "50577\n" +
                "122520\n" +
                "66441\n" +
                "86009\n" +
                "121899\n" +
                "71715\n" +
                "112666\n" +
                "112863\n" +
                "140695\n" +
                "54016\n" +
                "78041\n" +
                "91757\n" +
                "130007\n" +
                "89595\n" +
                "142289\n" +
                "149842\n" +
                "136738\n" +
                "70046\n" +
                "89586\n" +
                "142234\n" +
                "142090\n" +
                "147759\n" +
                "85957\n" +
                "136288\n" +
                "86895\n" +
                "131370\n" +
                "71565\n" +
                "128290\n" +
                "95531\n" +
                "110317\n" +
                "115170\n" +
                "56454\n" +
                "71468\n" +
                "113938\n" +
                "64193\n" +
                "115562\n" +
                "73585\n" +
                "81194\n" +
                "92754\n" +
                "105826\n" +
                "104739\n" +
                "137106\n" +
                "104467\n" +
                "120320";
    }
    public int calcFuelForMass(int mass){
        return Math.floorDiv(mass,3)-2;
    }
    public int calcFuelForFuel(int fuelMass){
        int totalFuel=0;
        int nextFuel=fuelMass;
        do{
            nextFuel =calcFuelForMass(nextFuel);
            if (nextFuel>0) {
                totalFuel += nextFuel;
            }
        }while((nextFuel>0));
        return totalFuel;
    }
    public int calcFuelForFuelRecursive(int fuelMass){
        int calcFuel = calcFuelForMass(fuelMass);
        if(calcFuel>0){
            return calcFuel + calcFuelForFuelRecursive(calcFuel);
        }
        else return 0;
    }
    public static void main(String[] args){
        Day1 day1 = new Day1();
        String inp = puzzleInput();
        String[] strs =inp.split("\n");
        int total = 0;
        for (String str : strs) {
            int mass = Integer.parseInt(str);
            total +=day1.calcFuelForMass(mass);
        }
        System.out.println(total);//3325156

        total=0;
        for(String str:strs){
            int mass = Integer.parseInt(str);
            int massOfFuel= day1.calcFuelForMass(mass);
            int massOfFuelforFuel=day1.calcFuelForFuelRecursive(massOfFuel);
            total+=massOfFuel+massOfFuelforFuel;
        }
        System.out.println(total);

    }
    
}

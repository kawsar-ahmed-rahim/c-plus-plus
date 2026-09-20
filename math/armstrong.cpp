//! armstrong number
//armstrong number is equal to the sum of cubes of its digits

bool isArmstrong(int n){
    int copyN = n;
    int sumOfCubes = 0;

    while(n!=0){
        int dig = n % 10;
        sumOfCubes += (dig*dig*dig);

        n = n / 10;
    }

    return sumOfCubes == copyN;
}
double myPow() {
    int n = 5; //pow
    double x =3; //num 
    long binForm = n;
    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }
    double ans = 1;

    while(binForm>0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;

}
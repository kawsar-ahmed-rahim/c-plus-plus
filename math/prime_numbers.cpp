// prime number

string isPime(int n) {
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return "Non Prime";
        }
    }
    return "prime";
}

// prime number in a range
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

int countPrime(int n){
    vector<bool> isPrime(n+1, true);
    int count = 0;

    fo(int i=2; i<n;i++){
        if(isPrime[i]){
            count++;

            for(int j=i*2; j<n; j = j+i){
                isPrime[j] = false;
            }
        }
    }
    return count;
}
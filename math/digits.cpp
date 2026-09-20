// count, sim , print of digits 

// print
void printDigits(int n){
    while(n != 0) {
        int digit = n % 10;
        cout << digit << endl;

        n = n / 10;
    }
}

// count 
void printDigits(int n){
    int count = 0;
    while(n != 0) {
        int digit = n % 10;
        count++;

        n = n / 10;
    }
    cout << count << endl;
}

// shortcut for count
int main(){
    int n = 1234;

    cout << (int)(log10(n) + 1) << endl;
}

// sum 
void printDigits(int n){
    int sum = 0;
    while(n != 0) {
        int digit = n % 10;
        sum += digits;

        n = n / 10;
    }
    cout << sum << endl;
}
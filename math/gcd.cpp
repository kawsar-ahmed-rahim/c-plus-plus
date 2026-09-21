//! gcd
// gcd(a,b) = gcd(a%b,b) , a>b;
//  gcd(a,b) = gcd(a,b%a) , b>a;

int gcd(int a, int b){
    while(a>0 && b > 0){
        if(a>b){
            a = a % b;

        } else {
            b = b % a;
        }
    }
    if(a==0) return b;
    return a;
}
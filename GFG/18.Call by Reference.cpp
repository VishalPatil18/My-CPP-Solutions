void reverse_dig(int &a,int &b) {
    int rev_a = 0, rev_b = 0;
    while(a != 0) {
        int digit = a % 10;
        rev_a = rev_a*10 + digit;
        a /= 10;
    }
    while(b != 0) {
        int digit = b % 10;
        rev_b = rev_b*10 + digit;
        b /= 10;
    }
    a = rev_a;
    b = rev_b;
}

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

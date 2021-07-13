// My Solution
void findAll() {
    for(int i=0; i<1000000; ++i){
        bool flag = true;
        int x = i;
        while(x > 0){
            int digit = x % 10;
            x /= 10;
            if(digit != 1 && digit != 2 && digit != 3){
                flag = false;
                break;
            }
        }
        if(flag) mp[i] = 1;
    }
}
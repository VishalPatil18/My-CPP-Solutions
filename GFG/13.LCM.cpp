int LCM(int a, int b){

   int multiplier = 1;
    while(true){
        if((a*multiplier % b) == 0) return a*multiplier;
        multiplier++;
    }
    return -1;
}

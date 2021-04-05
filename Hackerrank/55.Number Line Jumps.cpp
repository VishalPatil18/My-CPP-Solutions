/*
    https://www.hackerrank.com/challenges/kangaroo/problem
*/

string kangaroo(int x1, int v1, int x2, int v2) {
    if(v1 == v2 && x1 != x2) return "NO";
    else if(v1 == v2 && x1 == x2) return "YES";
    else if((v1 - v2)*(x1 - x2) > 0) return "NO";
    
    float y1 = ((v1*x2) - (v2*x1))/(v1-v2);
    int y2 = ((v1*x2) - (v2*x1))/(v1-v2);
    
    int z1 = (y1 - x2)/v2;
    float z2 = (y1 - x2)/v2;
    
    int w1 = (y1 - x1)/v1;
    float w2 = (y1 - x1)/v1;
    
    if((z1 * 10 == int(z2*10)) && (w1 * 10 == int(w2*10))) return "YES";
    else if(z2 != w2) return "NO";
    return "NO";
}
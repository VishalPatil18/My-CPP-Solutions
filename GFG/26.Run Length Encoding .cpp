char *encode(char *src)
{     
    char *ans =  new char[20000];
    int ansPos = 0;
    
    int count = 1;
    int length = strlen(src);
    string encoded_string = "";
    int i;
    for(i=1; i<length; ++i){
        if(src[i] == src[i-1]) count++;
        else {
            encoded_string += src[i-1];
            encoded_string += to_string(count);
            count = 1;
        }
    }
    encoded_string += src[i-1];
    encoded_string += to_string(count);
    
    length = encoded_string.length();

    for(int i = 0; i < length; i++)
        ans[i] = encoded_string[i];

    ans[length] = '\0';
    
    return ans;
}
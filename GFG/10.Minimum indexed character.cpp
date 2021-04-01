class Solution{
    public:
	string printMinIndexChar(string str, string patt)
	{
	    // Code here
	    for(int i=0; i<str.size(); ++i) {
	        for(int j=0; j<patt.size(); ++j) {
	            if(str[i] == patt[j]){
	                string s(1, patt[j]);
	                return s;
	            }
	        }
	    }
	    return "$";
	}
};
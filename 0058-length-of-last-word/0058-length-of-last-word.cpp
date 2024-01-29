class Solution {
public:
    int lengthOfLastWord(string s) {
        string temp = "";
        for(int i = s.size()-1;i>=0;i--){
            if(s[i] != ' '){
                // cout<<"s[i] "<<s[i]<<endl;
                temp += s[i];
            }
            // cout<<"temp1 "<<temp<<endl;
            if(s[i] == ' '&& s[i+1] != ' '&& i!= s.size()-1){
                // cout<<"temp2 "<<temp<<endl;
                break;
            }
        }
        return temp.size();
    }
};
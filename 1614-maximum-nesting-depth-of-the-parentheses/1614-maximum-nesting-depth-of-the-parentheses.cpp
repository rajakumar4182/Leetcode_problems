class Solution {
public:
    int maxDepth(string s) {
        int cd = 0;
        int md = 0;
        
        for(auto ch: s){
            if(ch == '('){
                cd++;
                md = max(md,cd);
            }
            else if(ch == ')'){
                if(cd > 0){
                    cd--;
                }
                else{
                    return -1;
                }
            }
        }
        if(cd != 0) return -1;
        
        return md;
    }
};
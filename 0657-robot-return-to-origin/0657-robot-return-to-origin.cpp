class Solution {
public:
    bool judgeCircle(string moves) {
        int x =0,y=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i] == 'U'){
                x += 1;
                y += 0;
            }
            else if(moves[i] == 'R'){
                x += 1;
                y += 1;
            }
            else if(moves[i] == 'D'){
                x += -1;
                y += 0;
            }
            else{
                x += -1;
                y += -1;
            }
            
        }
        if(x == 0 && y == 0) return true;
        else return false;
    }
};
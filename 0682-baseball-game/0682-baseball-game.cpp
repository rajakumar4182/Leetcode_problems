class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(int i =0;i<operations.size();i++){
            if(s.empty()) s.push(stoi(operations[i]));
            else{
                if(operations[i] == "C"){
                    s.pop();
                }
                else if(operations[i] == "D"){
                    int elem = s.top();
                    
                    s.push(elem * 2);
                }
                else if(operations[i] == "+"){
                    int elem1 = s.top();
                    s.pop();
                    int elem2 = s.top();
                    s.push(elem1);
                    s.push(elem1+elem2);
                }
                else{
                    int elem = stoi(operations[i]);
                    s.push(elem);
                }
            }
        }
        int sum =0;
        while(!s.empty()){
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};

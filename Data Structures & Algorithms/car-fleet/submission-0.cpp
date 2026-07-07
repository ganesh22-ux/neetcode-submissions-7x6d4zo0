class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> car;
        for(int i=0;i<position.size();i++){
            car.push_back({position[i],speed[i]});
        }
        sort(car.rbegin(),car.rend());
        vector<double>stack;
        for(auto &c:car){
            stack.push_back((double)(target-c.first)/c.second);
            if(stack.size() >= 2 && stack.back() <= stack[stack.size()-2]){
                stack.pop_back();
            }
        }
        return stack.size();
    }
};

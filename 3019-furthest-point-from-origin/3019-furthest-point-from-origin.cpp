class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size();
        int cnt =0;
        int res =0;
        for(int i =0;i<n;i++){
            if(moves[i] == 'L') res--;
            else if(moves[i] == 'R') res++;
            else cnt++;
        }
        return abs(res) + cnt;
    }
};
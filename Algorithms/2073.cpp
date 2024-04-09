class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int size = tickets.size();
        int i = 0;
        int time_taken = 0;
        if (k > tickets.size()) return -1;
        while(tickets[k] > 0){
            if (i >= size ){
                i = 0;
            }
            if (tickets[i] > 0){
                tickets[i]--;
                time_taken++;
            }
            i++;
        }
        return time_taken;
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size()-1; i >= 0; i--){
            if (digits[i]+1 == 10){
                if (digits[0]+1 == 10 && i == 0){
                    digits[0] = 1;
                    digits.push_back(0);
                }
                else {
                    digits[i] = 0;
                }
            }
            else {

                digits[i] = digits[i] + 1;
                break;
            }
        }
        return digits;
    }
};
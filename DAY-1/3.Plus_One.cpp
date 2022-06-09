vector<int> plusOne(vector<int>& digits) {
    int carry = 0;
    int digitsSize = digits.size();
    
    for(int i = digitsSize - 1; i >= 0; i--) {
        if(digits[i] < 9) {
            digits[i]++;
            return digits;
        } else {
            digits[i] = 0;
        }
    }       
    vector<int> newDigits(digits.size() + 1, 0);
    newDigits[0] = 1;
    return newDigits;
}
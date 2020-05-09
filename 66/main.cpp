    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int len=digits.size()-1;
        for(int i=len;i>=0;--i)
        {
            digits[i]=digits[i]+carry;
            if(digits[i]>=10)
                carry=1;
            else
                carry=0;
            digits[i]%=10;
        }
        if(carry)
            digits.insert(digits.begin(),1);
        return digits;
    }
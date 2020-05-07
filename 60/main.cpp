    string getPermutation(int n, int k) {
        int pTable[10] = {1};        //factorial pre-calculated
        for(int i = 1; i < 10; i++)  pTable[i] = i * pTable[i-1];
        
        vector<char> numSet;         //in-order num set to fetch numbers
        for(int i = 0; i < n; i++) numSet.push_back('0'+i+1);
        
        string ans = "";
        int k1 = (k-1) % pTable[n];  //if k > n!. (k-1) for zero-based index
        int n1 = n;
        
        while(n1 > 0) {
            int numPermutation = k1 / pTable[n1-1];
            ans += numSet[numPermutation];
            numSet.erase(numSet.begin()+numPermutation);
            k1 %= pTable[n1-1];
            n1--;
        }
        return ans;
    }
vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int N, long long int K)
    {
         int i=0,j=0;
        vector<long long> ans;
        while(i!=N-K+1){
            while(a[j] >= 0 && j<N) j++;
            while(i<=j && i<N-K+1) ans.push_back(j-i++<K ? a[j] : 0);
            j++;
        }
        return ans;

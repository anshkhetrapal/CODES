 int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<int, int> hash;
        int sum = 0, maxlen = 0;
        for(int i = 0; i < N; i++)
        {
            sum += A[i];
            if(sum == K)
            {
                maxlen = max(maxlen,i+1);
            }
            else
            {
                int rem = sum - K;
                if(hash.find(rem) != hash.end())
                {
                    maxlen = max(maxlen, i - hash[rem]);
                }
            }
            if(hash.find(sum) == hash.end())
            {
                hash[sum] = i;
            }
        }
        return maxlen;
    } 

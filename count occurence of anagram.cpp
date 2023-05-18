class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    unordered_map<char,int>mp;
	    for(int i=0;i<pat.size();i++){
	        mp[pat[i]]++;
	    }
	    int cnt=0;
	    int size=pat.size();
	    int count=mp.size();
	    int i=0,j=0;
	    while(j<txt.size()){
	        if(mp.find(txt[j])!=mp.end()){
	            mp[txt[j]]--;
	            if(mp[txt[j]]==0) count--;
	        }
	        if(j-i+1<size){
	            j++;
	        }
	        else if(j-i+1==size){
	            if(count==0){
	                cnt++;
	            }
	            if(mp.find(txt[i])!=mp.end()){
	                mp[txt[i]]++;
	                if(mp[txt[i]]==1) count++;
	            }
	            i++;
	            j++;
	        }
	    }
	    return cnt;
	}

};

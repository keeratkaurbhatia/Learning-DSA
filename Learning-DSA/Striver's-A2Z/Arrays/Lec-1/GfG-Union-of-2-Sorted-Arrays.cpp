// O(n+m), O(n+m)

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int sizeOfA= a.size();
        int sizeOfB= b.size();
        vector<int> ans;
        
        int first=0 , second = 0;
        
        while(first < sizeOfA && second < sizeOfB){
            if(a[first] < b[second]){
                if(ans.empty() || ans.back() != a[first]){
                    ans.push_back(a[first]);
                }
                first++;  
            }
            else if(a[first] > b[second]){
                if(ans.empty() || ans.back() != b[second]){
                    ans.push_back(b[second]);
                }
                second++;  
            }
            else {  
                if(ans.empty() || ans.back() != a[first]){
                    ans.push_back(a[first]);
                }
                first++; second++;  
            }
        }
        
        while(second<sizeOfB){
            if(ans.empty() || ans.back() != b[second]){
                ans.push_back(b[second]);
            }
            second++;
        }  
        
        while(first<sizeOfA){
            if(ans.empty() || ans.back() != a[first]){
                ans.push_back(a[first]);
            }
            first++;  
        }  
        
        return ans;
    }
};

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int count=0;
        long long product=1;
        int i=0,j=0;
        while(j<n){
            product*=a[j];
            while(i<j && product>=k){
                product/=a[i];
                i++;
            }
            if(product<k)
            count+=(j-i+1);
            
            j++;
        }
        return count;
    }
};

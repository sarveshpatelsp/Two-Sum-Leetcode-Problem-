int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int length = 0;
        for (int i = 0 ; i < n ; i++)
        {
            int sum = 0;
            for (int j = i ; j < n ; j++)
            {
                sum += arr[j];
                if(sum == k)
                length = max(length , j-i+1);
            }
        }
        return length;
    }
int main(){
        vector<int>arr;
        for(int i = 0 ; i < arr.size() ; i++)
                cin >> arr[i]; 
        int k;
        cin >> k;
       cout << longestSubarray(arr , k) << endl; 
    return 0;
}

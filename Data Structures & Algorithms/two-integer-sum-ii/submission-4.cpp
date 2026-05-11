class Solution {
public:
    int bs(int find, vector<int>& numbers){
        int n = numbers.size();
        int start = 0;
        int end = n-1;

        while(start <= end){
            int mid = (start + end)/2;
            if(numbers[mid] == find) return mid;
            else if(numbers[mid] < find){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return -1;
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i=0;i<n;i++){
            int find = target - numbers[i];
            // if(find == numbers[i]) continue;
            int index = bs(find, numbers);
            if(index != -1){
                return {i+1, index+1};
            }
        }
        return {-1,-1};
    }
};

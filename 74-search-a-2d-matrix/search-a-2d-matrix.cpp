class Solution {
public:
    bool search(vector<int>& arr, int target){

        int low=0,high=arr.size()-1,mid;

        while(low<=high){

            mid=(low+high)/2;

            if(arr[mid]<target) low=mid+1;
            else if(arr[mid]>target) high=mid-1;
            else return true;

        }

        return false;

    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i=1;i<matrix.size();++i)
            if(matrix[i][0]>target) return search(matrix[i-1],target);
        
        
        return search(matrix[matrix.size()-1],target);

    }
};
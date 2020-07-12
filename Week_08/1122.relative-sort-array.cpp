class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int tmp = 0;
        for (int i=0;i<arr2.size();i++) {
            for (int j=0;j<arr1.size();j++) {
                if (arr2[i] == arr1[j]) {
                    swap(arr1[j],arr1[tmp++]);
                }
            }
        }
        sort(arr1.begin()+tmp,arr1.end());
        return arr1;
    }
};

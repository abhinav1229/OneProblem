// Problem: https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category=Arrays&sortBy=submissions

// Solution: C++

int missingNumber(vector<int>& array, int n) {
        int array_sum = accumulate(array.begin(), array.end(), 0);
        int series_sum = 0;
        for(int i=1; i<=n; i++) series_sum += i;
        return series_sum - array_sum;
}

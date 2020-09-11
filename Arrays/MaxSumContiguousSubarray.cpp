// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
// Kaden's Algorithm
//O(N) solution

int Solution::maxSubArray(const vector<int> &A) {
    
    int sum = INT_MIN, temp = 0;
    
    for( int i = 0 ; i < A.size() ; i++){
        
        temp += A[i];
        sum = max(temp,sum);
        
        if( temp <= 0)
            temp = 0;
    }
    return sum;
}

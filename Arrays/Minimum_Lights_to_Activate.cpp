// https://www.interviewbit.com/problems/minimum-lights-to-activate/
O(N) solution

int Solution::solve(vector<int> &A, int B) {
    
    int i = 0, n = A.size(), count = 0, flag = 0, t = 0;
    
    while( i < n){
        
        flag = 0;
        for( int x = i+B-1 ; x >= t ; x--){
            
            if( A[x] == 1){
                
                t = x+1;
                flag = 1;
                count++;
                i = x+B; // All bulbs beyond i has light
                break;
            }
        }
        if( !flag)
            return -1;
        
        if( i >= n)
            return count;
    }
    return count;
}

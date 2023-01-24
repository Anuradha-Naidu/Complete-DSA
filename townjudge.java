USING COUNT ARRAY :

class Solution {
    public int findJudge(int N, int[][] trust) {
        int [] count = new int[ N+1 ]; // to store the trust of each person on tj and tj's total trust gained

        for(int [] t: trust){
            count[t[0]]--; // a dec for trusting b
            count[t[1]]++; // b inc for gaining trust
        }

        for( int i = 1; i <= N;i++){ // iterate entire loop to find tj
            if(count[i] == N-1){ // tj has = N-1 trust 
                return i;
            }
        }

        return -1;
    }
}

USING HASH TABLE :
USING GRAPH :

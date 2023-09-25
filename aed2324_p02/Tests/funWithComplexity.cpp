#include "funWithComplexity.h"

//=============================================================================
// Exercise 4: Analyzing a river
//=============================================================================
// TODO
int FunWithComplexity::river(const vector<int> & v, int k, int t) {
    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
        vector<int> aux;
        for(int j = i; j < i+k; j++) {
            aux.push_back(v[j]);
        }
        int count = 0;
        for(int z: aux) {
            if (z > t) count++;
        }
        if (count > k/2) ans++;
    }
    return ans;
}

//=============================================================================
// Exercise 5: Spiral of Numbers
//=============================================================================
// TODO
pair<int, int> FunWithComplexity::spiral(int n) {
    pair<int, int> ans = {0, 0};
    return ans;
}


//=============================================================================
// Exercise 7: Squared notebook
//=============================================================================
// TODO
long long FunWithComplexity::gridSum(int a, int b) {
    return 0;
}
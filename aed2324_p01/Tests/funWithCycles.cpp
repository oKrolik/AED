#include "funWithCycles.h"

//=============================================================================
// Exercise 1: Palindromes
//=============================================================================
// TODO
bool FunWithCycles::palindrome(const std::string & s) {
    string flag = s;
    for (int i = 0; i < s.length() / 2; ++i) {
        if (s[i] != flag[s.length()-i-1]) return false;
    }
    return true;
}


//=============================================================================
// Exercise 2: Palindrome Sentences
//=============================================================================
// TODO
bool FunWithCycles::palindromeSentence(const std::string & s) {
    string aux;
    for (char c: s) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            aux += char(tolower(c));
        }
    }
    for (int i = 0; i < aux.length() / 2; i++) {
        if (aux[i] != aux[aux.length()-i-1]) {
            return false;
        }
    }
    return true;
}



//=============================================================================
// Exercise 3: Interesting Numbers
//=============================================================================
// TODO
int FunWithCycles::nextInterestingNumber(int n, int sum) {
    n++;
    while (true) {
        if (digitSum(n) == sum) return n;
        n++;
    }
}

// This auxiliary function should return the sum of the digits of n
// TODO
int FunWithCycles::digitSum(int n) {
    int aux = n;
    int digit = aux;
    int sum = 0;
    while (aux > 0) {
        digit = aux % 10;
        sum += digit;
        aux = aux / 10;
    }
    return sum;
}


//=============================================================================
// Exercise 4: Winter is coming
//=============================================================================
// TODO
int FunWithCycles::winter(const vector<int> & v) {
    int cur_len = 0;
    int max_len = 0;
    for (int i = 0; i < v.size()-1; ++i) {
        int temp_diff = v[i] - v[i+1];
        if (temp_diff > 0) cur_len++;
        else cur_len = 0;
        if (cur_len > max_len) max_len = cur_len;
    }
    return max_len;
}


//=============================================================================
// Exercise 5: Playing with vectors
//=============================================================================

// a) count
// TODO
int FunWithCycles::count(const vector<int> & v, int n) {
    int count = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == n) count++;
    }
    return count;
}

// b) hasDuplicates
// TODO
bool FunWithCycles::hasDuplicates(const vector<int> & v) {
    for (int i = 0; i < v.size(); ++i) {
        int flag = FunWithCycles::count(v, v[i]);
        if (flag != 1) return true;
    }
    return false;
}

// c) removeDuplicates
// TODO
void FunWithCycles::removeDuplicates(vector<int> & v) {
    int size = v.size();
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size;) {
            if (v[i] == v[j]) {
                // Erase the duplicate element
                v.erase(v.begin() + j);
                size--; // Decrease the size of the vector
            } else {
                j++; // Move to the next element
            }
        }
    }
}

// d) merge
// TODO
vector<int> FunWithCycles::merge(const vector<int> & v1, const vector<int> & v2) {
    vector<int> ans;
    int i = 0; // Pointer for v1
    int j = 0; // Pointer for v2

    while (i < v1.size() && j < v2.size()) {
        if (v1[i] <= v2[j]) {
            ans.push_back(v1[i]);
            i++;
        } else if (v1[i] > v2[j]) {
            ans.push_back(v2[j]);
            j++;
        }
    }

    // Add any remaining elements from v1 and v2
    while (i < v1.size()) {
        ans.push_back(v1[i]);
        i++;
    }

    while (j < v2.size()) {
        ans.push_back(v2[j]);
        j++;
    }

    return ans;
}

//=============================================================================
// Exercise 6: Playing with prime numbers
//=============================================================================

// a) isPrime
// TODO
bool FunWithCycles::isPrime(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) count++;
    }
    return count == 2;
}

// b) factorize
// TODO
vector<int> FunWithCycles::factorize(int n) {
    vector<int> ans;

    while (n % 2 == 0) {
        ans.push_back(2);
        n /= 2;
    }
    for (int i = 3; i*i <= n; i+=2) {
        while(n % i == 0) {
            ans.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        ans.push_back(n);

    return ans;
}

// c) listPrimes
// TODO
vector<int> FunWithCycles::listPrimes(int n) {
    vector<int> ans;
    for(int i = 2; i <= n; i++)
        if (FunWithCycles::isPrime(i)) ans.push_back(i);
    return ans;
}

#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int length = arr.size();
        if (length == 1)return;
        for (int i = 0; i < length; i++) {
            if (arr[i] == 0) {
                arr.insert(arr.begin() + i, 0);
                arr.pop_back();
                i++;
            }
        }
        return;
    }
};

int main() {

    return 0;
}

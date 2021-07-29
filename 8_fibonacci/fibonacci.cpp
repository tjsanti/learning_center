#include <iostream>
#include <vector>

using namespace std;

void fibonacci(int n) {
    vector<int> nums = {1, 1};

    while (nums.back() < n) {
        int last_idx = nums.size() - 1;
        nums.push_back(nums[last_idx] + nums[last_idx - 1]);
    };

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] <= n) {
            cout << nums[i] << endl;
        };
    };
};

int main() {
    cout << "Enter an upper bound: ";
    int n;
    cin >> n;

    fibonacci(n);
};
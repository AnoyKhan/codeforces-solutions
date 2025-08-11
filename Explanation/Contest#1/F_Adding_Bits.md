# 🧩 Problem: F - Adding Bits

## ✅ Summary:
তোমাকে দুটি unsigned integer ইনপুট দেওয়া হবে: `A` এবং `B`  
তুমি তাদের উপর **bitwise XOR** (`^`) অপারেশন করে ফলাফল প্রিন্ট করবে।

---

## 📥 Input:
```aiignore
A B
```
`(0 ≤ A, B ≤ 10^9)`

**Example Input:**
```aiignore
3 5
```
---
## 📤 Output:
```aiignore
Result of A ^ B
```
**Example Output:**
```aiignore
6
```
---
## 🧠 Logic:
Bitwise XOR (`^`) এর নিয়ম:
- যদি দুটি corresponding bit আলাদা হয় → 1
- যদি একই হয় → 0

**Binary Example:**
```
A = 3 → 011
B = 5 → 101
A ^ B = 110 → 6
```
---
## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned int A, B;
    cin >> A >> B;
    cout << (A ^ B) << endl;
    return 0;
}
```
---
## ✅ Tags:
Bitwise, XOR, Binary Logic, C++

---
## 🔚 Final Notes:
এই প্রবলেমটি bitwise operations নিয়ে কাজ করার জন্য অসাধারণ।
XOR অপারেটর অনেক encryption, toggling এবং competitive programming এ ব্যবহৃত হয়।
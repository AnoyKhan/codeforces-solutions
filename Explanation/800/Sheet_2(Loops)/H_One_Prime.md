# 🧩 Problem: H - One Prime

## ✅ Summary:
তোমাকে একটি সংখ্যা `n` ইনপুট হিসেবে দেওয়া হবে।  
তুমি চেক করবে এটি একটি **prime number** কিনা।

---

## 📥 Input:
একটি পূর্ণসংখ্যা `n`  
(1 ≤ n ≤ 10^5)

**Example Input 1:**
```
7
```
**Example Input 2:**
```
9
```
---

## 📤 Output:
- যদি সংখ্যা `n` prime হয় → প্রিন্ট করো: `YES`
- না হলে → প্রিন্ট করো: `NO`

**Example Output 1:**
```
YES
```
**Example Output 2:**
```
NO
```

---

## 🧠 Logic:
- ১ অথবা তার থেকে ছোট সংখ্যা কখনোই prime না।
- Prime চেক করতে হলে ২ থেকে √n পর্যন্ত loop চালিয়ে চেক করতে হয় `n % i == 0` কিনা।
- যদি কোনো সংখ্যা `n` কে নিঃশেষে ভাগ করতে পারে, তাহলে সেটা prime না।

---
## 💡 Code:
```cpp
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    cin >> number;

    if (isPrime(number)){
        cout <<"YES";
    } else {
        cout <<"NO";
    }

    return 0;
}
```
---
## ✅ Tags:
Prime Number, Loop, Square Root Optimization, C++

---
## 🔚 Final Notes:
এই কোডটি sqrt(n) অপটিমাইজেশনের মাধ্যমে অনেক দ্রুত কাজ করে।
যেকোনো বড় ইনপুটে prime চেক করার জন্য এটি efficient এবং widely used method।

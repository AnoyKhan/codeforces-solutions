# 🧩 Problem: P - First Digit (Even or Odd)

## ✅ Summary:
তোমাকে একটি পূর্ণসংখ্যা `x` দেওয়া হবে।  
তুমি বের করবে এই সংখ্যাটির **প্রথম ডিজিটটি (most significant digit)** এবং চেক করবে সেটি **even নাকি odd**।

---

## 📥 Input:
একটি integer `x`  
(1 ≤ x ≤ 10^9)

**Example Input:**

```
4567
```
---
## 📤 Output:
- যদি প্রথম ডিজিট even হয় → `EVEN`
- যদি প্রথম ডিজিট odd হয় → `ODD`

**Example Output:**
```
EVEN
```
---

## 🧠 Logic:
- যেহেতু আমরা শুধুমাত্র **প্রথম ডিজিট** চাচ্ছি, তাই:
    - যতক্ষণ পর্যন্ত `x ≥ 10`, ততক্ষণ `x` কে `x / 10` দিয়ে ভাগ করো।
    - এতে করে শেষে `x` হবে শুধুমাত্র **প্রথম ডিজিট**।
- তারপর, প্রথম ডিজিটটি `even` না `odd` — সেটা `% 2` দিয়ে চেক করো।

---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    while (x >= 10) {
        x /= 10;
    }

    if (x % 2 == 0) {
        cout << "EVEN";
    } else {
        cout << "ODD";
    }

    return 0;
}

```

---

## ✅ Tags:
First Digit, While Loop, Modulo, Condition Check, C++ Basics
---

## 🔚 Final Notes:
এই প্রবলেমটি সংখ্যার প্রথম ডিজিট খুঁজে বের করার প্র্যাকটিস করায় এবং % ও loop এর ব্যবহার শেখায়।
ব্যবহারিক সমস্যা যেমন Mobile Number এর prefix চেক করার মতো কাজে এই লজিক কাজে লাগতে পারে।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

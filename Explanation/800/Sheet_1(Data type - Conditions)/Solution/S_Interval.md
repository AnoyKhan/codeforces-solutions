# 🧩 Problem: S - Interval

## ✅ Summary:
তোমাকে একটি দশমিক সংখ্যা (floating point number) `x` ইনপুট হিসেবে দেওয়া হবে।  
তুমি দেখতে চাও, এই সংখ্যা নিচের কোন ইন্টারভ্যালে পড়ে:

- [0,25]
- (25,50]
- (50,75]
- (75,100]

যদি `x` 0–100 এর বাইরে হয়, তাহলে প্রিন্ট করবে `Out of Intervals`.

---

## 📥 Input:
একটি দশমিক সংখ্যা `x` → (may be less than 0 or more than 100)

**Example Input:**

```
27.5
```
---
## 📤 Output:
Interval (25,50]

**Example Output:**
```
Interval (25,50]
```
---

## 🧠 Logic:
আমরা শর্তগুলোকে সাবধানে চেক করবো:
1. যদি x < 0 or x > 100 → Out of Intervals
2. যদি 0 ≤ x ≤ 25 → Interval [0,25]
3. যদি 25 < x ≤ 50 → Interval (25,50]
4. যদি 50 < x ≤ 75 → Interval (50,75]
5. যদি 75 < x ≤ 100 → Interval (75,100]

> প্রত্যেক ইন্টারভ্যালের মাঝে কিছুটা **inclusive** আর কিছুটা **exclusive** অংশ থাকে। যেমন (25,50] মানে 25 বাদ, কিন্তু 50 সহ।

---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;

    if (x < 0 || x > 100) {
        cout << "Out of Intervals";
    } else if (x >= 0 && x <= 25) {
        cout << "Interval [0,25]";
    } else if (x > 25 && x <= 50) {
        cout << "Interval (25,50]";
    } else if (x > 50 && x <= 75) {
        cout << "Interval (50,75]";
    } else if (x > 75 && x <= 100) {
        cout << "Interval (75,100]";
    }

    return 0;
}

```

---

## ✅ Tags:
Range Check, Interval Matching, Floating Point, Conditions in C++

---

## 🔚 Final Notes:
এই ধরণের প্রবলেম ফিজিক্স বা গ্রেডিং সিস্টেমে বিভিন্ন রেঞ্জ নির্ধারণে কাজে লাগে।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

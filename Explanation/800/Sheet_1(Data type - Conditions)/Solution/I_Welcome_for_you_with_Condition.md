# 🧩 Problem: I - Welcome for you with Condition

## ✅ Summary:
দুটি পূর্ণসংখ্যা (a এবং b) ইনপুট নিয়ে যদি a বড় অথবা সমান হয় b এর, তাহলে "Yes" প্রিন্ট করতে হবে; নাহলে "No" প্রিন্ট করতে হবে।

---

## 📥 Input:
এক লাইনে দুটি পূর্ণসংখ্যা (a এবং b) ইনপুট দেওয়া হবে।

**Example Input:**

```
5 3
```
---
## 📤 Output:
যদি a ≥ b হয়, তাহলে:Yes, নাহলে:No

**Example Output:**
```
Yes
```
---

## 🧠 Logic:
- প্রথমে দুটি সংখ্যা ইনপুট নেওয়া হবে।
- এরপর তুলনা করতে হবে: যদি `a >= b`, তাহলে `"Yes"` প্রিন্ট করতে হবে।
- অন্যথায় `"No"` প্রিন্ট করতে হবে।
- সহজ if-else কন্ডিশন ইউজ করা হয়েছে।
---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a >= b) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

```

---

## ✅ Tags:
Comparison, Conditional Statement, If-Else, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি মূলত প্রাথমিক if-else কন্ডিশনাল স্টেটমেন্টের বেসিক ধারণা শেখায় এবং দুটি সংখ্যার মধ্যে সম্পর্ক যাচাই করার প্র্যাকটিস করায়।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

# 🧩 Problem: W - Mathematical Expression

## ✅ Summary:
তোমাকে একটি গাণিতিক এক্সপ্রেশন ইনপুট হিসেবে দেওয়া হবে —  
যেমন: `a + b = c`  
তুমি যাচাই করবে, এটি **সঠিক কিনা (Yes)**।  
যদি না হয়, তাহলে সঠিক উত্তর প্রিন্ট করবে।

---

## 📥 Input:
এক লাইনে ইনপুট দেওয়া হবে: a operator b = result
যেখানে:
- `a`, `b`, `result` → পূর্ণসংখ্যা
- `operator` → `+`, `-`, অথবা `*`

**Example Input:**

```
3 + 4 = 7
```
---
## 📤 Output:
- যদি এক্সপ্রেশনটি সঠিক হয় → `Yes`
- না হলে → এক্সপ্রেশনের সঠিক ফলাফল

**Example Output (সঠিক হলে):**
```
Yes
```
**Example Output (ভুল হলে):**
```
12
```
---

## 🧠 Logic:
- ইনপুট হিসেবে নেয়া হয়: `a`, `c`, `b`, `=`, `sum`
- `c` character থেকে বুঝি: কোন operator ব্যবহার করা হয়েছে
- তারপর যদি `sum == a <op> b`, তাহলে `"Yes"`
- অন্যথায়, সঠিক গাণিতিক মান প্রিন্ট করি।

---

## 💡 Code:
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, sum;
    char c, q;
    cin >> a >> c >> b >> q >> sum;

    if (c == '+') {
        if (sum == (a + b)) {
            cout << "Yes";
        } else {
            cout << a + b;
        }
    } else if (c == '-') {
        if (sum == (a - b)) {
            cout << "Yes";
        } else {
            cout << a - b;
        }
    } else if (c == '*') {
        if (sum == (a * b)) {
            cout << "Yes";
        } else {
            cout << a * b;
        }
    }

    return 0;
}

```

---

## ✅ Tags:
Expression Validation, Arithmetic, Operators, Logic Check, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি গণিতের expression validation এবং গাণিতিক operation চেক করার ভালো প্র্যাকটিস।
C++ এ character এবং integer input একসাথে ব্যবস্থাপনা করতেও এটি সহায়ক।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

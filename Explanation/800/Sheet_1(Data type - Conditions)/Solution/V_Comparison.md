# 🧩 Problem: V - Comparison

## ✅ Summary:
তোমাকে একটি **তুলনামূলক এক্সপ্রেশন** ইনপুট হিসেবে দেওয়া হবে —  
যেখানে থাকবে দুটি পূর্ণসংখ্যা এবং একটি চিহ্ন:  
`>` বা `<` বা `=`  
তোমাকে বলতে হবে, এই তুলনাটি **সঠিক (Right)** কিনা, না হলে **ভুল (Wrong)**।

---

## 📥 Input:
একটি লাইনে তিনটি ইনপুট:
- একটি পূর্ণসংখ্যা `a`
- একটি তুলনা চিহ্ন `s` → (one of `>`, `<`, `=`)
- একটি পূর্ণসংখ্যা `b`

**Example Input:**

```
7 > 3
```
---
## 📤 Output:
- যদি তুলনাটি সত্য হয় → প্রিন্ট করো: `Right`
- যদি ভুল হয় → প্রিন্ট করো: `Wrong`

**Example Output:**
```
Right
```
---

## 🧠 Logic:
- চিহ্নটি যদি `>` হয় → তাহলে `a > b` কিনা চেক করো।
- চিহ্নটি যদি `<` হয় → তাহলে `a < b` কিনা চেক করো।
- চিহ্নটি যদি `=` হয় → তাহলে `a == b` কিনা চেক করো।
- যদি condition true হয় → `"Right"`  
  নাহলে → `"Wrong"`

---

## 💡 Code:
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    char s;
    cin >> a >> s >> b;

    if (s == '>') {
        if (a > b) {
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    } else if (s == '<') {
        if (a < b) {
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    } else if (s == '=') {
        if (a == b) {
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }

    return 0;
}

```

---

## ✅ Tags:
Comparison, Conditional, Operators, Logic Check, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি বাস্তব জীবনে decision-making এবং logical condition চেক করার বাস্তব উদাহরণ।
এছাড়াও এটি C++-এ character-based condition check শেখায়।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

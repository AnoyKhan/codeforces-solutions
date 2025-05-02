# 🧩 Problem: O - Evaluate Simple Arithmetic Expression

## ✅ Summary:
একটি সহজ গাণিতিক এক্সপ্রেশন ইনপুট হিসেবে দেয়া থাকবে — দুটি integer এর মাঝে একটি operator (+, -, *, /)।  
তোমাকে এই এক্সপ্রেশনটি evaluate করে ফলাফল প্রিন্ট করতে হবে।

---

## 📥 Input:
এক লাইনে ইনপুট দেওয়া হবে: `a`, `operator`, `b`  
যেখানে:
- `a`, `b` → integers
- `operator` → একটি ক্যারেক্টার: `+`, `-`, `*`, `/`

**Example Input:**

```
5+2
```
---
## 📤 Output:
এক্সপ্রেশন অনুযায়ী গাণিতিক অপারেশন এর ফলাফল।

**Example Output:**
```
7
```
---

## 🧠 Logic:
- প্রথমে ইনপুট হিসেবে নেয়া হয়েছে: একটি integer `a`, একটি character `s`, এবং আরেকটি integer `b`
- `s` এর ASCII ভ্যালু দেখে নির্ধারণ করা হয়েছে কোন অপারেশন চালানো হবে:
    - `'+'` → ASCII 43 → যোগ
    - `'-'` → ASCII 45 → বিয়োগ
    - `'*'` → ASCII 42 → গুণ
    - `'/'` → ASCII 47 → ভাগ
- তারপর সেই অপারেশনের ফলাফল `cout` দিয়ে প্রিন্ট করা হয়েছে।

---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char s;
    cin >> a >> s >> b;

    if ((int)s == 43) {
        cout << a + b;
    } else if ((int)s == 45) {
        cout << a - b;
    } else if ((int)s == 42) {
        cout << a * b;
    } else if ((int)s == 47) {
        cout << a / b;
    }

    return 0;
}

```

---

## ✅ Tags:
Arithmetic, Operators, Expression Evaluation, If-Else, Beginner
---

## 🔚 Final Notes:
এই প্রবলেমটি C++ এ কিভাবে operator character ইনপুট নিয়ে তাদের ASCII মান ব্যবহার করে গাণিতিক অপারেশন চালাতে হয় — তা শেখায়।
এটি একটি বেসিক expression evaluator হিসেবে কাজ করে।
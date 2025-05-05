# 🧩 Problem: F - Digits_Summation

## ✅ Summary:
দুটি ভিন্ন ভিন্ন ফ্লোটিং-পয়েন্ট সংখ্যা ইনপুট নিয়ে তাদের গুণফল নির্ণয় করতে হবে এবং আউটপুটে দশমিকের পরে ঠিক ৩টি ঘর (decimal places) দেখাতে হবে।

---

## 📥 Input:
এক লাইনে দুটি ফ্লোট নাম্বার (floating-point numbers) ইনপুট দেওয়া হবে।

**Example Input:**

```
2.345 
7.890
```
---
## 📤 Output:
দুটি সংখ্যার গুণফল, দশমিকের পরে ঠিক ৩ ডিজিট পর্যন্ত দেখাতে হবে।

**Example Output:**
```
18.496
```

---

## 🧠 Logic:
- প্রথমে দুটি সংখ্যা ইনপুট নেওয়া হবে।
- তারপর `*` অপারেটর ব্যবহার করে গুণফল বের করা হবে।
- `cout` দিয়ে আউটপুটে `fixed` এবং `setprecision(3)` ব্যবহার করে ৩ ডিজিট পর্যন্ত প্রিন্ট করতে হবে।

---

## 💡 Code:
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;
    cout << fixed << setprecision(3) << x * y;
    return 0;
}
```

---

## ✅ Tags:
Floating Point, Precision, Multiplication, IO, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি মূলত floating-point সংখ্যা নিয়ে গাণিতিক অপারেশন এবং আউটপুট precision নিয়ন্ত্রণের উপর ফোকাস করে।
C++ এর setprecision() ও fixed ম্যানিপুলেটর শেখার জন্য অসাধারণ একটি ছোট প্রবলেম।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

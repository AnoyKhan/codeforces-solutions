# 🧩 Problem: J - Check Multiples

## ✅ Summary:
দুটি পূর্ণসংখ্যা (a এবং b) ইনপুট নিয়ে যাচাই করতে হবে যে, তাদের মধ্যে একজন আরেকজনের গুণিতক (multiple) কিনা। যদি হয় তাহলে "Multiples" প্রিন্ট করতে হবে, নাহলে "No Multiples"।

---

## 📥 Input:
এক লাইনে দুটি পূর্ণসংখ্যা (a এবং b) ইনপুট দেওয়া হবে।

**Example Input:**

```
6 3
```
---
## 📤 Output:
যদি a অথবা b একজন আরেকজনের গুণিতক হয় তাহলে:Multiples, নাহলে:No Multiples

**Example Output:**
```
Multiples
```
---

## 🧠 Logic:
- প্রথমে দুটি সংখ্যা ইনপুট নেওয়া হবে।
- তারপর দুটি শর্ত চেক করতে হবে:
    - যদি `a % b == 0`, তাহলে a হল b এর multiple।
    - অথবা যদি `b % a == 0`, তাহলে b হল a এর multiple।
- যদি যেকোনো একটি সত্য হয়, তাহলে `"Multiples"` প্রিন্ট করতে হবে।
- অন্যথায় `"No Multiples"`।
---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0) {
        cout << "Multiples";
    } else {
        cout << "No Multiples";
    }
}

```

---

## ✅ Tags:
Multiples, Divisibility, Modular Operator, Conditional Statement, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি number divisibility এবং modular operation (%) এর কনসেপ্টকে পরিষ্কার করে, যা গণিত এবং প্রবলেম সলভিং এর বেসিক ধারণা গঠনে সহায়ক।

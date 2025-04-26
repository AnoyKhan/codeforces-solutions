# 🧩 Problem: C - Simple Calculator

## ✅ Summary:
দুইটি সংখ্যা ইনপুট হিসেবে নিয়ে:
- তাদের যোগফল (addition)
- গুণফল (multiplication)
- বিয়োগফল (subtraction)
  প্রিন্ট করতে হবে, প্রতিটা অপারেশন আলাদাভাবে দেখাতে হবে।

---

## 📥 Input:
দুটি পূর্ণসংখ্যা (integers) এক লাইনে ইনপুট নেওয়া হবে।

**Example Input:**
```
3 5
```
---
## 📤 Output:
প্রথম সংখ্যার সাথে দ্বিতীয় সংখ্যার যোগফল, গুণফল, এবং বিয়োগফল নিচের ফরম্যাটে প্রিন্ট করতে হবে:

**Example Output:**
```
3 + 5 = 8
3 * 5 = 15
3 - 5 = -2
```

---

## 🧠 Logic:
- প্রথমে দুইটি সংখ্যা ইনপুট নিতে হবে `cin` দিয়ে।
- তারপরে তিনটি অপারেশন করতে হবে:
  - `+` যোগফল
  - `*` গুণফল
  - `-` বিয়োগফল
- প্রতিটা অপারেশন সুনির্দিষ্ট ফরম্যাটে `cout` দিয়ে প্রিন্ট করতে হবে।

---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    return 0;
}
```

---

## ✅ Tags:
Arithmetic, IO, Simple Operations, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি মূলত basic input/output এবং basic arithmetic operators (addition, multiplication, subtraction) ব্যবহারে দক্ষতা বাড়ানোর জন্য।
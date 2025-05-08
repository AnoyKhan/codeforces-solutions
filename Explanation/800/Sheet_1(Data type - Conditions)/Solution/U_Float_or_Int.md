# 🧩 Problem: U - Float or Int

## ✅ Summary:
তোমাকে একটি দশমিক সংখ্যা (floating-point number) `a` ইনপুট হিসেবে দেওয়া হবে।  
তুমি চেক করবে, এটা কি সত্যিকারের **int (পূর্ণসংখ্যা)** নাকি **float (ভগ্নাংশযুক্ত)** সংখ্যা।  
ফলাফল অনুযায়ী আলাদা ফরম্যাটে প্রিন্ট করতে হবে।

---

## 📥 Input:
একটি ভাসমান সংখ্যা `a` (double)

**Example Input 1:**

```
7.0
```
**Example Input 2:**

```
7.56
```
---
## 📤 Output:
**If it's an integer (no fractional part):**
int 7

**If it's a float:**
float 7 0.56

**Example Output 1:**
```
int 7

```
**Example Output 2:**
```
float 7 0.56
```

---

## 🧠 Logic:
- ইনপুট হিসেবে double নেয়া হয়েছে।
- `x = a - (int)a` ব্যবহার করে ভগ্নাংশ (fractional part) বের করা হয়েছে।
- যদি `x == 0`, তাহলে এটি int → `"int value"`
- নাহলে float → `"float int_part fraction_part"`

---

## 💡 Code:
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double a;
    cin >> a;
    double x = (double)a - (int)a;

    if (x == 0) {
        cout << "int " << (int)a;
    } else {
        cout << "float " << (int)a << " " << x;
    }

    return 0;
}

```

---

## ✅ Tags:
Type Check, Float vs Int, Casting, Fractional Part, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি সংখ্যা কীভাবে ভগ্নাংশসহ বা ভগ্নাংশহীন হয় — সেটার উপর ভালো ধারণা দেয়।
এছাড়াও টাইপ কাস্টিং, float-subtraction এর ব্যবহার শেখায়।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

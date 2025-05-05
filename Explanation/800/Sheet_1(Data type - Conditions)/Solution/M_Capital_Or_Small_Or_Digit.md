# 🧩 Problem: M - Capital Or Small Or Digit (Check Character Type)

## ✅ Summary:
ইনপুট হিসেবে একটি ক্যারেক্টার (character) দেয়া থাকবে।  
চেক করতে হবে তা কি:
- একটি **digit**
- একটি **capital letter**
- অথবা একটি **small letter**

---

## 📥 Input:
একটি মাত্র ক্যারেক্টার ইনপুট দেওয়া হবে।

**Example Input:**

```
A
```
---
## 📤 Output:
তিনটি সম্ভাব্য আউটপুট:
- যদি ক্যারেক্টারটি digit হয় (0-9): `IS DIGIT`
- যদি ক্যারেক্টারটি capital letter হয় (A-Z):ALPHA IS CAPITAL
- যদি ক্যারেক্টারটি small letter হয় (a-z):ALPHA IS SMALL

**Example Output:**
```
ALPHA IS SMALL
```
---

## 🧠 Logic:
- ক্যারেক্টারকে ASCII ইন্টিজারে রূপান্তর করা হয়েছে → `(int)a`
- এরপর তিনটি রেঞ্জ চেক:
    - 48 থেকে 57 → ডিজিট (0–9)
    - 65 থেকে 90 → ক্যাপিটাল লেটার (A–Z)
    - 97 থেকে 122 → স্মল লেটার (a–z)

---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    int x = (int)a;

    if (x >= 48 && x <= 57) {
        cout << "IS DIGIT";
    } else if (x >= 65 && x <= 90) {
        cout << "ALPHA" << "\n" << "IS CAPITAL";
    } else if (x >= 97 && x <= 122) {
        cout << "ALPHA" << "\n" << "IS SMALL";
    }
}

```

---

## ✅ Tags:
Character, ASCII, Classification, If-Else, Beginner
---

## 🔚 Final Notes:
এই প্রবলেমটি ASCII রেঞ্জ বুঝে ক্যারেক্টার ক্লাসিফিকেশন শেখার জন্য দুর্দান্ত।
Digit, Capital, ও Small letter আলাদা করার জন্য ASCII value ব্যবহার করা হয়েছে।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

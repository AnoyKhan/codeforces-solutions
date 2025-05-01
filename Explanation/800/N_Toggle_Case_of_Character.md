# 🧩 Problem: N - Toggle Case of Character

## ✅ Summary:
ইনপুট হিসেবে একটি ক্যারেক্টার (letter) দেওয়া হবে।  
যদি সেটি small letter হয়, তাহলে সেটিকে capital letter-এ রূপান্তর করে প্রিন্ট করতে হবে।  
আর যদি সেটি capital letter হয়, তাহলে সেটিকে small letter-এ রূপান্তর করে প্রিন্ট করতে হবে।

---

## 📥 Input:
একটি একক ক্যারেক্টার (letter)

**Example Input:**

```
A
```
---
## 📤 Output:
উল্টা case (toggle case) হয়ে যাওয়া ক্যারেক্টার।

**Example Output:**
```
A
```
---

## 🧠 Logic:
- প্রথমে একটি ক্যারেক্টার ইনপুট নেওয়া হয়েছে।
- `ASCII` value বের করে দেখা হয়েছে:
    - যদি 97–122 → small letter → 32 বিয়োগ করে capital করা হয়
    - যদি 65–90 → capital letter → 32 যোগ করে small করা হয়
- `char` ক্যাস্ট করে আবার প্রিন্ট করা হয়।

---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    int x = (int)a;
    if (x >= 97 && x <= 122) {
        x = x - 32;
        cout << (char)x;
    } else if (x >= 65 && x <= 90) {
        x = x + 32;
        cout << (char)x;
    }
    return 0;
}

```

---

## ✅ Tags:
Character, ASCII, Case Conversion, Beginner, Conditional

---

## 🔚 Final Notes:
এই প্রবলেমটি C++ এ ASCII মান ব্যবহার করে কিভাবে ক্যারেক্টারের case পরিবর্তন করতে হয়, সেটা শেখায়।
এর মাধ্যমে তুমি C++ এর টাইপ কাস্টিং, ASCII লজিক এবং if-else প্র্যাকটিস একসাথে করতে পারো।
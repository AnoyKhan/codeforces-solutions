# 🧩 Problem: L - Check Brothers by Surname

## ✅ Summary:
দুইজন ব্যক্তির নামের প্রথম ও শেষ অংশ (first name এবং last name) ইনপুট নিয়ে যাচাই করতে হবে যে, তারা ভাই কিনা — অর্থাৎ তাদের শেষ নাম (surname) এক কিনা।

---

## 📥 Input:
চারটি string ইনপুট দেওয়া হবে:
- প্রথম ব্যক্তির প্রথম নাম ও শেষ নাম
- দ্বিতীয় ব্যক্তির প্রথম নাম ও শেষ নাম

**Example Input:**

```
Ahmed Hossain Karim Hossain
```
---
## 📤 Output:
পযদি উভয়ের শেষ নাম এক হয়, তাহলে প্রিন্ট করতে হবে:ARE Brothers, অন্যথায় প্রিন্ট করতে হবে:NOT

**Example Output:**
```
ARE Brothers
```
---

## 🧠 Logic:
- ইউজার থেকে চারটি string ইনপুট নেওয়া হবে।
    - f1 = প্রথম ব্যক্তির first name
    - f2 = প্রথম ব্যক্তির last name
    - s1 = দ্বিতীয় ব্যক্তির first name
    - s2 = দ্বিতীয় ব্যক্তির last name
- `if (f2 == s2)` হলে দুইজনের last name একই — মানে তারা ভাই।
- অন্যথায় তারা ভাই নয়।
---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    string f1, f2, s1, s2;
    cin >> f1 >> f2 >> s1 >> s2;
    if (f2 == s2) {
        cout << "ARE Brothers";
    } else {
        cout << "NOT";
    }
}

```

---

## ✅ Tags:
String, Comparison, Names, Conditional Logic, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি string ইনপুট, তুলনা এবং সাধারণ যুক্তি (logic) ভিত্তিক সিদ্ধান্ত গ্রহণ শেখায়।
ব্যবহারকারীর নাম বা তথ্য যাচাই করার প্রবলেমের জন্য এটি একটি সহজ উদাহরণ।

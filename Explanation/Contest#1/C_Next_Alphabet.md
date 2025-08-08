# 🧩 Problem: C - Next Alphabet

## ✅ Summary:
তোমাকে একটি ছোট হাতের ইংরেজি অক্ষর (a to z) ইনপুট হিসেবে দেওয়া হবে।  
তুমি এর **পরবর্তী অক্ষর** প্রিন্ট করবে।  
যদি ইনপুট `'z'` হয়, তাহলে `'a'` প্রিন্ট করবে (wrap around)।

---

## 📥 Input:
একটি lowercase character → `a`

**Example Input:**
```aiignore
a
```
---
## 📤 Output:
ইনপুট অক্ষরের পরবর্তী অক্ষর

**Example Output:**
```aiignore
b
```
**Example Input:**
```aiignore
z
```
**Example Output:**
```aiignore
a
```

---

## 🧠 Logic:
- ASCII অনুযায়ী:
    - `'a'` থেকে `'y'` → পরবর্তী অক্ষর পাওয়া যায়: `a + 1`
    - `'z'` এর পর → আবার `'a'` (wrap around)
- সুতরাং:
    - যদি `a != 'z'` → `a + 1` প্রিন্ট করো
    - যদি `a == 'z'` → `'a'` প্রিন্ট করো
---
## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a;

    if ((int)a >= 97 && (int)a < 122) {
        b = (int)a + 1;
        cout << (char)b;
    } else if ((int)a == 122) {
        b = (int)a - 25;
        cout << (char)b;
    }

    return 0;
}
```
---
## ✅ Tags:
Character, ASCII, Wrap Around, C++, Beginner

---
## 🔚 Final Notes:
এই প্রবলেমটি character-based logic এবং ASCII মান বুঝতে সাহায্য করে।
এছাড়াও `'z'` থেকে `'a'` তে wrap-around করার কৌশলটি গুরুত্বপূর্ণ।


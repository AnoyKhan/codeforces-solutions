# 🧩 Problem: D - Ali Baba and Puzzles

## ✅ Summary:
তোমাকে চারটি পূর্ণসংখ্যা `a, b, c, d` ইনপুট হিসেবে দেওয়া হবে।  
তুমি চেক করবে যে নিচের যেকোনো একটি গাণিতিক expression ব্যবহার করে  
**`d` পাওয়া যায় কিনা**।

---

## 📥 Input:
চারটি পূর্ণসংখ্যা:
```aiignore
a b c d
```
**Example Input:**
```aiignore
1 2 3 7
```
---
## 📤 Output:
- যদি কোনো expression `d` র সমান হয় → প্রিন্ট করো: `YES`
- নাহলে → প্রিন্ট করো: `NO`

**Example Output:**
```aiignore
YES
```
---
## 🧠 Checked Expressions:
তুমি নিচের expression গুলো চেক করছো:
```aiignore
a + b * c == d
a + b - c == d
a * b - c == d
a * b + c == d
a - b * c == d
a - b + c == d
```
---
## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main () {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    ((a + b * c) == d || 
     (a + b - c) == d || 
     (a * b - c) == d || 
     (a * b + c) == d || 
     (a - b * c) == d || 
     (a - b + c) == d)
        ? cout << "YES" 
        : cout << "NO";

    return 0;
}
```
## ✅ Tags:
Brute Force, Arithmetic Operators, Expression Evaluation, C++

---

## 🔚 Final Notes:
এই প্রবলেমটি multiple arithmetic combinations চেক করার ধারণা দেয়।
Ternary operator এর ব্যবহার এখানে concise and elegant solution তৈরিতে সাহায্য করে।
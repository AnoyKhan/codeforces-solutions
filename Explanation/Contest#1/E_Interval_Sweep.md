# 🧩 Problem: E - Interval Sweep

## ✅ Summary:
তোমাকে দুটি পূর্ণসংখ্যা `a` এবং `b` ইনপুট দেওয়া হবে।  
তুমি চেক করবে:
- `a` এবং `b` কি **ঘনিষ্ঠ (neighboring)** সংখ্যা?
- অর্থাৎ, তাদের পার্থক্য `0` অথবা `1` — এবং **অন্তত একটি সংখ্যা 0 নয়**।

---

## 📥 Input:
দুটি পূর্ণসংখ্যা:
```aiignore
a b
```
**Example Input:**
```aiignore
2 3
```
---
## 📤 Output:
- যদি `abs(a - b) <= 1` এবং `a + b > 0` → প্রিন্ট করো: `YES`
- নাহলে → `NO`

**Example Output:**
```aiignore
YES
```

---

## 🧠 Logic:
- `abs(a - b) <= 1` → দুটি সংখ্যা ঘনিষ্ঠ (same বা পার্থক্য 1)
- `(a + b) > 0` → অন্তত একটি সংখ্যা non-zero

এই দুইটি শর্ত মিললেই উত্তর `YES`, নয়তো `NO`

---
## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (abs(a - b) <= 1 && (a + b) > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
```
---
## ✅ Tags:
Conditionals, Absolute Difference, Math Logic, C++

---
## 🔚 Final Notes:
এই প্রবলেমটি কনডিশন চেক এবং `abs()` ফাংশনের ব্যবহার শেখায়।
ঘনিষ্ঠ সংখ্যা যাচাই করার জন্য এটি খুবই সংক্ষিপ্ত এবং কার্যকর কোড।
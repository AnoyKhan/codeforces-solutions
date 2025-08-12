# 🧩 Problem: A - Winter Sale

## ✅ Summary:
তোমাকে দুটি মান দেওয়া হবে:
- **x** → ডিসকাউন্টের শতাংশ (%)
- **p** → ডিসকাউন্ট দেওয়ার পরে পণ্যের মূল্য

তুমি **আসল দাম** (original price) বের করবে।

---

## 📥 Input:
```
x p
```
যেখানে:
- 0 ≤ x < 100
- p > 0

**Example Input:**
```aiignore
20 80
```
---
## 📤 Output:
```aiignore
Original price (2 decimal places)
```
**Example Output:**
```aiignore
100.00
```
---
## 🧠 Logic:
ডিসকাউন্টের পরে দাম:
p = original × (1 - x/100)<br>
সুতরাং আসল দাম:
original = p / (1 - x/100)

---

## 💡 Code:
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, p, original;
    cin >> x >> p;
    original = p / (1 - x / 100);
    cout << fixed << setprecision(2) << original;
    return 0;
}
```
---
## ✅ Tags:
Percentage, Reverse Calculation, C++, Math

---
## 🔚 Final Notes:
এই প্রবলেমটি শতাংশ-ভিত্তিক গণনা এবং setprecision() দিয়ে ফরম্যাটিং শেখার জন্য দারুণ উপযোগী।
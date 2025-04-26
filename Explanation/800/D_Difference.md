# 🧩 Problem: D - Difference

## ✅ Summary:
চারটি সংখ্যা ইনপুট হিসেবে নিয়ে প্রথম দুই সংখ্যার গুণফল থেকে পরের দুই সংখ্যার গুণফল বিয়োগ করে, চূড়ান্ত পার্থক্য (Difference) বের করতে হবে এবং সেটা ফরম্যাট করে প্রিন্ট করতে হবে।

---

## 📥 Input:
চারটি পূর্ণসংখ্যা (integers) এক লাইনে ইনপুট নেওয়া হবে।

**Example Input:**
```
5 6 7 8
```
---
## 📤 Output:
পফরম্যাটে `Difference = result` আকারে আউটপুট দিতে হবে।

**Example Output:**
```
Difference = -26
```

---

## 🧠 Logic:
- প্রথমে চারটি সংখ্যা ইনপুট নিতে হবে: `a, b, c, d`
- তারপর প্রথম দুটি সংখ্যার গুণফল বের করতে হবে (`a * b`)
- পরের দুটি সংখ্যার গুণফল বের করতে হবে (`c * d`)
- এরপর `(a*b) - (c*d)` করে পার্থক্য বের করতে হবে।
- সবশেষে `cout` দিয়ে `"Difference = "` টেক্সটসহ ফলাফল প্রিন্ট করতে হবে।

---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, x;
    cin >> a >> b >> c >> d;
    x = (a * b) - (c * d);
    cout << "Difference = " << x;
    return 0;
}
```

---

## ✅ Tags:
Arithmetic, IO, Multiplication, Subtraction, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি দুইটি গাণিতিক গুণফল ও তাদের মধ্যকার পার্থক্য বের করে basic operators এর চর্চা করায়।
Formatting করে আউটপুট দেওয়ার মাধ্যমে প্রিন্ট স্টেটমেন্ট ব্যবহারের প্র্যাকটিসও হয়।
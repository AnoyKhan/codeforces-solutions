# 🧩 Problem: H - Floor, Ceil, and Round of Division

## ✅ Summary:
দুটি পূর্ণসংখ্যা (A এবং B) ইনপুট নিয়ে তাদের ভাগফলের (A/B) **floor**, **ceil**, এবং **round** মান নির্ণয় করে নির্দিষ্ট ফরম্যাটে প্রিন্ট করতে হবে।

---

## 📥 Input:
এক লাইনে দুটি পূর্ণসংখ্যা (A এবং B) ইনপুট দেওয়া হবে, যেখানে B ≠ 0।

**Example Input:**

```
5 2
```
---
## 📤 Output:
নিচের ফরম্যাটে আউটপুট দিতে হবে:
floor A / B = value, ceil A / B = value, round A / B = value.

**Example Output:**
```
floor 5 / 2 = 2 
ceil 5 / 2 = 3 
round 5 / 2 = 2
```
---

## 🧠 Logic:
- প্রথমে দুটি সংখ্যা ইনপুট নেওয়া হবে।
- তারপরে A কে B দিয়ে ভাগ করে একটি floating-point result বের করা হবে।
- এরপর:
    - `floor(result)` দিয়ে সবচেয়ে নিকটবর্তী নিচের পূর্ণ সংখ্যা বের করা হবে।
    - `ceil(result)` দিয়ে সবচেয়ে নিকটবর্তী উপর দিকের পূর্ণ সংখ্যা বের করা হবে।
    - `round(result)` দিয়ে কাছাকাছি পূর্ণ সংখ্যা বের করা হবে।
- `iostream` ও `cmath` লাইব্রেরি ব্যবহার করা হবে।
---

## 💡 Code:
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    double result = (double)A / B;

    cout << "floor " << A << " / " << B << " = " << floor(result) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(result) << endl;
    cout << "round " << A << " / " << B << " = " << round(result) << endl;

    return 0;
}
```

---

## ✅ Tags:
Division, Floor, Ceil, Round, Mathematics, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি প্রাথমিক গণিতের গাণিতিক ফাংশন যেমন floor, ceil, এবং round কিভাবে কাজ করে তা শেখায়।
Floating-point division এর সাথে রাউন্ডিং অপারেশন প্র্যাকটিসের জন্য চমৎকার প্রবলেম।

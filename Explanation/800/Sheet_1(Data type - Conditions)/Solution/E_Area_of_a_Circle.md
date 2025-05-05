# 🧩 Problem: E - Area of Circle

## ✅ Summary:
রেডিয়াস ইনপুট নিয়ে একটি বৃত্তের ক্ষেত্রফল বের করতে হবে (π*r² ফর্মুলা ব্যবহার করে)।

---

## 📥 Input:
একটি ফ্লোট নাম্বার (রেডিয়াস) ইনপুট হিসেবে নেওয়া হবে।

**Example Input:**

```
2.00
```
---
## 📤 Output:
বৃত্তের ক্ষেত্রফল ৯ ডিজিট precision সহ প্রিন্ট করতে হবে।

**Example Output:**
```
12.566370612
```

---

## 🧠 Logic:
- ইউজার থেকে রেডিয়াস (float value) ইনপুট নেয়া হবে।
- এরপর ক্ষেত্রফল বের করতে হবে: `Area = π * r * r`
- `π` এর জন্য ৩.১৪১৫৯২৬৫৩ ব্যবহার করা হয়েছে।
- ফাইনাল আউটপুট ৯ ডিজিট পর্যন্ত decimal প্রিসিশন দিয়ে প্রিন্ট করতে হবে।

---

## 💡 Code:
```cpp
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
  float Area;
  cin >>Area;
  cout<<3.141592653 * Area * Area << setprecision(9);
  return 0;
}

```

---

## ✅ Tags:
Area Calculation, Circle, Floating Point, Precision, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি সিম্পল অথচ গুরুত্বপূর্ণ কারণ এতে C++ এ floating-point সংখ্যা এবং setprecision() ব্যবহারের ধারণা পরিষ্কার করা হয়।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

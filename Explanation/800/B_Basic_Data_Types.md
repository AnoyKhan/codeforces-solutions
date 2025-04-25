# 🧩 Problem: B - Basic Data Types

## ✅ Summary:
ইনপুট হিসেবে ৫টি ভিন্ন ধরনের ডাটা নিতে হবে: `int`, `long long`, `char`, `float`, এবং `double`। প্রতিটি ভ্যালুকে আলাদাভাবে একটি নতুন লাইনে প্রিন্ট করতে হবে।

---

## 📥 Input:
একটি লাইনে নিচের ক্রমে ৫টি ইনপুট থাকবে:

- Integer
- Long long
- Character
- Float
- Double

**Example Input:**
```
3 12345678912345 a 334.23 14049.30493
```

---

## 📤 Output:
প্রতিটি ইনপুট আলাদা লাইনে প্রিন্ট করতে হবে, ইনপুট যেভাবে এসেছে ঠিক সেভাবেই।

**Example Output:**
```
3
12345678912345
a
334.23
14049.3
```

---

## 🧠 Logic:
- `cin` দিয়ে ৫টি ভিন্ন টাইপের ভ্যালু ইনপুট নেওয়া হয়েছে।
- `cout` দিয়ে একে একে প্রতিটা ভ্যালু newline সহ প্রিন্ট করা হয়েছে।

---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a;
    long long b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    return 0;
}
```

---

## ✅ Tags:
Data Types, IO, Beginner, Variable Input

---

## 🔚 Final Notes:
এই প্রবলেমটি C++ এ বিভিন্ন ধরনের ডাটা টাইপ এবং ইনপুট/আউটপুটের সাথে পরিচিত হওয়ার জন্য পারফেক্ট।

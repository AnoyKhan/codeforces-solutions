# 🧩 Problem: T - Sort Numbers

## ✅ Summary:
তোমাকে তিনটি পূর্ণসংখ্যা ইনপুট দেওয়া হবে।  
তুমি প্রথমে তাদের **ascending order** এ প্রিন্ট করবে,  
তারপর একটি খালি লাইন দিবে,  
তারপর ইনপুটে যেভাবে ছিল, সেই **original order** এ প্রিন্ট করবে।

---

## 📥 Input:
এক লাইনে তিনটি পূর্ণসংখ্যা।

**Example Input:**

```
7 21 -14
```
---
## 📤 Output:
প্রথমে sorted ascending order এ: -14 7 21 <br>
তারপর একটি খালি লাইন, এরপর original order: 7 21 -14

**Example Output:**
```
-14 
7 
21

7 
21 
-14
```
---

## 🧠 Logic:
- প্রথমে তিনটি সংখ্যা ইনপুট নেওয়া হবে।
- এগুলিকে একটি অ্যারে বা ভ্যারিয়েবল সেটে রেখে **copy করে sort** করতে হবে।
- তারপর sorted ভ্যালুগুলো লাইন ধরে প্রিন্ট করা হবে।
- তারপর একটি খালি লাইন।
- এরপর আবার ইনপুটের আসল অর্ডার অনুযায়ী প্রিন্ট করতে হবে।

---

## 💡 Code:
```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};
    sort(arr, arr + 3);

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }

    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}

```

---

## ✅ Tags:
Sorting, Array, Input Order, C++ Basics

---

## 🔚 Final Notes:
এই প্রবলেমটি সিম্পল sorting ও input order ব্যবস্থাপনার জন্য উপযুক্ত।
sort() ফাংশনের ব্যবহার ও original value retention শেখার জন্য এটি ভালো চর্চা।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

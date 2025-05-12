# 🧩 Problem: X - Two Intervals

## ✅ Summary:
তোমাকে দুটি ইন্টারভ্যাল (range) দেওয়া হবে:
- প্রথম ইন্টারভ্যাল: `[l1, r1]`
- দ্বিতীয় ইন্টারভ্যাল: `[l2, r2]`

তুমি চেক করবে —  
এই দুটি ইন্টারভ্যালের মধ্যে কোনো **common অংশ (intersection)** আছে কিনা।  
যদি থাকে, তাহলে সেই অংশের **start এবং end** প্রিন্ট করবে।  
না থাকলে প্রিন্ট করবে: `-1`

---

## 📥 Input:
চারটি পূর্ণসংখ্যা ইনপুট: l1 r1 l2 r2 <br>
যেখানে:
- `[l1, r1]` → প্রথম ইন্টারভ্যাল
- `[l2, r2]` → দ্বিতীয় ইন্টারভ্যাল

**Example Input:**
```
2 5 3 6
```
---
## 📤 Output:
- যদি intersection থাকে → `start end`
- যদি না থাকে → `-1`

**Example Output:**
```
3 5
```
---

## 🧠 Logic:
- দুটি ইন্টারভ্যালের intersection এর শুরু হবে: `max(l1, l2)`
- শেষ হবে: `min(r1, r2)`
- যদি `start <= end`, তাহলে intersection আছে → প্রিন্ট করো `start end`
- না হলে → প্রিন্ট করো `-1`

---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int l1, l2, r1, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int start = max(l1, l2);
    int end = min(r1, r2);

    if (start <= end) {
        cout << start << " " << end;
    } else {
        cout << "-1";
    }

    return 0;
}

```

---

## ✅ Tags:
Intervals, Range Overlap, Math, Comparison, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি দুটি রেঞ্জ বা সময়কাল (time interval) এর overlap/intersection বের করার চমৎকার উদাহরণ।
এটি Competitive Programming ও Real-life Scheduling এর জন্য খুবই গুরুত্বপূর্ণ ধারণা।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

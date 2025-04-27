# 🧩 Problem: G - Sum of N Natural Numbers

## ✅ Summary:
একটি পূর্ণসংখ্যা (n) ইনপুট নিয়ে ১ থেকে n পর্যন্ত সমস্ত সংখ্যার যোগফল (sum) নির্ণয় করতে হবে এবং সেটা আউটপুটে প্রিন্ট করতে হবে।

---

## 📥 Input:
একটি পূর্ণসংখ্যা (n), যেখানে 1 <= n <= 10^5

**Example Input:**

```
5
```
---
## 📤 Output:
১ থেকে n পর্যন্ত সব সংখ্যার যোগফল।

**Example Output:**
```
15
```
(কারণ: 1 + 2 + 3 + 4 + 5 = 15)
---

## 🧠 Logic:
- প্রথমে একটি পূর্ণসংখ্যা ইনপুট নেওয়া হবে।
- তারপর সরাসরি ফর্মুলা ব্যবহার করা হবে:
  sum = n * (n + 1) / 2
- এই ফর্মুলা ব্যবহার করলে লুপ ছাড়াই দ্রুত যোগফল পাওয়া যায়।
---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;
int main() {
  int a;
  cin >> a;
  int sum = a * (a + 1) / 2;
  cout << sum;
  return 0;
}
```

---

## ✅ Tags:
Mathematics, Summation, Formula, Arithmetic, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি একটি গুরুত্বপূর্ণ গাণিতিক ধারার (arithmetic series) ধারণা শেখায়।
ফর্মুলা ব্যবহার করার মাধ্যমে কোডিংকে আরও বেশি অপটিমাইজড ও কার্যকর করা হয়।
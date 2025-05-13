# 🧩 Problem: Y - The Last 2 Digits

## ✅ Summary:
তোমাকে চারটি সংখ্যা `A, B, C, D` ইনপুট হিসেবে দেওয়া হবে।  
তুমি তাদের গুণফল বের করবে এবং **শেষ দুইটি ডিজিট (last 2 digits)** প্রিন্ট করবে।  
যদি গুণফলের শেষ সংখ্যা এক ডিজিট হয় (যেমন: 7), তাহলে সামনে একটি `0` বসিয়ে `07` হিসেবে প্রিন্ট করতে হবে।

---

## 📥 Input:
চারটি পূর্ণসংখ্যা → A, B, C, D  
(1 ≤ A, B, C, D ≤ 10^9)

**Example Input:**

```
1 2 3 4
```
---
## 📤 Output:
গুণফলের শেষ দুই ডিজিট, দুই ডিজিট ফরম্যাটে (এক ডিজিট হলে 0 যোগ করে দেখাতে হবে)।

**Example Output:**
```
24
```
---

## 🧠 Logic:
- গুণফল বড় হতে পারে, তাই প্রতি ধাপে `% 100` করে রাখি।
- যেমন: result = (((A * B) % 100) * C) % 100 ...
- সব শেষে result যদি < 10 হয় → সামনে 0 বসিয়ে প্রিন্ট করি।

---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
  long long A, B, C, D;
  cin >> A >> B >> C >> D;

  long long result = A;
  result = (result * B) % 100;
  result = (result * C) % 100;
  result = (result * D) % 100;

  if (result < 10)
      cout << "0" << result << endl;
  else
      cout << result << endl;

  return 0;
}

```

---

## ✅ Tags:
Modular Arithmetic, Multiplication, Last Digits, C++, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি modular multiplication এর কনসেপ্ট শেখায় — যা Competitive Programming-এ বহু জায়গায় ব্যবহার হয়।
অতিরিক্ত সংখ্যার overflow নিয়ন্ত্রণেও এই টেকনিক কাজে আসে।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

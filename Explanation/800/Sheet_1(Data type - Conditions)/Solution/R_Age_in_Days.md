# 🧩 Problem: R - Age in Days

## ✅ Summary:
তোমাকে একটি সংখ্যা `a` দেওয়া হবে, যেটা **মোট দিন (total days)** বোঝায়।  
তুমি সেটা থেকে হিসাব করবে:
- কত বছর (365 দিনে 1 বছর ধরা হয়েছে)
- কত মাস (30 দিনে 1 মাস ধরা হয়েছে)
- বাকি কত দিন

---

## 📥 Input:
একটি পূর্ণসংখ্যা `a` → (0 ≤ a ≤ 1000000)

**Example Input:**

```
400
```
---
## 📤 Output:
তিনটি লাইন:

**Example Output:**
```
1 years
1 months
5 days
```
---

## 🧠 Logic:
আমরা জানি:
- 1 year = 365 days
- 1 month = 30 days

তাহলে:
1. বছর বের করতে → `a / 365`
2. মাস বের করতে → `(a % 365) / 30`
3. দিন বের করতে → `(a % 365) % 30`

---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, year, months, days;
    cin >> a;

    year = a / 365;
    months = (a % 365) / 30;
    days = (a % 365) % 30;

    cout << year << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}

```

---

## ✅ Tags:
Date Conversion, Time Calculation, Integer Division, C++ Basics

---

## 🔚 Final Notes:
এই ধরনের প্রবলেম বিভিন্ন Real-world অ্যাপে (যেমন: বয়স নির্ধারণ, কর্মজীবনের দৈর্ঘ্য, সাবস্ক্রিপশন সময়কাল ইত্যাদি) কাজে লাগে।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

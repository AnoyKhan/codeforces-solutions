# 🧩 Problem: K - Max and Min (Find Minimum and Maximum of Three Numbers)

## ✅ Summary:
তিনটি পূর্ণসংখ্যা (a, b, এবং c) ইনপুট নিয়ে তাদের মধ্যে সর্বনিম্ন (Minimum) এবং সর্বোচ্চ (Maximum) সংখ্যা নির্ণয় করতে হবে এবং সেগুলো স্পেস-সেপারেটেড আকারে প্রিন্ট করতে হবে।

---

## 📥 Input:
এক লাইনে তিনটি পূর্ণসংখ্যা ইনপুট দেওয়া হবে।

**Example Input:**

```
5 7 2
```
---
## 📤 Output:
প্রথমে সর্বনিম্ন সংখ্যা, এরপর সর্বোচ্চ সংখ্যা (একই লাইনে স্পেস দিয়ে আলাদা করে) প্রিন্ট করতে হবে।

**Example Output:**
```
2 7
```
---

## 🧠 Logic:
- প্রথমে তিনটি সংখ্যা ইনপুট নেওয়া হবে।
- তারপর:
    - যদি a > b এবং a > c হয়, তাহলে max = a
    - নাহলে যদি b > a এবং b > c হয়, তাহলে max = b
    - অন্যথায় max = c
- একইভাবে:
    - যদি a < b এবং a < c হয়, তাহলে min = a
    - নাহলে যদি b < a এবং b < c হয়, তাহলে min = b
    - অন্যথায় min = c
- এরপর min এবং max একই লাইনে প্রিন্ট করতে হবে।
---

## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c, min, max;
    cin >> a >> b >> c;
    
    if (a > b && a > c) {
        max = a;
    } else if (b > a && b > c) {
        max = b;
    } else {
        max = c;
    }

    if (a < b && a < c) {
        min = a;
    } else if (b < a && b < c) {
        min = b;
    } else {
        min = c;
    }

    cout << min << " " << max;
    
    return 0;
}
```

---

## ✅ Tags:
Minimum, Maximum, Comparison, Conditional Statement, Beginner

---

## 🔚 Final Notes:
এই প্রবলেমটি তিনটি সংখ্যার মধ্যে তুলনা করার এবং সর্বোচ্চ ও সর্বনিম্ন মান নির্ণয়ের কনসেপ্ট পরিষ্কার করে।
এটি প্রাথমিক লেভেলের সিদ্ধান্তগ্রহণের (Decision Making) জন্য খুবই গুরুত্বপূর্ণ।

## Question paper:
- [All_Question](../Question%20Paper/All_Question.pdf)

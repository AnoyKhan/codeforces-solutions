# 🧩 Problem: I - Palindrome

## ✅ Summary:
তোমাকে একটি সংখ্যা ইনপুট দেওয়া হবে।  
তুমি চেক করবে, সংখ্যাটি একটি **Palindrome** কিনা —  
অর্থাৎ, উল্টো করে লিখলেও একই সংখ্যা হয় কিনা।

---

## 📥 Input:
একটি পূর্ণসংখ্যা `num`

**Example Input 1:**
```
121
```
**Example Input 2:**
```
123
```
---
## 📤 Output:

প্রথমে উল্টো সংখ্যাটি প্রিন্ট করবে, তারপর:
- যদি Palindrome হয় → `YES`
- নাহলে → `NO`

**Example Output 1:**
```
121
YES
```
**Example Output 2:**
```
321
NO
```

---

## 🧠 Logic:
- একটি সংখ্যাকে বার বার ১০ দিয়ে ভাগ করে তার শেষ digit বের করি।
- `reversed = reversed * 10 + digit` — এইভাবে reverse সংখ্যা তৈরি করি।
- সব শেষে original সংখ্যার সঙ্গে reverse সংখ্যার তুলনা করি।

---
## 💡 Code:
```cpp
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cin >> num;
    int original = num;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed) {
        cout << original << endl;
        cout << "YES";
    } else {
        cout << reversed << endl;
        cout << "NO";
    }

    return 0;
}
```
---
## ✅ Tags:
Palindrome, Number Reverse, Loop, C++

---
## 🔚 Final Notes:
Palindrome চেক করার এই পদ্ধতিটি খুবই সহজ ও কার্যকর।
এটি শুধু সংখ্যার ক্ষেত্রেই নয়, স্ট্রিং বা অন্যান্য ক্ষেত্রেও প্রযোজ্য।


# 🧩 Problem: Z - Hard Compare

## ✅ Summary:
তোমাকে চারটি ভাসমান সংখ্যা (floating point) `A, B, C, D` ইনপুট হিসেবে দেওয়া হবে।  
তুমি তুলনা করবে: Is A^B > C^D ?<br>
তবে A^B বা C^D এর মান অনেক বড় হতে পারে, তাই সরাসরি তুলনা করলে overflow হতে পারে।  
তাই log ব্যবহার করে তুলনা করতে হবে।

---

## 📥 Input:
চারটি ভাসমান সংখ্যা: A B C D

**Example Input:**

```
5 2 4 3
```
---
## 📤 Output:
- যদি A^B > C^D → প্রিন্ট করো: `YES`
- নাহলে → প্রিন্ট করো: `NO`

**Example Output:**
```
NO
```
---

## 🧠 Logic:
আমরা জানি: 
<br>log(A^B) = B * log(A)
<br>log(C^D) = D * log(C)

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


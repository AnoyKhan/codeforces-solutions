# 🧩 Problem: B - Memo and Momo

## ✅ Summary:
তোমাকে তিনটি সংখ্যা ইনপুট দেওয়া হবে — `a`, `b`, এবং `k`।  
তুমি চেক করবে কে কে `k` দিয়ে divisible:

- যদি **`a` ও `b` উভয়ই divisible হয়** → প্রিন্ট করো: `Both`
- যদি শুধু `a` divisible হয় → প্রিন্ট করো: `Memo`
- যদি শুধু `b` divisible হয় → প্রিন্ট করো: `Momo`
- কেউ না হলে → প্রিন্ট করো: `No One`

---

## 📥 Input:
তিনটি সংখ্যা:
```aiignore
a b k
```
**Example Input:**
```aiignore
10 15 5
```
---
## 📤 Output:
উপরের শর্ত অনুযায়ী নিচের যেকোনো একটি প্রিন্ট করবে:
```
Both
Memo
Momo
No One
```
**Example Output:**
```aiignore
Both
```

---

## 🧠 Logic:
- `a % k == 0` → মানে `a` divisible by `k`
- `b % k == 0` → মানে `b` divisible by `k`
- শর্ত অনুযায়ী চারটি আলাদা অবস্থার জন্য চারটি `if-else` condition ব্যবহার করলেই যথেষ্ট।

---
## 💡 Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    if (a % k == 0 && b % k == 0) {
        cout << "Both";
    } else if (a % k == 0 && b % k != 0) {
        cout << "Memo";
    } else if (a % k != 0 && b % k == 0) {
        cout << "Momo";
    } else {
        cout << "No One";
    }

    return 0;
}
```
---
## ✅ Tags:
Divisibility, Conditionals, C++, Logic

---
## 🔚 Final Notes:
এই প্রবলেমটি `if-else` শর্তব্যবহার এবং `%`মডুলাস অপারেটরের প্র্যাকটিসের জন্য খুবই কার্যকর।
এছাড়াও এটিতে Multiple Conditions কীভাবে যাচাই করতে হয় সেটাও বোঝা
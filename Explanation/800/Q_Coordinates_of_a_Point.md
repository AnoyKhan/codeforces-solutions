# 🧩 Problem: Q - Coordinates of a Point

## ✅ Summary:
তোমাকে একটি 2D point `(x, y)` দেওয়া হবে।  
তুমি চেক করবে —  
এই point টি **কোন Quadrant বা Axis বা Origin-এ** অবস্থান করছে।

---

## 📥 Input:
দুইটি ভাসমান সংখ্যা (floating point):  
`x` এবং `y` → যেখানে `-1000 ≤ x, y ≤ 1000`

**Example Input:**

```
0.0 0.0
```
---
## 📤 Output:
নিচের যেকোনো একটি প্রিন্ট করবে:

- `Origem` → যদি x = 0 এবং y = 0 হয়
- `Eixo X` → যদি y = 0 এবং x ≠ 0 হয়
- `Eixo Y` → যদি x = 0 এবং y ≠ 0 হয়
- `Q1` → যদি x > 0 এবং y > 0 হয়
- `Q2` → যদি x < 0 এবং y > 0 হয়
- `Q3` → যদি x < 0 এবং y < 0 হয়
- `Q4` → যদি x > 0 এবং y < 0 হয়

**Example Output:**
```
Origem
```
---

## 🧠 Logic:
Coordinate plane-এ:
- X ও Y দুটোই 0 → Origin
- যেকোনো একটি 0 → কোনো Axis
- না হলে চারটা Quadrant-এর যেকোনো একটায় পড়ে।

আমরা একে একে সব condition চেক করবো:
1. `x == 0 && y == 0` → Origin
2. `x == 0` → Y-Axis
3. `y == 0` → X-Axis
4. তারপর সব Quadrant এর condition

---

## 💡 Code:
```cpp
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "Origem" << endl;
    } else if (x == 0) {
        cout << "Eixo Y" << endl;
    } else if (y == 0) {
        cout << "Eixo X" << endl;
    } else if (x > 0 && y > 0) {
        cout << "Q1" << endl;
    } else if (x < 0 && y > 0) {
        cout << "Q2" << endl;
    } else if (x < 0 && y < 0) {
        cout << "Q3" << endl;
    } else if (x > 0 && y < 0) {
        cout << "Q4" << endl;
    }

    return 0;
}

```

---

## ✅ Tags:
Coordinate Geometry, Conditions, Quadrants, Axis Check, C++ Basics

---

## 🔚 Final Notes:
এই প্রবলেমটি coordinate geometry এর বেসিক চর্চার জন্য অসাধারণ।
যে কোনো Graph-Plotting প্রজেক্ট বা Game Development-এ এই ধরনের logic দরকার হয়।
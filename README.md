# 🚀 LeetCode 2349 — Design a Number Container System

Today I solved an interesting **Design + Data Structure** problem on LeetCode.

## 📌 Problem Statement

Design a system that can:

* Insert or replace a number at a given index
* Return the smallest index for a given number

---

# 🧠 Concepts Used

* Vector
* Pair
* Linear Search
* Simulation
* Design Problem

---

# ⚡ Approach

I used:

```cpp
vector<pair<int,int>> v;
```

to store:

```cpp
(index, number)
```

---

## 🔄 change(index, number)

### Steps:

* Traverse the vector
* If index already exists:

  * Update its number
* Otherwise:

  * Insert a new pair

---

## 🔍 find(number)

### Steps:

* Traverse the vector
* Find all matching numbers
* Return the smallest index

---

# ❌ Problem Faced

Initially, my solution worked for many test cases but later got:

```text
Time Limit Exceeded (TLE)
```

because:

* `find()` was taking **O(N)** time
* Every query scanned the whole vector

---

# 📚 Learning Outcome

This problem taught me:

✅ How Design problems work
✅ Importance of optimized data structures
✅ Why brute force approaches fail
✅ Real use of:

* Hash Maps
* Ordered Sets

---

# 🚀 Future Optimization

A better solution can use:

```cpp
unordered_map<int,int>
unordered_map<int,set<int>>
```

to make operations much faster.

---

💻 Language: C++
🔥 Platform: LeetCode

#leetcode #cpp #dsa #algorithms #coding #programming #developers

#include<bits/stdc++.h>

using namespace std;

void solve() {
	int x = 0, y = 1;
	int *p1, *p2;
	p1 = &x, p2 = &y;
	cout << p1 << " " << p2 << endl;
	int* p3, p4;   // in the multiple variable does not matter where you placed the star it will be consider as first element as pointer
	// int* p3, p4; === int *p3,p4; === int * p3,p4;  `only p3 is pointer` and `p4 is normal integer`
	p3 = &x, p4 = 2;
	cout << p3 << " " << p4 << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}

/*
In C++, there are subtle differences in the declarations of pointers and variables. Let's break down the various forms and explain their differences:

### Pointer Declaration Forms

1. **int *x;**
    - This declares `x` as a pointer to an integer.
    - The `*` binds to the variable name `x`, indicating that `x` is a pointer.

2. **int* x;**
    - This also declares `x` as a pointer to an integer.
    - The positioning of the `*` next to the type `int` is more of a stylistic choice and does not affect the meaning.

3. **int * x;**
    - This again declares `x` as a pointer to an integer.
    - The spacing between `int`, `*`, and `x` is ignored by the compiler.

All three declarations above are equivalent and declare a single pointer to an integer.

### Multiple Declarations

Now let's look at multiple declarations in a single statement:

4. **int *x, *y;**
    - This declares both `x` and `y` as pointers to integers.
    - The `*` applies to each variable, so both `x` and `y` are pointers.

5. **int* x, y;**
    - This declares `x` as a pointer to an integer and `y` as an integer.
    - The `*` only applies to `x`, so `y` is a regular integer, not a pointer.

6. **int * x, y;**
    - This is the same as the previous example.
    - `x` is a pointer to an integer, and `y` is a regular integer.

In summary, the key points are:

- **Position of `*`:** The position of the `*` (adjacent to the type or variable) does not change the meaning when declaring a single variable. It’s purely a stylistic choice.
- **Multiple Declarations:** When declaring multiple variables in a single statement, each variable needs its own `*` if it is to be a pointer. Otherwise, only the first variable will be a pointer, and subsequent variables will be of the base type.

### Examples and Clarifications

- **int *x, *y;**
  - `x` is a pointer to an `int`.
  - `y` is a pointer to an `int`.

- **int* x, y;**
  - `x` is a pointer to an `int`.
  - `y` is an `int`.

- **int * x, y;**
  - `x` is a pointer to an `int`.
  - `y` is an `int`.

### Conclusion

When declaring pointers, the placement of the `*` is flexible and does not affect the meaning for a single variable. However, when declaring multiple variables, the `*` must be placed in front of each variable that is intended to be a pointer.



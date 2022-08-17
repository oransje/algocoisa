#include "sorts.h"

void insertion_sort(int a[], unsigned int len) {
	for (int j = 1; j < len; j++) {
		int key = a[j];
		int i = j - 1;
		while( (i >= 0) && a[i] > key) {
			a[i+1] = a[i];
			i = i - 1;
		}
		a[i + 1] = key;
	}
}

void insertion_sort_decreasing(int a[], unsigned int len) {
	for (int j = 1; j < len; j++) {
		int key = a[j];
		int i = j - 1;
		while( (i >= 0) && key > a[i]) {
			a[i+1] = a[i];
			i = i - 1;
		}
		a[i + 1] = key;
	}
}
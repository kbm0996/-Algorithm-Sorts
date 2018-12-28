# 정렬
## 📢 개요
 C언어에서 각각의 자료형은 표현할 수 있는 값의 범위에는 한계가 있다.
 
| Algorithm | In-Place | Stable | Comparison | Complexity |
|:--------:|:--------:|:--------:|:--------:|:--------:|
| Bubble	| ○	| ○	| ○	| O(n2) | 
| Selection	| ○	| ○	| ○	| O(n2) | 
| Insertion	| ○	| ○	| ○	| O(n2) | 
| Shell| 	○	| ○	| ○	| O(n2) | 
| Merge	| ×	| ○	| ○	| O(nlogn) | 
| Heap	| ○	| ×	| ○	| O(nlogn) | 
| Quick	| ○	| ×	| ○	| O(nlogn) | 
| Counting	| ×	| ○	| ×	| O(n+k) | 
| Radix	| ×	| ○	| ×	| d×O(n) | 
| Bucket	| ×	| ○	| -	| O(n) | 

**table 1. Comparison of Sorting Algorithms* (출처:https://ratsgo.github.io)

- In-Place : 입력리스트 내부에서 정렬이 이뤄지는 것. 반대는 정렬 도중에 별도 저장공간이 필요한 것

  ex) 합병정렬의 경우 입력리스트를 분할해 이를 정렬하고 다시 합치는 과정에서 분할된 리스트를 별도로 저장한다. 
  반면에, 카운팅정렬과 래딕스정렬은 입력값의 빈도를 세어서 저장해 두는 변수와 결과리스트를 저장해 둘 변수가 필요하다. 
  버킷정렬은 버킷이라는 변수를 만들 공간이 필요하다.
  (출처:https://ratsgo.github.io)

- Stable : 여러 원소의 키 값이 같을 경우 처음 데이터에서 앞서있는 원소가 정렬을 한 다음에도 앞서는 것

- Comparison : 값을 비교하며 정렬하는 것. 계산복잡성의 하한은 O(n log n)

 
   ![Insertion Sort](https://upload.wikimedia.org/wikipedia/commons/5/54/Sorting_bubblesort_anim.gif)

  **figure 1. Bubble Sort*

   ![Insertion Sort](http://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif)

  **figure 2. Insertion Sort*

   ![Quick Sort](http://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif)

  **figure 3. Quick Sort*


   [![Visualization and Comparison of Sorting Algorithms](https://i.ytimg.com/an_webp/ZZuD6iUe3Pc/mqdefault_6s.webp?du=3000&sqp=COmsmeEF&rs=AOn4CLDVY2uN_4TqXGm8unzq7jhX6j9tdg)](https://youtu.be/ZZuD6iUe3Pc?t=0s)

  **video 1. Visualization and Comparison of Sorting Algorithms (image click!)*

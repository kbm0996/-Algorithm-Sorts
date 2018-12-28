# 정렬
## 📢 개요

 정렬 알고리즘이란 원소들을 번호순이나 사전 순서와 같이 일정한 순서대로 열거하는 알고리즘이다. 효율적인 정렬은 탐색이나 병합 알고리즘처럼 (정렬된 리스트에서 바르게 동작하는) 다른 알고리즘을 최적화하는 데 중요하다. 또 정렬 알고리즘은 데이터의 정규화나 의미있는 결과물을 생성하는 데 흔히 유용하게 쓰인다. 이 알고리즘의 결과는 반드시 다음 두 조건을 만족해야 한다.

 1. 출력은 비 내림차순(각각의 원소가 전순서에 의해 이전의 원소보다 작지 않은 순서)이다.
 2. 출력은 입력을 재배열하여 만든 순열이다.
 
 (출처:https://ko.wikipedia.org/wiki/정렬_알고리즘)
 
 
 ## 🅿 해당 프로그램에서 다룬 
  
   ![Insertion Sort](https://upload.wikimedia.org/wikipedia/commons/5/54/Sorting_bubblesort_anim.gif)

  **figure 1. Bubble Sort*

   ![Insertion Sort](http://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif)

  **figure 2. Insertion Sort*

   ![Quick Sort](http://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif)

  **figure 3. Quick Sort*

 
 
 ## 📌 정렬 알고리즘 비교
 
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



   [![Visualization and Comparison of Sorting Algorithms](https://i.ytimg.com/an_webp/ZZuD6iUe3Pc/mqdefault_6s.webp?du=3000&sqp=COmsmeEF&rs=AOn4CLDVY2uN_4TqXGm8unzq7jhX6j9tdg)](https://youtu.be/ZZuD6iUe3Pc?t=0s)

  **video 1. Visualization and Comparison of Sorting Algorithms (image click!)*

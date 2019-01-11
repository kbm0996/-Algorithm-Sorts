# 정렬
## 📢 개요

 정렬 알고리즘이란 원소들을 번호순이나 사전 순서와 같이 일정한 순서대로 열거하는 알고리즘이다. 효율적인 정렬은 탐색이나 병합 알고리즘처럼 (정렬된 리스트에서 바르게 동작하는) 다른 알고리즘을 최적화하는 데 중요하다. 또 정렬 알고리즘은 데이터의 정규화나 의미있는 결과물을 생성하는 데 흔히 유용하게 쓰인다. 이 알고리즘의 결과는 반드시 다음 두 조건을 만족해야 한다.

 1. 출력은 비 내림차순(각각의 원소가 전순서에 의해 이전의 원소보다 작지 않은 순서)이다.
 2. 출력은 입력을 재배열하여 만든 순열이다.
 
 (출처 : https://ko.wikipedia.org)
 
 현존하는 컴퓨터 아키텍처 상에서 비교 연산자를 이용하여 구현된 정렬 알고리즘 중 가장 고성능인 알고리즘이 퀵정렬이다. 단 데이터에 접근하는 시간이 오래 걸리는 외부 기억장소에서 직접 정렬을 수행할 경우에는 병합 정렬이 더 빠른 것으로 알려져 있다
 
  ![Program](https://github.com/kbm0996/Sort/blob/master/picture/sort.jpg?raw=true)

 **figure 1. Program*
 
 
 ## 🅿 주요 소스 코드
 ### 1. 버블 정렬 
  두 인접한 원소를 검사하여 정렬하는 방법이다. 시간 복잡도가 O(n^{2})로 상당히 느리지만, 코드가 단순하기 때문에 자주 사용된다. 원소의 이동이 거품이 수면으로 올라오는 듯한 모습을 보이기 때문에 지어진 이름이다.
  
  - 예제
  
        [55][07] 78  12  42  초기값[sorting]
         07 (55)(78) 12  42  첫 번째 패스(pass)
         07  55 [78][12] 42
         07  55  12 [78][42]
        (07)(55) 12  42  78  두 번째 패스(pass)
         07 [55][12] 42  78
         07  12 [55][42] 78
        (07)(12) 42  55  78  세 번째 패스(pass)
         07 (12)(42) 55  78  네 번째 패스(pass)
         07  12 (42)(55) 78  다섯 번째 패스(pass)
         07  12  42  55  78  정렬 끝
  
  - 의사 코드
  
        procedure bubbleSort( A : list of sortable items ) defined as:
          for each i in 1 to length(A) do:
               for each j in length(A) downto i + 1 do:
                 if A[ j ] < A[ j - 1 ] then
                   swap( A[ j ],  A[ j - 1 ] )
                 end if
               end for
          end for
        end procedure
        
    ![Insertion Sort](https://upload.wikimedia.org/wikipedia/commons/5/54/Sorting_bubblesort_anim.gif)

    **figure 2. Bubble Sort*


 ### 2. 삽입 정렬 
 삽입 정렬(揷入整列, insertion sort)은 자료 배열의 모든 요소를 앞에서부터 차례대로 이미 정렬된 배열 부분과 비교하여, 자신의 위치를 찾아 삽입함으로써 정렬을 완성하는 알고리즘이다.
 
  - 예제
  
         31  25  12  22  11  처음 상태
         31 [25] 12  22  11  두 번째 원소를 부분 리스트에서 적절한 위치에 삽입한다.
        <25> 31 [12] 22  11  세 번째 원소를 부분 리스트에서 적절한 위치에 삽입한다.
        <12> 25  31 [22] 11  네 번째 원소를 부분 리스트에서 적절한 위치에 삽입한다.
         12 <22> 25  31 [11] 마지막 원소를 부분 리스트에서 적절한 위치에 삽입한다.
        <11> 12  22  25  31  종료.
 
   ![Insertion Sort](http://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif)

   **figure 3. Insertion Sort*


 ### 3. 퀵 정렬 
퀵 정렬은 분할 정복(divide and conquer) 방법을 통해 리스트를 정렬한다.

 1. 리스트 가운데서 하나의 원소를 고른다. 이렇게 고른 원소를 피벗이라고 한다.
 2. 피벗 앞에는 피벗보다 값이 작은 모든 원소들이 오고, 피벗 뒤에는 피벗보다 값이 큰 모든 원소들이 오도록 피벗을 기준으로 리스트를 둘로 나눈다. 이렇게 리스트를 둘로 나누는 것을 분할이라고 한다. 분할을 마친 뒤에 피벗은 더 이상 움직이지 않는다.
 3. 분할된 두 개의 작은 리스트에 대해 재귀(Recursion)적으로 이 과정을 반복한다. 재귀는 리스트의 크기가 0이나 1이 될 때까지 반복된다.


재귀 호출이 한번 진행될 때마다 최소한 하나의 원소는 최종적으로 위치가 정해지므로, 이 알고리즘은 반드시 끝난다는 것을 보장할 수 있다.

   ![Quick Sort](http://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif)

   **figure 4. Quick Sort*

 
 (출처 : https://ko.wikipedia.org)
 
 
 ## 📌 정렬 알고리즘 비교
 
 [![Visualization and Comparison of Sorting Algorithms](https://github.com/kbm0996/Sort/blob/master/picture/videothumbnail.JPG?raw=true)](https://youtu.be/ZZuD6iUe3Pc?t=0s)

  **video 1. Visualization and Comparison of Sorting Algorithms (image click!)*

 
 
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

 **table 1. Comparison of Sorting Algorithms* (출처 : https://ratsgo.github.io)

- In-Place : 입력리스트 내부에서 정렬이 이뤄지는 것. 반대는 정렬 도중에 별도 저장공간이 필요한 것

  ex) 합병정렬의 경우 입력리스트를 분할해 이를 정렬하고 다시 합치는 과정에서 분할된 리스트를 별도로 저장한다. 
  반면에, 카운팅정렬과 래딕스정렬은 입력값의 빈도를 세어서 저장해 두는 변수와 결과리스트를 저장해 둘 변수가 필요하다. 
  버킷정렬은 버킷이라는 변수를 만들 공간이 필요하다. (출처 : https://ratsgo.github.io)


- Stable : 여러 원소의 키 값이 같을 경우 처음 데이터에서 앞서있는 원소가 정렬을 한 다음에도 앞서는 것

- Comparison : 값을 비교하며 정렬하는 것. 계산복잡성의 하한은 O(n log n)


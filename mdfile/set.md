# C++ STL set
연관 컨테이너의 종류인 set를 배워볼겁니다. 연관컨테이너는 키(key) - 값(value)라는 구조로 되어있다. 특정 키를 넣으면 대응되는 값을 돌려준다. <b> 템블릿 라이브러리이기때문에 타입의 객체가 될 수 있다<b>

## set은 언제 사용하는가?
-> set은 대부분 키의 존재의 유무를 사용할때 많이 사용합니다. map은 셋보다 사용하는 메모리가 크기 때문에 호율성을 보면 set이 더 존재의 유무를 찾기에는 좋다. set 역시 inset,find등 다양한 종류의 함수가 있다.

### find함수
set에는 find함수라는 것이 있다. 원하는 원소가 존재하는지를 찾아주는 함수이다.
<b> 존재할때 리턴하는것이 set<>::iterator이다. 없으면 s.end()를 리턴한다 <b>



# C++ STL map
map은 (key)키값을 보관하고 그와 대응하는 (value)값까지 보관하는것입니다. 맵의경우는 템플릿 인자로 2개를 가진다. 한개는 키의 타입과 두번째는 값의 타입을 가진다.
#include <map>을 포함해주어야 합니다

## map에서 insert
-> map을 사용할때 insert는 다양하게 사용할수있다. pair과 make_pair를 사용할수있다. 
m.insert(pair<(자료형)string,(자료형)int>(key, value));  이렇게 사용하고, make_pair은 m.insert(make_pair(key, value)); 형식으로 사용하면 된다.



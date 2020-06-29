// 문제 : 문장에서 특정 문자의 위치를 반환하는 함수를 만들어주세요.(get_index_of_c)

#include <stdio.h>

int get_index_of_c(char* a, char b) { 
  //쌍따옴표 "" 는 array하고 동일하다. 상수 메모리에 저장될뿐.
  //그러므로 arry는 주소를 보내니 주소를 받으면 됨.
int c = -1;

  for (int i = 0; a[i] != '\0'; i++ ){


        if (a[i] == b) {
    
            c = i;

            break;
            }
}

  return c;

}

int main(void) {
  int index;
  
  index = get_index_of_c("abc", 'b');
  printf("index : %d\n", index);
  // 출력 => index : 1

  index = get_index_of_c("test", 's');
  printf("index : %d\n", index);
  // 출력 => index : 2

  index = get_index_of_c("test", 'k');
  printf("index : %d\n", index);
  // 출력 => index : -1


  return 0;
}

//=================================================================================//


// 문제 : "abc" 라는 코드가 실행되면 발생되는 일을 자세히 설명해주세요.

// int main(void) {
//   "abc"  = Semi Col
//   "abc";

//   return 0;
// }
// 문제 : 문장에서 특정 문자의 위치를 반환하는 함수를 만들어주세요.(get_index_of_c)

#include <stdio.h>

int get_index_of_c(char* a, char b) { 
  //쌍따옴표 "" 는 array하고 동일하다. 상수 메모리에 저장될뿐.
  //그러므로 arry는 주소를 보내니 주소를 받으면 됨.
int c = -1;


// a[i] = *(a + i); << 이것도 됨.


// for loop으로 돌리기
//   for (int i = 0; a[i] != '\0'; i++ ){


//         if (a[i] == b) { 
    
//             c = i;

//             break;
//             }
// }


//while loop으로 돌리기
int i = 0;
  while (a[i] != '\0'){


    if(a[i] == b) {

        c = i;
        break;
    }

    i++;

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


// 문제 #1: "abc" 라는 코드가 실행되면 발생되는 일을 자세히 설명해주세요.

// int main(void) {
//   "abc"  = Semi Colon이 없으므로 오류 발생.
//   "abc"; = 메모리 상수영역에 'a', 'b', 'c'를 포함하고있는 임의의 이름을 가진 array를 만들어서 보관.

//   return 0;
// }

//=================================================================================//
// 문제 #2: 변수 str1, str2, str4의 값이 같은 이유를 설명해주세요.
// 
// #include <stdio.h>

// int main(void) {

//   char* str1 = "abc";
//   printf("str1 : %ld\n", (long)str1);

//   char* str2 = "abc";
//   printf("str2 : %ld\n", (long)str2);

// 얘는 주소값이 달라짐 (위 2 array랑 포함하고 있는 값이 다르기에 얘는 5바이트 공간을 가짐)
//   char* str3 = "abcd";
//   printf("str3 : %ld\n", (long)str3);

//   char* str4 = "abc";
//   printf("str4 : %ld\n", (long)str4);

//   char str5[10] = "abc";
//   printf("str5 : %ld\n", (long)str5);

//정답: 그이유는 "abc"는 메모리 상수영역에 존재하는 임의의 array이기 때문이다.
//아무리 변수의 이름을 달리한다고 한들, 상수영역에 존재하는 array에서 데이터를 가져오기때문에
//"abc" 가 가지고 있는 주소값은 언제나 동일하다.

//정답2: "abc" 상수지역에 4바이트 할당 받아 a, b, c, 0 저장. "abc"는 'a'를 가리키는 주소값이다.

  
//   return 0;
// }

//=================================================================================//
// 문제 #3 : name1[0]을 수정하면 안되는 이유를 설명해주세요.

// #include <stdio.h>
// #include <string.h>

// int main(void) {
//   char* name1 = "abc";


//   printf("name1[1] : %c\n", name1[1]);

//   name1[0] = 's'; // 이 코드가 안되는 이유를 설명해주세요.

//   char name2[10] = "bbc";

//   printf("name2 : %s\n", name2);
//   name2[0] = 'k';
//   printf("name2 : %s\n", name2);

//   return 0;
// }
//정답:name1 array는 상수 array "abc"의 주소값을 가지고있다.
//array "abc"는 상수영역에 있으므로 다른곳을 통해서 바꿀순 없다.
//집적 "abc" 를 바꾸지 않는이상 "abc"는 영원히 남아 있을 것이다.
//고로 name1[0]으로 수정할 순 없다.
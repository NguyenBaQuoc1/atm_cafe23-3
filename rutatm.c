#include <stdio.h>

int main() {
  int pin = 123 , myPin , ch=0  , sotien , sodu ;
  int sodubandau = 1000000;
  char request;
  do {
      printf("Nhap Ma Pin : \n");
      fflush(stdin);
      scanf("%d" , &myPin);
      ch++;

      if(myPin==123){
        printf("Ban da login thanh cong\n");
      }else printf("Ban da nhap sai vui long nhap lai\n");
      
  }while(myPin != pin && ch < 3);

  if(myPin==pin){
    do{
      int Selection;
      printf("Nhap 1 de rut tien\n");
      printf("Nhap 2 de ket thuc\n");
      scanf("%d" , &Selection);
      switch(Selection){
      case 1: 
              
              printf("So du cua ban la : %d\n" , sodubandau);
              printf("Nhap so tien ban muon rut\n");
              scanf("%d" , &sotien);
              sodu = sodubandau - sotien ;
              printf("So tien rut la : %d\n" , sotien);
              printf("So tien con lai la : %d\n" , sodu);
              printf("Cam on ban da dung ATM\n");
              break;
      case 2:
              printf("Hen gap lai ban lan sau\n");
              break;
      }   
    printf("Ban muon tiep tuc rut tien nhan K \n");
    printf("Ban muon ket thuc nhan L\n");
    fflush(stdin);
    scanf("%c" , &request);
  }while(request == 'K' || request == 'k');
  printf("Xin chao va hen gap lai\n");
 }
}
  


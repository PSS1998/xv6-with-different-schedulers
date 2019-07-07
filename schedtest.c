#include "types.h"
#include "user.h"


int main(int argc, char *argv[]) {
  int pid;
  pid = fork();
  if(pid == 0){
    int i;
    ps();
    for(i=0; i<10; i++){
      printf(1, "child process\n");
    }
    ps();
  }
  else{
    int i;
    chqueue(getpid(), 1);
    chqueue(pid, 1);
    chtickets(getpid(), 25);
    for(i=0; i<10; i++){
      printf(1, "parent process\n");
    }
  }

  wait();
  exit();
}




// int main(int argc, char *argv[]) {
//   int pid;
//   pid = fork();
//   if(pid == 0){
//     int i;
//     ps();
//     for(i=0; i<10; i++){
//       printf(1, "child process\n");
//     }
//     ps();
//   }
//   else{
//     int i;
//     chqueue(getpid(), 2);
//     chqueue(pid, 2);
//     for(i=0; i<10; i++){
//       printf(1, "parent process\n");
//     }
//   }
//
//   wait();
//   exit();
// }




// int main(int argc, char *argv[]) {
//   int pid;
//   pid = fork();
//   if(pid == 0){
//     int i;
//     ps();
//     for(i=0; i<10; i++){
//       printf(1, "child process\n");
//     }
//     ps();
//   }
//   else{
//     int i;
//     chpr(getpid(), 70);
//     for(i=0; i<10; i++){
//       printf(1, "parent process\n");
//     }
//   }
//
//   wait();
//   exit();
// }




// int main(int argc, char *argv[]) {
//   int pid;
//   pid = fork();
//   if(pid == 0){
//     int i;
//     ps();
//     for(i=0; i<10; i++){
//       printf(1, "child process\n");
//     }
//     ps();
//   }
//   else{
//     int i;
//     chqueue(pid, 2);
//     for(i=0; i<10; i++){
//       printf(1, "parent process\n");
//     }
//   }
//
//   wait();
//   exit();
// }

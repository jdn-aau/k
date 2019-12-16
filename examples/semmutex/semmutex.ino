#include <snot.h>

struct k_t *pt1,*pt2,
*sem1;
char s1[200];
char s2[200];

void doBlink(void) {
  static char flag = 0;
  flag = !flag;
  digitalWrite(13,flag);
}

void t1(void)
{
  while (1) {
    // mutex by semaphore
    k_wait(sem1,0);
    k_sleep(200);
    Serial.println("a");
    k_signal(sem1);
    doBlink();
  }
}

void t2(void)
{
  int i=0,j;
  char r;
  while (1) {
    k_sleep(10); 
    // mutex by semaphore
    k_wait(sem1,0);
    Serial.println("b");
    k_signal(sem1);
  }
}

void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  k_init(4,4,4);
  pt1=k_crt_task(t1,11,s1,200); 
  pt2=k_crt_task(t2,11,s2,200);
  sem1 = k_crt_sem(1,100);
  k_start(1);
}

void loop()
{
}




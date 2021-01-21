/*
extern void func1(void);
extern void func2(void);
extern void func3(void);
extern void func4(void);
extern void func5(void);
void main(int n)
{
  if n==1 execute func1;
  if n==2 execute func2;
  if n==3 execute func3;
  if n==4 execute func4;
  if n==5 execute func5;
}
*/

extern void func1(void);
extern void func2(void);
extern void func3(void);
extern void func4(void);
extern void func5(void);


int main(){

void (*fp[5]) ();
fp[0] = func1;
fp[1] = func2;
fp[2] = func3;
fp[3] = func4;
fp[4] = func5;
fp[n-1]();
}

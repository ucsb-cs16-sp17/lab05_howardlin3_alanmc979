#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1, b2;
  initBox(&b1,3.12341,7.12341,5.12341,-6.12341);
  assertEquals("[ul=(3,7), w=5,h=-6]", boxToString(b1,1), "boxToString(b1,1)");
  assertEquals("[ul=(3.1,7.1), w=5.1,h=-6.1]", boxToString(b1,2), "boxToString(b1,2)"); 
  assertEquals("[ul=(3.12,7.12), w=5.12,h=-6.12]", boxToString(b1,3), "boxToString(b1,3)");
  assertEquals("[ul=(3.123,7.123), w=5.123,h=-6.123]", boxToString(b1,4), "boxToString(b1,4)");
  assertEquals("[ul=(3.1234,7.1234), w=5.1234,h=-6.1234]", boxToString(b1,5), "boxToString(b1,5)");
  assertEquals("[ul=(3.12341,7.12341), w=5.12341,h=-6.12341]", boxToString(b1,6), "boxToString(b1,6)");
  return 0;
}

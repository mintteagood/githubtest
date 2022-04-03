#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  for(int i=0;i<32;i++){
  printf("%s %08lx\n", regs[i], cpu.gpr[i]);
  }
}

word_t shibie(const char *s, bool *success){
   for(int i=0;i<32;i++){
	if(*s==*regs[i])
	*success = true;
	printf("regsi=%d and i=%d and s=%s",*regs[i],i,s);
	return i;
	}

return 0;
}



word_t isa_reg_str2val(const char *s, bool *success) {
   /*char *pin =strtok(s, "$");*/
 	int j =shibie(s,success);
  	return printf("*s=%d and cpu=%ldjieshu",*s,cpu.gpr[j]);
  	
}

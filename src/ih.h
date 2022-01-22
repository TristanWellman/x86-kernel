
struct cpu_state {

	unsigned int eax;
	unsigned int ebx;
	unsigned int ecx;

	unsigned int esp;

} __attrib__;

struct stack_state {

	unsigned int ec;

	unsigned int eip;
	unsigned int cs;
	unsigned int eflags;

}__attrib0__;

void interrupt_handler(struct cpu_state cpu, struct stack_state stack, unsigned int interrupt);

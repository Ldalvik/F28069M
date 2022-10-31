#ifndef F28069API_INTERRUPTS_H_
#define F28069API_INTERRUPTS_H_

void attachInterrupt(void (*i), int ticks_per_ms);
void clearInterrupt(int id);
void stopInterrupt(int id);

#endif /* F28069API_INTERRUPTS_H_ */

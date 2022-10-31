#ifndef F28069API_INITIALIZERS_H_
#define F28069API_INITIALIZERS_H_


void InitInterrupts();

void DeviceSetup(void (*setup)(void), void (*loop)(void));



#endif /* F28069API_INITIALIZERS_H_ */

#ifndef __ADC_H__
#define __ADC_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

extern ADC_HandleTypeDef hadc1;

void MX_ADC1_Init(void);

void ADC1_Select_CH11(void);

void ADC1_Select_CH12(void);

#ifdef __cplusplus
}
#endif

#endif /* __ADC_H__ */


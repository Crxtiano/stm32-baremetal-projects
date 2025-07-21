/*
 * stm32f407xx.h
 *
 *  Created on: Jul 22, 2025
 *      Author: Benoit Christian Mbole Zogo
 */

#ifndef STM32F407XX_H_
#define STM32F407XX_H_

#include <stdint.h>

/* -------------------- Base Addresses -------------------- */
#define PERIPH_BASE         (0x40000000UL)
#define AHB1_OFFSET         (0x00020000UL)
#define AHB1_BASE           (PERIPH_BASE + AHB1_OFFSET)

#define GPIOA_BASE          (AHB1_BASE + 0x0000UL)
#define GPIOD_BASE          (AHB1_BASE + 0x0C00UL)
#define RCC_BASE            (AHB1_BASE + 0x3800UL)

/* -------------------- Register Definitions -------------------- */
// RCC
#define RCC_AHB1ENR         (*(volatile uint32_t *)(RCC_BASE + 0x30))

// GPIOA
#define GPIOA_MODER         (*(volatile uint32_t *)(GPIOA_BASE + 0x00))
#define GPIOA_IDR           (*(volatile uint32_t *)(GPIOA_BASE + 0x10))

// GPIOD
#define GPIOD_MODER         (*(volatile uint32_t *)(GPIOD_BASE + 0x00))
#define GPIOD_ODR           (*(volatile uint32_t *)(GPIOD_BASE + 0x14))

/* -------------------- Bit Definitions -------------------- */
#define RCC_AHB1ENR_GPIOA_EN    (1 << 0)
#define RCC_AHB1ENR_GPIOD_EN    (1 << 3)

/* -------------------- Pin Definitions -------------------- */
#define BUTTON_PIN          (0)   // PA0
#define LED_START_PIN       (12)  // PD12-PD15
#define LED_COUNT			(4)

#endif /* STM32F407XX_H_ */

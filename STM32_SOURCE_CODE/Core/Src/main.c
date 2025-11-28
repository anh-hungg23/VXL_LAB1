/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define RED   10
#define YEL   11
#define GREEN 12

#define RED_TIME   5
#define YEL_TIME   2
#define GREEN_TIME 3


/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

	void display7SEG (int num) {
		switch (num) {
		case 0:
			HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_RESET);
			break;
		default:
			break;
		}
	}
	void display7SEG_sub (int num) {
	    switch (num) {
	    case 0:
	        HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B5_GPIO_Port, B5_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B6_GPIO_Port, B6_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B7_GPIO_Port, B7_Pin, GPIO_PIN_SET);
	        break;

	    case 1:
	        HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B5_GPIO_Port, B5_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B6_GPIO_Port, B6_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B7_GPIO_Port, B7_Pin, GPIO_PIN_SET);
	        break;

	    case 2:
	        HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B5_GPIO_Port, B5_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B6_GPIO_Port, B6_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B7_GPIO_Port, B7_Pin, GPIO_PIN_RESET);
	        break;

	    case 3:
	        HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B5_GPIO_Port, B5_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B6_GPIO_Port, B6_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B7_GPIO_Port, B7_Pin, GPIO_PIN_RESET);
	        break;

	    case 4:
	        HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B5_GPIO_Port, B5_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B6_GPIO_Port, B6_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B7_GPIO_Port, B7_Pin, GPIO_PIN_RESET);
	        break;

	    case 5:
	        HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B5_GPIO_Port, B5_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B6_GPIO_Port, B6_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B7_GPIO_Port, B7_Pin, GPIO_PIN_RESET);
	        break;

	    case 6:
	        HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B5_GPIO_Port, B5_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B6_GPIO_Port, B6_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B7_GPIO_Port, B7_Pin, GPIO_PIN_RESET);
	        break;

	    case 7:
	        HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B5_GPIO_Port, B5_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B6_GPIO_Port, B6_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B7_GPIO_Port, B7_Pin, GPIO_PIN_SET);
	        break;

	    case 8:
	        HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B5_GPIO_Port, B5_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B6_GPIO_Port, B6_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B7_GPIO_Port, B7_Pin, GPIO_PIN_RESET);
	        break;

	    case 9:
	        HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B5_GPIO_Port, B5_Pin, GPIO_PIN_SET);
	        HAL_GPIO_WritePin(B6_GPIO_Port, B6_Pin, GPIO_PIN_RESET);
	        HAL_GPIO_WritePin(B7_GPIO_Port, B7_Pin, GPIO_PIN_RESET);
	        break;

	    default:
	        break;
	    }
	}


//	void showTime(int led_idx, int time) {
//		display7SEG(time);
//		switch(led_idx){
//		case 0:
//			HAL_GPIO_WritePin(EN1_GPIO_Port,EN1_Pin,RESET);
//			HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin,SET);
//		case 1:
//			HAL_GPIO_WritePin(EN1_GPIO_Port,EN1_Pin,SET);
//			HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin,RESET);
//		}
//	}

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int state_main = RED;
  int state_sub  = GREEN;
  int cnt_main = RED_TIME;
  int cnt_sub  = GREEN_TIME;
  int led_flag = 0.75;
  while (1)
  {
	  // ======== Logic đèn giao thông mỗi 1s ========
		// MAIN
		switch(state_main){
		case RED:
			HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, RESET);
			HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, SET);
			HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, SET);
			if(--cnt_main < 1){ cnt_main = GREEN_TIME; state_main = GREEN; }
			break;

		case YEL:
			HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, SET);
			HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, RESET);
			HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, SET);
			if(--cnt_main < 1){ cnt_main = RED_TIME; state_main = RED; }
			break;

		case GREEN:
			HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, SET);
			HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, SET);
			HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, RESET);
			if(--cnt_main < 1){ cnt_main = YEL_TIME; state_main = YEL; }
			break;
		}

		// SUB
		switch(state_sub){
		case RED:
			HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, RESET);
			HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, SET);
			HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, SET);
			if(--cnt_sub < 1){ cnt_sub = GREEN_TIME; state_sub = GREEN; }
			break;

		case YEL:
			HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, SET);
			HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, RESET);
			HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, SET);
			if(--cnt_sub < 1){ cnt_sub = RED_TIME; state_sub = RED; }
			break;

		case GREEN:
			HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, SET);
			HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, SET);
			HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, RESET);
			if(--cnt_sub < 1){ cnt_sub = YEL_TIME; state_sub = YEL; }
			break;
		}



		display7SEG(cnt_main);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);

		display7SEG_sub(cnt_sub);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);

		HAL_GPIO_TogglePin(LED_TEST_GPIO_Port,LED_TEST_Pin);
		HAL_Delay(1000);

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, B2_Pin|B3_Pin|B4_Pin|LED_TEST_Pin
                          |LED1_Pin|LED2_Pin|LED3_Pin|LED4_Pin
                          |LED5_Pin|LED6_Pin|B5_Pin|B6_Pin
                          |B7_Pin|EN1_Pin|EN2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED_a_Pin|LED_b_Pin|LED_c_Pin|LED_d_Pin
                          |LED_e_Pin|LED_f_Pin|LED_g_Pin|B1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : B2_Pin B3_Pin B4_Pin LED_TEST_Pin
                           LED1_Pin LED2_Pin LED3_Pin LED4_Pin
                           LED5_Pin LED6_Pin B5_Pin B6_Pin
                           B7_Pin EN1_Pin EN2_Pin */
  GPIO_InitStruct.Pin = B2_Pin|B3_Pin|B4_Pin|LED_TEST_Pin
                          |LED1_Pin|LED2_Pin|LED3_Pin|LED4_Pin
                          |LED5_Pin|LED6_Pin|B5_Pin|B6_Pin
                          |B7_Pin|EN1_Pin|EN2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_a_Pin LED_b_Pin LED_c_Pin LED_d_Pin
                           LED_e_Pin LED_f_Pin LED_g_Pin B1_Pin */
  GPIO_InitStruct.Pin = LED_a_Pin|LED_b_Pin|LED_c_Pin|LED_d_Pin
                          |LED_e_Pin|LED_f_Pin|LED_g_Pin|B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

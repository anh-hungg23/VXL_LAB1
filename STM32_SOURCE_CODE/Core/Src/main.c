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
		  // SET = turn off, RESET = turn on
		  switch (num) {
		  	case 0:
		  		 HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_SET); // turn off g and turn on the others
		  		 HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_RESET);
		  		 HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_RESET);
		  		 HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_RESET);
		  		 HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_RESET);
		  		 HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_RESET);
		  		 HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_RESET);
		  		 break;
		  	case 1:
		  		//turn off a,d,f,e led
		  		 HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_SET);
		  		 HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_SET);
		  		 HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_SET);
		  		 HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
		  		 break;
		  	case 2:
		  		//turn off c_led and turn on a,d,e,g led
		  		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_SET);
		  		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_RESET);
		  		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_RESET);
		  		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_RESET);
		  		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_RESET);
		  		break;
		  	case 3:
		  		//turn off e led and turn on c led
		  		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
		  		HAL_GPIO_WritePin(LED_c_GPIO_Port, LED_c_Pin, GPIO_PIN_RESET);
		  		break;
		  	case 4:
		  		//turn off a_led and d_led, turn on f_led
		  		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_RESET);
		  		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_SET);
		  		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_SET);
		  		break;
		  	case 5:
		  		//turn off b led and turn on a, d led
		  		HAL_GPIO_WritePin(LED_a_GPIO_Port, LED_a_Pin, GPIO_PIN_RESET);
		  		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_RESET);
		  		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_SET);
		  		break;
		  	case 6:
		  		// turn on e led
		  		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_RESET);
		  		break;
		  	case 7:
		  		//turn off d,e,f,g led and turn on b led
		  		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_SET);
		  		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
		  		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_SET);
		  		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_SET);
		  		HAL_GPIO_WritePin(LED_b_GPIO_Port, LED_b_Pin, GPIO_PIN_RESET);
		  		break;
		  	case 8:
		  		//turn on d,e,f,g for turning full led
		  		HAL_GPIO_WritePin(LED_d_GPIO_Port, LED_d_Pin, GPIO_PIN_RESET);
		  		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_RESET);
		  		HAL_GPIO_WritePin(LED_f_GPIO_Port, LED_f_Pin, GPIO_PIN_RESET);
		  		HAL_GPIO_WritePin(LED_g_GPIO_Port, LED_g_Pin, GPIO_PIN_RESET);
		  		break;
		  	case 9:
		  		//turn off e led
		  		HAL_GPIO_WritePin(LED_e_GPIO_Port, LED_e_Pin, GPIO_PIN_SET);
		  		break;
		  }
	  }

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
  int cnt_main = 1;
  int cnt_sub  = 1;
  int cnt_led7SEG = 0;
  while (1)
  {
	  HAL_GPIO_TogglePin(LED_TEST_GPIO_Port,LED_TEST_Pin);
	  switch(state_main){
	  case RED:
		  HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, RESET);
		  HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, SET);
		  HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, SET);
		  cnt_main++;
		  if(cnt_main > RED_TIME) {
			  cnt_main = 1;
			  state_main = GREEN;
		  }
		  break;

	  case YEL:
		  HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, SET);
		  HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, RESET);
		  HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, SET);
		  cnt_main++;
		  if(cnt_main > YEL_TIME) {
			  cnt_main = 1;
			  state_main = RED;
		  }
		  break;

	  case GREEN:
		  HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, SET);
		  HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, SET);
		  HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, RESET);
		  cnt_main++;
		  if(cnt_main > GREEN_TIME) {
			  cnt_main = 1;
			  state_main = YEL;
		  }
		  break;

	  default:
		  break;
	  }

	  switch(state_sub) {
	  case RED:
		  HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, RESET);
		  HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, SET);
		  HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, SET);
		  cnt_sub++;
		  if(cnt_sub > RED_TIME) {
			  cnt_sub = 1;
			  state_sub = GREEN;
		  }
		  break;

	  case YEL:
		  HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, SET);
		  HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, RESET);
		  HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, SET);
		  cnt_sub++;
		  if(cnt_sub > YEL_TIME) {
			  cnt_sub = 1;
			  state_sub = RED;
		  }
		  break;

	  case GREEN:
		  HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, SET);
		  HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, SET);
		  HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, RESET);
		  cnt_sub++;
		  if(cnt_sub > GREEN_TIME) {
			  cnt_sub = 1;
			  state_sub = YEL;
		  }
		  break;

	  default:
		  break;
	  }
	  if(cnt_led7SEG >= 10) cnt_led7SEG = 0;
	  display7SEG(cnt_led7SEG++);
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
  HAL_GPIO_WritePin(GPIOA, LED_TEST_Pin|LED1_Pin|LED2_Pin|LED3_Pin
                          |LED4_Pin|LED5_Pin|LED6_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED_a_Pin|LED_b_Pin|LED_c_Pin|LED_d_Pin
                          |LED_e_Pin|LED_f_Pin|LED_g_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_TEST_Pin LED1_Pin LED2_Pin LED3_Pin
                           LED4_Pin LED5_Pin LED6_Pin */
  GPIO_InitStruct.Pin = LED_TEST_Pin|LED1_Pin|LED2_Pin|LED3_Pin
                          |LED4_Pin|LED5_Pin|LED6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_a_Pin LED_b_Pin LED_c_Pin LED_d_Pin
                           LED_e_Pin LED_f_Pin LED_g_Pin */
  GPIO_InitStruct.Pin = LED_a_Pin|LED_b_Pin|LED_c_Pin|LED_d_Pin
                          |LED_e_Pin|LED_f_Pin|LED_g_Pin;
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

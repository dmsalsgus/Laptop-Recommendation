#include "stdafx.h"

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main() {
	int gender = 0, age = 0, document = 0, design = 0, game = 0, write = 0, weight = 0, budget = 0, al;
	double ge = 0, ag = 0, doc = 0, de = 0, ga = 0, wr = 0, we = 0, bu = 0, flex = 0, always = 0, gram = 0, ultra = 0, pro = 0, air = 0, max;
	
	while (1) {
		printf("\n알고리즘 선택\n");
		printf("\n1. Naive Bayes\n2. Exit\n\n");
		scanf_s("%d", &al);

		if (al == 1) {
			//입력값 표시
			printf("해당하는 속성의 번호를 입력하시오.\n");
			printf("Gender 1. Female  2. Male\n");
			scanf_s("%d", &gender); // 성별 입력받기

			printf("해당하는 속성의 번호를 입력하시오.\n");
			printf("Age 1. 10~19  2. 20~29  3. 30~39  4. 40~\n");
			scanf_s("%d", &age); // 나이 입력받기

			printf("해당하는 속성의 번호를 입력하시오.\n");
			printf("Doucument 1. YES  2. NO\n");
			scanf_s("%d", &document); // 문서작업유무 입력받기

			printf("해당하는 속성의 번호를 입력하시오.\n");
			printf("Design & Media 1. YES  2. NO\n");
			scanf_s("%d", &design); // 디자인작업유무 입력받기

			printf("해당하는 속성의 번호를 입력하시오.\n");
			printf("High-end Game 1. YES  2. NO\n");
			scanf_s("%d", &game); // 고사양게임사용유무 입력받기

			printf("해당하는 속성의 번호를 입력하시오.\n");
			printf("Writing 1. YES  2. NO\n");
			scanf_s("%d", &write); // 필기사용유무 입력받기

			printf("해당하는 속성의 번호를 입력하시오.\n");
			printf("Weight 1. ~1kg  2. 1.1kg ~ 1.3kg 3. 1.3kg~\n");
			scanf_s("%d", &weight); // 무게 입력받기

			printf("해당하는 속성의 번호를 입력하시오.\n");
			printf("Budget 1. ~100  2. 100~160 3. 160~\n");
			scanf_s("%d", &budget); // 예산 입력받기

					//pro확률구하기
			if (gender == 1) { ge = (double)18 / 42; }
			else if (gender == 2) { ge = (double)24 / 42; }

			if (age == 1) { ag = (double)4 / 42; }
			else if (age == 2) { ge = (double)26 / 42; }
			else if (age == 3) { ge = (double)8 / 42; }
			else if (age == 4) { ge = (double)4 / 42; }

			if (document == 1) { doc = (double)33 / 42; }
			else if (document == 2) { doc = (double)9 / 42; }

			if (design == 1) { de = (double)40 / 42; }
			else if (design == 2) { de = (double)2 / 42; }

			if (game == 1) { ga = (double)18 / 42; }
			else if (game == 2) { ga = (double)24 / 42; }

			if (write == 1) { wr = (double)2 / 42; }
			else if (write == 2) { wr = (double)40 / 42; }

			if (weight == 1) { we = 0; }
			else if (weight == 2) { we = (double)4 / 42; }
			else if (weight == 3) { we = (double)38 / 42; }

			if (budget == 1) { bu = 0; }
			else if (budget == 2) { bu = (double)2 / 42; }
			else if (budget == 3) { bu = (double)40 / 42; }

			pro = 0.174 * ge * ag * doc * de * ga * wr * we * bu;

			//flex확률구하기
			if (gender == 1) { ge = (double)30 / 54; }
			else if (gender == 2) { ge = (double)24 / 54; }

			if (age == 1) { ag = (double)12 / 54; }
			else if (age == 2) { ge = (double)16 / 54; }
			else if (age == 3) { ge = (double)14 / 54; }
			else if (age == 4) { ge = (double)12 / 54; }

			if (document == 1) { doc = (double)33 / 54; }
			else if (document == 2) { doc = (double)9 / 54; }

			if (design == 1) { de = (double)9 / 54; }
			else if (design == 2) { de = (double)45 / 54; }

			if (game == 1) { ga = (double)27 / 54; }
			else if (game == 2) { ga = (double)27 / 54; }

			if (write == 1) { wr = 1.0; }
			else if (write == 2) { wr = 0; }

			if (weight == 1) { we = 0; }
			else if (weight == 2) { we = (double)52 / 54; }
			else if (weight == 3) { we = (double)2 / 54; }

			if (budget == 1) { bu = 0; }
			else if (budget == 2) { bu = (double)3 / 54; }
			else if (budget == 3) { bu = (double)51 / 54; }

			flex = 0.223 * ge * ag * doc * de * ga * wr * we * bu;

			//ultra확률구하기
			if (gender == 1) { ge = (double)9 / 24; }
			else if (gender == 2) { ge = (double)15 / 24; }

			if (age == 1) { ag = (double)15 / 24; }
			else if (age == 2) { ge = (double)1 / 24; }
			else if (age == 3) { ge = (double)7 / 24; }
			else if (age == 4) { ge = (double)1 / 24; }

			if (document == 1) { doc = (double)18 / 24; }
			else if (document == 2) { doc = (double)6 / 24; }

			if (design == 1) { de = 0; }
			else if (design == 2) { de = 1.0; }

			if (game == 1) { ga = (double)12 / 24; }
			else if (game == 2) { ga = (double)12 / 24; }

			if (write == 1) { wr = 0; }
			else if (write == 2) { wr = 1.0; }

			if (weight == 1) { we = 0; }
			else if (weight == 2) { we = (double)2 / 24; }
			else if (weight == 3) { we = (double)22 / 24; }

			if (budget == 1) { bu = 1.0; }
			else if (budget == 2) { bu = 0; }
			else if (budget == 3) { bu = 0; }

			ultra = 0.099 * ge * ag * doc * de * ga * wr * we * bu;

			//always확률구하기
			if (gender == 1) { ge = (double)23 / 48; }
			else if (gender == 2) { ge = (double)25 / 48; }

			if (age == 1) { ag = (double)10 / 48; }
			else if (age == 2) { ge = (double)24 / 48; }
			else if (age == 3) { ge = (double)9 / 48; }
			else if (age == 4) { ge = (double)5 / 48; }

			if (document == 1) { doc = (double)46 / 48; }
			else if (document == 2) { doc = (double)2 / 48; }

			if (design == 1) { de = (double)4 / 48; }
			else if (design == 2) { de = (double)44 / 48; }

			if (game == 1) { ga = (double)9 / 48; }
			else if (game == 2) { ga = (double)39 / 48; }

			if (write == 1) { wr = (double)4 / 48; }
			else if (write == 2) { wr = (double)44 / 48; }

			if (weight == 1) { we = (double)44 / 48; }
			else if (weight == 2) { we = (double)4 / 48; }
			else if (weight == 3) { we = 0; }

			if (budget == 1) { bu = (double)2 / 48; }
			else if (budget == 2) { bu = (double)46 / 48; }
			else if (budget == 3) { bu = 0; }

			always = 0.198 * ge * ag * doc * de * ga * wr * we * bu;

			//gram확률구하기
			if (gender == 1) { ge = (double)31 / 40; }
			else if (gender == 2) { ge = (double)9 / 40; }

			if (age == 1) { ag = 0; }
			else if (age == 2) { ge = (double)28 / 40; }
			else if (age == 3) { ge = (double)5 / 40; }
			else if (age == 4) { ge = (double)7 / 40; }

			if (document == 1) { doc = (double)39 / 40; }
			else if (document == 2) { doc = (double)1 / 40; }

			if (design == 1) { de = (double)5 / 40; }
			else if (design == 2) { de = (double)35 / 40; }

			if (game == 1) { ga = (double)6 / 40; }
			else if (game == 2) { ga = (double)34 / 40; }

			if (write == 1) { wr = (double)2 / 40; }
			else if (write == 2) { wr = (double)38 / 40; }

			if (weight == 1) { we = (double)38 / 40; }
			else if (weight == 2) { we = (double)2 / 40; }
			else if (weight == 3) { we = 0; }

			if (budget == 1) { bu = 0; }
			else if (budget == 2) { bu = (double)38 / 40; }
			else if (budget == 3) { bu = (double)2 / 40; }

			gram = 0.165 * ge * ag * doc * de * ga * wr * we * bu;

			//air확률구하기
			if (gender == 1) { ge = (double)20 / 34; }
			else if (gender == 2) { ge = (double)14 / 34; }

			if (age == 1) { ag = (double)10 / 34; }
			else if (age == 2) { ge = (double)12 / 34; }
			else if (age == 3) { ge = (double)7 / 34; }
			else if (age == 4) { ge = (double)5 / 34; }

			if (document == 1) { doc = (double)31 / 34; }
			else if (document == 2) { doc = (double)3 / 34; }

			if (design == 1) { de = (double)32 / 34; }
			else if (design == 2) { de = (double)2 / 34; }

			if (game == 1) { ga = (double)11 / 34; }
			else if (game == 2) { ga = (double)23 / 34; }

			if (write == 1) { wr = (double)6 / 34; }
			else if (write == 2) { wr = (double)28 / 34; }

			if (weight == 1) { we = 0; }
			else if (weight == 2) { we = (double)33 / 34; }
			else if (weight == 3) { we = (double)1 / 34; }

			if (budget == 1) { bu = (double)2 / 34; }
			else if (budget == 2) { bu = (double)32 / 34; }
			else if (budget == 3) { bu = 0; }

			air = 0.141 * ge * ag * doc * de * ga * wr * we * bu;


			//6개 클래스 확률의 최대값구하기
			max = pro;
			if (max < flex) { max = flex; }
			if (max < ultra) { max = ultra; }
			if (max < always) { max = always; }
			if (max < gram) { max = gram; }
			if (max < air) { max = air; }

			//최대값과 같은 값의 확률이 class
			if (max == pro) {
				printf("\nApple Macbook pro 를 추천합니다.");
			}
			else if (max == flex) {
				printf("\nSamsung Galaxy Book Flex 를 추천합니다.");
			}
			else if (max == always) {
				printf("\nSamsung Always 9 를 추천합니다.");
			}
			else if (max == gram) {
				printf("\nLG gram 14 를 추천합니다.");
			}
			else if (max == air) {
				printf("\nApple MacBook Air 를 추천합니다.");
			}
			else if (max == ultra) {
				printf("\nLG 울트라 PC 를 추천합니다.");
			}

			printf("\n\n=========================================\n");
			printf("naive bayes의 분류정확도 : 81.4%\n"); //정확도 출력

		}
		else
			break;
	}

	return 0;
}

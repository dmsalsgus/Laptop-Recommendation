#include<stdio.h>

int main() {
	int al1, gen, age, doc, design, game, pen, weight, money;
	double yes_weather = 0, no_weather = 0,  max = 0;
	printf("������ �Է��ϱ�\n");

	while (1) {
		printf("\nGender\n1. Female\n2. Male\n\n");
		scanf_s("%d", &gen);
		printf("\nAge\n1. 10~19\n2. 20~29\n3. 30~39\n4. 40~\n\n");
		scanf_s("%d", &age);
		printf("\nDocument\n1. Yes\n2. No\n\n");
		scanf_s("%d", &doc);
		printf("\nDesign & media\n1. Yes\n2. No\n\n");
		scanf_s("%d", &design);
		printf("\nHigh-end games\n1. Yes\n2. No\n\n");
		scanf_s("%d", &game);
		printf("\nWriting\n1. Yes\n2. No\n\n");
		scanf_s("%d", &pen);
		printf("\nWeight\n1. ~1kg\n2. 1.1kg~1.3kg\n3. 1.3kg~\n\n");
		scanf_s("%d", &weight);
		printf("\nBudget\n1. ~100\n2. 100~160\n3. 160~\n\n");
		scanf_s("%d", &money);

		while (1) { //1R, Naive Bayes, Decision Tree�� �˰��� ����.
			printf("\n�˰��� ����\n");
			printf("\n1. 1R(OneR)\n2. Decision Tree\n3. quit\n");
			scanf_s("%d", &al1);
			if (al1 == 1) { //1R �����ϸ�.
				if (weight == 1) { //Weka�˰��� ���� 
					printf("\nSamsung Always 9!\n");
					printf("��Ȯ�� : 55.3719\n");
				}
				else if (weight == 2) {
					printf("\nSamsung Galaxy Book Flex!\n");
					printf("��Ȯ�� : 55.3719\n");
				}
				else {
					printf("\nApple MacBook Pro!\n");
					printf("��Ȯ�� : 55.3719\n");
				}
			}
			else if (al1 == 2) { //Decision Tree�� �����ϸ�.
				if (money == 3) {
					if (pen == 2) {
						printf("\nApple MacBook Pro!\n");
						printf("��Ȯ�� : 76.8595 \n");
					}
					else {
						if (weight == 3) {
							printf("\nSamsung Galaxy Book Flex!\n");
							printf("��Ȯ�� : 76.8595 \n");
						}
						else if (weight == 2) {
							printf("\nSamsung Galaxy Book Flex!\n");
							printf("��Ȯ�� : 76.8595 \n");
						}
						else {
							printf("\nLG gram14!\n");
							printf("��Ȯ�� : 76.8595 \n");
						}
					}
				}
				else if (money == 1) {
					if (design == 1) {
						printf("\nApple MacBook Air!\n");
						printf("��Ȯ�� : 76.8595 \n");
					}
					else {
						printf("\nLG gram14!\n");
						printf("��Ȯ�� : 76.8595 \n");
					}
				}
				else {
					if (weight == 3) {
						printf("\nSamsung Always 9!\n");
						printf("��Ȯ�� : 76.8595 \n");
					}
					else if (weight == 2) {
						if (design == 1) {
							printf("\nApple MacBook Air!\n");
							printf("��Ȯ�� : 76.8595 \n");
						}
						else {
							if (age == 2) {
								printf("\nLG gram14!\n");
								printf("��Ȯ�� : 76.8595 \n");
							}
							else if(age==3){
								if (pen == 2) {
									printf("\nApple MacBook Air!\n");
									printf("��Ȯ�� : 76.8595 \n");
								}
								else {
									printf("\nSamsung Galaxy Book Flex!\n");
									printf("��Ȯ�� : 76.8595 \n");
								}
							}
							else if (age == 4) {
								printf("\nSamsung Galaxy Book Flex!\n");
								printf("��Ȯ�� : 76.8595 \n");
							}
							else {
								printf("\nSamsung Always 9!\n");
								printf("��Ȯ�� : 76.8595 \n");
							}
						}
					}
					else {
						if (pen == 2) {
							if (age == 2) {
								if (game == 2) {
									if (gen == 1) {
										printf("\nLG gram14!\n");
										printf("��Ȯ�� : 76.8595 \n");
									}
									else {
										printf("\nSamsung Always 9!\n");
										printf("��Ȯ�� : 76.8595 \n");
									}
								}
								else {
									printf("\nLG gram14!\n");
									printf("��Ȯ�� : 76.8595 \n");
								}
							}
							else if (age == 3) {
								printf("\nSamsung Always 9!\n");
								printf("��Ȯ�� : 76.8595 \n");
							}
							else if (age == 4) {
								printf("\nSamsung Always 9!\n");
								printf("��Ȯ�� : 76.8595 \n");
							}
							else {
								printf("\nSamsung Always 9!\n");
								printf("��Ȯ�� : 76.8595 \n");
							}
						}
						else {
							printf("\nSamsung Always 9!\n");
							printf("��Ȯ�� : 76.8595 \n");
						}
					}
				}
			}
			else
				break;
		}
		break;
	}
	return 0;
}
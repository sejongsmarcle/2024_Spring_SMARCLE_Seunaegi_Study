// 7세그먼트 각각 LED에 핀을 할당합니다. {A, B, C, D, E, F, G, H}
int segmentLEDs[] = {2, 3, 4, 5, 6, 7, 8, 9};
// 지정된 LED 개수
int segmentLEDsNum = 8;

int digitForNum[10][8] = { vcc용 자신의 7segment가 vcc와 연결했더니 불이 켜지면 이 것 사용
	{0, 0, 0, 0, 0, 0, 1, 1}, //0
	{1, 0, 0, 1, 1, 1, 1, 1}, //1
	{0, 0, 1, 0, 0, 1, 0, 1}, //2
	{0, 0, 0, 0, 1, 1, 0, 1}, //3
	{1, 0, 0, 1, 1, 0, 0, 1}, //4
	{0, 1, 0, 0, 1, 0, 0, 1}, //5
	{0, 1, 0, 0, 0, 0, 0, 1}, //6
	{0, 0, 0, 1, 1, 1, 1, 1}, //7
	{0, 0, 0, 0, 0, 0, 0, 1}, //8
	{0, 0, 0, 0, 1, 0, 0, 1}  //9
};

int digitForNum[10][8] = { // gnd용 자신의 7segment가 gnd와 연결했더니 불이 켜지면 이 것 사용
	{1, 1, 1, 1, 1, 1, 0, 0} //0
	{0, 1, 1, 0, 0, 0, 0, 0}, //1
	{1, 1, 0, 1, 1, 0, 1, 0}, //2
	{1, 1, 1, 1, 0, 0, 1, 0}, //3
	{0, 1, 1, 0, 0, 1, 1, 0}, //4
	{1, 0, 1, 1, 0, 1, 1, 0}, //5
	{1, 0, 1, 1, 1, 1, 1, 0}, //6
	{1, 1, 1, 0, 0, 0, 0, 0}, //7
	{1, 1, 1, 1, 1, 1, 1, 0}, //8
	{1, 1, 1, 1, 0, 1, 1, 0}  //9
};

void setup() 
{
	// 7segment 각각 LED에 연결된 핀을 OUTPUT으로 설정합니다.
	for (int i = 0 ; i < segmentLEDsNum ; i++) {
		pinMode(segmentLEDs[i], OUTPUT);
	}
}

void loop() {
		for (int j = 0 ; j < segmentLEDsNum ; j++) {
			digitalWrite(segmentLEDs[j], digitForNum[0][j]);
		}
		delay(1000);
		for (int j = 0 ; j < segmentLEDsNum ; j++) {
			digitalWrite(segmentLEDs[j], digitForNum[5][j]);
		}
  		delay(1000);
  		for (int j = 0 ; j < segmentLEDsNum ; j++) {
			digitalWrite(segmentLEDs[j], digitForNum[1][j]);
		}
  		delay(1000);
 		 for (int j = 0 ; j < segmentLEDsNum ; j++) {
			digitalWrite(segmentLEDs[j], digitForNum[4][j]);
		}
  		delay(1000);
}

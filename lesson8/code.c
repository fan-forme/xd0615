/*
  Keyboard
  Plays a pitch that changes based on a changing
  input circuit:
  * 3 pushbuttons from +5V to analog in 0 through
  3
  * 3 10K resistors from analog in 0 through 3 to
  ground
  * 8-ohm speaker on digital pin 8
*/

int pos = 0;//����һ��������ֵposΪ0

void setup()
{
  pinMode(A0, INPUT);//����A0�˿�Ϊ����
  pinMode(8, OUTPUT);//����8�˿�Ϊ���
  pinMode(A1, INPUT);//����A1�˿�Ϊ����
  pinMode(A2, INPUT);//����A2�˿�Ϊ����
}

void loop()
{
  // ����⵽��ť����A0
  if (digitalRead(A0) == HIGH) {
    tone(8, 440, 100); // ������Ϊ57
  }
  // ����⵽��ť����A1
  if (digitalRead(A1) == HIGH) {
    tone(8, 494, 100); // ������Ϊ59
  }
  // ����⵽��ť����A2
  if (digitalRead(A2) == HIGH) {
    tone(8, 523, 100); // ������Ϊ60
  }
  delay(10); // �ӳ�10����
}

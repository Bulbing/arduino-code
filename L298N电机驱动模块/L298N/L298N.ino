//中贝斯特UltiRobot电机驱动板L298N示例教程
//程序效果：两个直流电机先正转一秒 暂停一秒 反转一秒 如此反复
//淘宝店地址：zhongbest.taobao.com
//专业Arduino资料网站：www.arduino365.com
//这个电机驱动板使用数字端口4 5 6 7 控制电机
//正确连接你的电机到M1+ M1- M2+ M2-
int ENA=4;
int IN1=5;
int IN2=6;

void setup()
{
  int i;
  for (i=4;i<=6;i++) //为Ardunio 电机驱动板
  pinMode(i,OUTPUT); //设置数字端口4,5,6,7为输出模式
  for (i=4;i<=6;i++) 
  digitalWrite(i,HIGH); //设置数字端口4,5,6为HIGH,电机保持不动
  //pinMode(10,OUTPUT);//设置数字端口10  11为输出模式
  //pinMode(11,OUTPUT);
  //Serial.begin(9600);

}

void loop()
{
  aa();//两个直流电机正转1秒 暂停一秒 反转一秒
}

void aa()//先正转1秒停1秒后反转1秒
{
  //正转
  digitalWrite(ENA,HIGH);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
 // delay(1000); //暂停一秒
  
  /*digitalWrite(ENA,LOW);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  delay(1000);*/
  //暂停一秒

 /* //反转
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  delay(1000);
  // 暂停一秒*/
}

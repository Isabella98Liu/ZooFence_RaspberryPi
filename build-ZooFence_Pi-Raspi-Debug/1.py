import serial
import sqlite3
import sys 

ser = serial.Serial('/dev/ttyUSB0', 115200)
db=sqlite3.connect('SensorData.db')
cur = db.cursor()
while True: 
  # echo 
  s = str(ser.readline())
  ser.flush()
  data = s[s.rfind("x00d")+4:-3]
  counter = int(data.split()[0])
  ultra = int(data.split()[1])
  laser = int(data.split()[2])
  infrared = int(data.split()[3])
  temp = int(data.split()[4])
  humidity = int(data.split()[5])
  cur.execute('insert into SENSOR values(?,?,?,?,?,?)',(counter,temp,humidity,laser,ultra,infrared))
  print(counter,temp,humidity,laser,ultra,infrared)
  db.commit()
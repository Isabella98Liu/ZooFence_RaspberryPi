import serial
import sqlite3
import sys 

ser = serial.Serial('/dev/ttyUSB0', 115200) 
db=sqlite3.connect('data')
db.execute('create table if not exists dd(id integer primary key,name text,value interger,time timestamp not null default current_timestamp);')
while True: 
  # echo 
  s = str(ser.readline())
  ser.flush()
  data=s[s.rfind("x00d")+4:-3]
  db.execute('insert into dd ( name,value) values(?,?)',(data,1))
  db.commit()           
  print(data)
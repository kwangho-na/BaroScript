# -*- coding: utf-8 -*- 
import sqlite3
import sys
args={};

args[1]="PATH"
for i in range(len(sys.argv)):
	args[i]=sys.argv[i]

curType=args[1]

# SQLite DB 연결
conn = sqlite3.connect("/home/pi/app/BaroScript/data/config.db")
 
# Connection 으로부터 Cursor 생성
cur = conn.cursor()
 
# SQL 쿼리 실행
cur.execute("select type,def,value from global_define where type='%s'" %curType)
 
# 데이타 Fetch
rows = cur.fetchall()
for row in rows:
	print(">> %s,%s,%s" % (row[0], row[1], row[2]) )
 
# Connection 닫기
conn.close()
:<<!/*
 * GenralShell.c
 *
 *  Created on: 2015��8��3��
 *      Author: Song Zhi-Cheng
 */
��
grep ���ı�����
sed���ı��༭
awk���ı�ƥ�䴦������ǿ���к������߼�����
#!/bin/sh

#ͳ�������г��ֵ�����������
#��ǰĿ¼���ļ��ĸ���#ͳ��abc.txt�ļ��е��������������Լ���ռ�ֽ���-
----------
ls |wc -l
cat abc.txt |wc 
----------



employee�ļ��м�¼�˹��ź�����
employee.txt:
100 Jason Smith 
200 John Doe 
300 Sanjay Gupta 
400 Ashok Sharma 
bonus�ļ��м�¼���ź͹���
bonus.txt:
100 $5,000 
200 $500 
300 $3,000 
400 $1,250 
Ҫ��������ļ��ϲ����������
������:
400 ashok sharma $1,250
100 jason smith  $5,000
200 john doe  $500
300 sanjay gupta  $3,000
----------------------------------------------
join nonus.txt employee.txt
----------------------------------------------





��ѯϵͳ��������Ĵ�С��-F��ߵ�''�м��пո�
-------------------------
free -m|grep Swap|awk -F ' '  '{print $2;}'
---------------------------


�����������20000��Ŀ¼���õ�ʱ��
time for i in {1..2000} ; do mkdir /root/neil$i; done



��ӡ��ǰsshd�Ķ˿ںͽ���id
netstat -anp | grep sshd | sed -n 's/.*:::\([0-9]*\)\ .* \ \([0-9]*\)\/sshd/\1 \2/p'



��ӡroot����ʹ�ÿ�ִ���ļ���
echo "root's bins: $(find ./ -type f | xargs ls -l | sed '/-..x/p' | wc -l)"




��һĿ¼�����е��ļ�����չ����Ϊbak
ls -l |grep -v "total"|awk '{print $9}'|sed s#.*#.b#gp

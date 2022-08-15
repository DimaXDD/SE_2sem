#pragma once
#include "stdafx.h" //����������� ���������
#define DICTNAMEMAXSIZE		20		//������������ ������ ����� �������
#define DICTMAXSIZE			100		//����.������� �������
#define ENTRYNAMEMAXSIZE	30		//����.����� ����� � �������
#define THROW01 "Create: �������� ������ ����� �������"
#define THROW02 "Create: �������� ������ ������������ ������� �������"
#define THROW03 "AddEntry: ������������ �������"
#define THROW04 "AddEntry: ������������ ��������������"
#define THROW05 "GetEntry: �� ������ �������"
#define THROW06 "DelEntry: �� ������ �������"
#define THROW07 "UpdEntry: �� ������ �������"
#define THROW08 "UpdEntry: ������������ ��������������"

namespace Dictionary
{
	struct Entry //������� �������
	{
		int id;
		char name[ENTRYNAMEMAXSIZE];
	};
	struct Instance //��������� �������
	{
		char name[ENTRYNAMEMAXSIZE];
		int maxsize = DICTMAXSIZE;
		int size;
		int cnt = 0;
		Entry* dictionary;
	};
	Instance Create  //������� �������
	(
		const char* name,
		int size
	);
	void addEntry //�������� ������� � �������
	(
		Instance& ints,
		Entry ed
	);
	void DelEntry( //������� ������� �������
		Instance& inst,
		int id
	);
	void UpdEntry //�������� ������� �������
	(
		Instance& ints,
		int id,
		Entry new_ed
	); 
	Entry GetEntry( //�������� ������� ������� �� id
		Instance& inst,
		int id
	);
	void Print(Instance& d);
	void Delete(Instance& d);
};
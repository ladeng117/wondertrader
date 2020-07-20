/*!
 * \file ISessionMgr.h
 * \project	WonderTrader
 *
 * \author Wesley
 * \date 2020/03/30
 * 
 * \brief ����ʱ��ģ��������ӿڶ���
 */
#pragma once

#include "WTSMarcos.h"

NS_OTP_BEGIN
class WTSSessionInfo;

/*
 *	ʱ��ģ��������ӿ�
 */
class ISessionMgr
{
public:
	/*
	 *	��ȡ��Լ������ʱ��ģ�����ָ��
	 *	@code	��Լ����
	 *	@exchg	����������
	 *
	 *	����ֵ	ʱ��ģ��ָ�룬��������ΪNULL
	 */
	virtual WTSSessionInfo* getSession(const char* code, const char* exchg = "")	= 0;
};
NS_OTP_END

#ifndef TRANSFERER_TCP_H
#define TRANSFERER_TCP_H

#include "transferer.h"

BEGIN_C_DECLS

/**
 * transferer_tcp�ṩ��TCP�ϻ���ymodemЭ�鴫��һ���ļ�����������
 * ������ʹ�ã�https://github.com/SecurityToolsArchive/lrzsz.git
 * ������������ʽ��./lrz  --overwrite --binary --tcp-server --ymodem
 * ��������transferer����ע��transferer_tcp��ע��֮����ܱ�ʹ�á�
 */
bool_t transferer_tcp_register_creator_desc();

END_C_DECLS

#endif//TRANSFERER_TCP_H

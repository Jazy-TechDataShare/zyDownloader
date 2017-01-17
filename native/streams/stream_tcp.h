#ifndef STREAM_TCP_H
#define STREAM_TCP_H

#include "stream.h"

BEGIN_C_DECLS

/**
 * \brief ����һ��socket������ָ���Ķ˿ں��ϼ�����
 *
 * \param[in]  port       �� �˿ں�
 *
 * \retval socket
*/
int       tcp_listen(int port);

/**
 * \brief ���ӵ�ָ���ķ����������ڶ�Ӧ��socket�ϴ���һ��stream����
 *
 * \param[in]  host       �� ������
 * \param[in]  port       �� �˿ں�
 *
 * \retval stream����
*/
stream_t* tcp_connect(const char* host, int port);

/**
 * \brief ��ָ����socket�Ͻ���һ���ͻ��ˣ����ڶ�Ӧ��socket�ϴ���һ��stream����
 *
 * \param[in]  sock       �� ��tcp_listen������socket��
 *
 * \retval stream����
*/
stream_t* tcp_accept(int sock);

#define DEFAULT_PORT 9988 

END_C_DECLS

#endif//STREAM_TCP_H


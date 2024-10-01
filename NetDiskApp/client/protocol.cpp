#include "protocol.h"

//自定义消息段
PDU *mkPDU(uint uiMsgLen)
{
    // PDF + 实际长度
    uint uiAllLength=sizeof(PDU)+uiMsgLen;

    // 开辟空间
    PDU* pdu=(PDU*)malloc(uiAllLength);

    if(pdu==NULL)
    {
        exit(EXIT_FAILURE);
    }
    memset(pdu,0,uiAllLength);

    pdu->uiPDULen=uiAllLength;
    pdu->uiMsgLen=uiMsgLen;
    return pdu;
};

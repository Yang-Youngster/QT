#include "protocol.h"

PDU *mkPDU(uint uiMsgLen)
{
    uint uiAllLength=sizeof(PDU)+uiMsgLen;
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

#ifndef __AT_WIFICMD_H
#define __AT_WIFICMD_H

void at_testCmdCwmode(uint8_t id);
void at_queryCmdCwmode(uint8_t id);
void at_setupCmdCwmode(uint8_t id, char *pPara);

//void at_testCmdCwjap(uint8_t id);
void at_queryCmdCwjap(uint8_t id);
void at_setupCmdCwjap(uint8_t id, char *pPara);

void at_setupCmdCwlap(uint8_t id, char *pPara);
void at_exeCmdCwlap(uint8_t id);

void at_testCmdCwqap(uint8_t id);
void at_exeCmdCwqap(uint8_t id);

void at_queryCmdCwsap(uint8_t id);
void at_setupCmdCwsap(uint8_t id, char *pPara);

void at_exeCmdCwlif(uint8_t id);

void at_queryCmdCwdhcp(uint8_t id);
void at_setupCmdCwdhcp(uint8_t id, char *pPara);

void at_setupCmdCipstamac(uint8_t id, char *pPara);

void at_setupCmdCipapmac(uint8_t id, char *pPara);

void at_setupCmdCipsta(uint8_t id, char *pPara);

void at_setupCmdCipap(uint8_t id, char *pPara);

#endif

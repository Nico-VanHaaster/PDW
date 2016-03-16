#pragma once


void StartMQMonitor();

void SendMQMessage(char *capCode, char *time, char *date, char *mode, char *type, char *bitRate, char *message);
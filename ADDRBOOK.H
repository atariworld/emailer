#ifndef ADDRBOOK_CHANGED

#define ADDRBOOK_CHANGED 0x4350
void address_reload(int req_id);

#endif

/* 
Ausl�sen des Neulesens:
msg[0]=ADDRBOOK_CHANGED;
msg[1]=App-ID
msg[3]=1;
 
R�ckmeldung, das Adressen aktualisiert wurden:
msg[0]=ADDRBOOK_CHANGED;
msg[1]=App-ID
msg[3]=2;

Verweigern des Neulesens:
msg[0]=ADDRBOOK_CHANGED;
msg[1]=App-ID
msg[3]=3;

Fehler beim Neueinlesen (Datei nicht gefunden
oder nicht gen�gend Speicher)
msg[0]=ADDRBOOK_CHANGED;
msg[1]=App-ID
msg[3]=4;

*/
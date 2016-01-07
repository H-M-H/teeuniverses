#ifndef MODAPI_COMPATIBILITY_H
#define MODAPI_COMPATIBILITY_H

#define MODAPI_NETVERSION_TW06 "0.6 626fce9a778df4d4"
#define MODAPI_NETVERSION_TW07 "0.7 be5937118401c37c"

enum
{
	MODAPI_CLIENTPROTOCOL_TW06 = 0,
	MODAPI_CLIENTPROTOCOL_TW07,
	MODAPI_CLIENTPROTOCOL_TW07MODAPI,
};

enum
{
	MODAPI_COMPATIBILITY_BROADCAST = 0,
	MODAPI_COMPATIBILITY_SPRITE,
	MODAPI_COMPATIBILITY_LINE,
	MODAPI_COMPATIBILITY_SNAPSHOT07MODAPI,
	MODAPI_NB_COMPATIBILITY,
};

#endif

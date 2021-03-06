/*************************************************
  Copyright (C), 2007-2099,SZ-STREAMING Tech. Co., Ltd.
  File name:
  	keyvaluetable.h
  Author:
		c54122	
  Date:
  Description:
*************************************************/
#ifndef __KEYVALUETABLE_H__
#define __KEYVALUETABLE_H__

typedef enum _keyvaluetable_{
	KVT_INVALID,
	KVT_LOGIN,
	KVT_CHECK,
	KVT_POWEROFF,
	KVT_PICSWITCH,
	KVT_CHNPARA,
	KVT_ADJUST,
	KVT_ZERO,
	KVT_ONE,
	KVT_TWO,
	KVT_THREE,
	KVT_FOUR,
	KVT_FIVE,
	KVT_SIX,
	KVT_SEVEN,
	KVT_EIGHT,
	KVT_NINE,
	KVT_TEN,
	KVT_ELEVEN,
	KVT_TWELVE,
	KVT_THIRTEEN,
	KVT_FOURTEEN,
	KVT_FIFTEEN,
	KVT_SIXTEEN,

	KVT_UP,
	KVT_DOWN,
	KVT_LEFT,
	KVT_RIGHT,
	KVT_ENTER,
	KVT_4X4,
	KVT_3X3,
	KVT_2X2,
	KVT_QUAD,  
	KVT_NINTH,	
	KVT_SIXTEENTH,	
	KVT_MULTIPIC,

	KVT_SEARCH,
	KVT_FASTPLAY,
	KVT_SLOWPLAY,
	KVT_FASTBACK,
	KVT_PLAY,
 	KVT_PAUSE,   //20100420
	KVT_STOP,

	KVT_INC,
	KVT_DEC,

	KVT_SETUP,	
	KVT_EXIT = KVT_SETUP, //Ziven@100311 

	KVT_MOUSERBU,
	KVT_MOUSERBD,
	KVT_MOUSELBU,
	KVT_MOUSELBD,
	KVT_MOUSEMV,
	KVT_PTZ,
	KVT_MUTE,
	KVT_PIP,
	KVT_VM,	
	KVT_AUTO,

	KVT_ZOOMINC,
	KVT_ZOOMDEC,
	KVT_FOCUSINC,
	KVT_FOCUSDEC,
	KVT_IRISINC,
	KVT_IRISDEC,

	KVT_LOCK,
	KVT_STARTRECORD,
// 	KVT_STOPRECORD,
	KVT_DROPDOWNLISTSCROLL,
	KVT_NEWSECOND,
	KVT_RESET,
	KVT_VGASEL,
	KVT_PLAY111,  //fengqx 20100611

	KVT_1PLUS5,
	KVT_1PLUS7,
	KVT_CHANNEL_ADD,
	KVT_CHANNEL_DEC,
	KVT_BUTT
}keyvaluetable_t;

typedef enum _guistatetable_{
	GUI_INVALID,
	GUI_VIEW,
	GUI_PLAYBACK,

}guistatetable_t;

#endif/*__KEYVALUETABLE_H__*/




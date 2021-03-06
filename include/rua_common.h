#ifndef _RUA_COMMON_H
#define _RUA_COMMON_H

/*
 * Copyright (c) Juergen Urban, All rights reserved.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3.0 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *      Lesser General Public License for more details.
 * 
 *      You should have received a copy of the GNU Lesser General Public
 *      License along with this library.
 */

#include <stdint.h>

#define TRUE 1
#define FALSE 0

#define RMFAILED(x) ((x) != RM_OK)
#define RMSUCCEEDED(x) ((x) == RM_OK)

typedef uint64_t RMuint64;
typedef uint32_t RMuint32;
typedef uint16_t RMuint16;
typedef uint8_t RMuint8;
typedef int64_t RMint64;
typedef int32_t RMint32;
typedef int16_t RMint16;
typedef int8_t RMint8;
typedef uint8_t RMbool;

/**
 * Return codes of the functions.
 * The names are returned by RMstatusToString() function in librmcore.
 */
typedef enum {
	RM_OK = 6,
	RM_PENDING = 7,
	RM_XFER_DONE = 8,
	RM_ERROR = 9,
	RM_FATAL = 10,
	RM_NOTIMPLEMENTED = 11,
	RM_INVALIDMODE = 12,
	RM_DEPRECATED = 13,
	RM_PARAMETER_OUT_OF_RANGE = 14,
	RM_INVALID_PARAMETER = 15,
	RM_ACCESS_VIOLATION = 16,
	RM_INSUFFICIENT_SIZE = 17,
	RM_NOT_FOUND = 18,
	RM_NOT_SUPPORTED = 19,
	RM_ERRORNOSUCHINTERFACE = 20,
	RM_ERRORINTERFACEWITHNOOWNER = 21,
	RM_ERRORCREATEINSTANCE = 22,
	RM_ERROROUTOFFILEDESCRIPTORS = 23,
	RM_ERROREINTR = 24,
	RM_FATALEVENT = 25,
	RM_FATALSEMAPHORE = 26,
	RM_SEMAPHORELOCKED = 27,
	RM_FATAL_TOS = 28,
	RM_TOS_TIMEOUT = 29,
	RM_TOS_EVENT = 30,
	RM_FATALCRITSEC = 31,
	RM_FATALINCONSISTENTCRITICALSECTIONCALL = 32,
	RM_FATALCONDVAR = 33,
	RM_FATALCREATETHREAD = 34,
	RM_FATALTHREADTABLEOVERFLOW = 35,
	RM_FATALBUFFERTOOSMALL = 36,
	RM_FATALASKEDZEROSIZEMALLOC = 37,
	RM_FATALINVALIDPOINTER = 38,
	RM_FATALMEMORYCORRUPTED = 39,
	RM_FATALOUTOFMEMORY = 40,
	RM_ERRORMEMORYISNOTFREE = 41,
	RM_INVALID_NEW = 42,
	RM_INVALID_DELETE = 43,
	RM_ERROROPENFILE = 44,
	RM_ERRORCLOSEFILE = 45,
	RM_ERRORWRITEFILE = 46,
	RM_ERRORREADFILE = 47,
	RM_ERRORSEEKFILE = 48,
	RM_ERRORENDOFFILE = 49,
	RM_ERRORFILELOCKED = 50,
	RM_ERRORNODIRECTORYENTRY = 51,
	RM_ERRORDYNAMICLIBOPEN = 52,
	RM_ERRORDYNAMICLIBGETSYMBOL = 53,
	RM_ERRORDYNAMICLIBCLOSE = 54,
	RM_FATALCORELISTNOTVALID = 55,
	RM_FATALCOREQUEUENOTVALID = 56,
	RM_FATALCOREPOOLNOTVALID = 57,
	RM_FATALCOREPOOLLEAKS = 58,
	RM_FATALCOREPOOLRETURNEDTWICE = 59,
	RM_FATALCOREPOOLISNOTMINE = 60,
	RM_FATALCOREPOOLOVERFLOW = 61,
	RM_FATALQUEUENOTVALID = 62,
	RM_FATALLISTNOTVALID = 63,
	RM_LISTISEMPTY = 64,
	RM_ERROR_KEYISNOTPRESENT = 65,
	RM_ERRORNOGRAPHINDRIVER = 66,
	RM_ERRORGRAPHFULL = 67,
	RM_ERRORGRAPHMISSINGNODEORMODULE = 68,
	RM_INVALID_URL = 69,
	RM_UNKNOWN_URL_PREFIX = 70,
	RM_FATAL_INPUT_CONTROL = 71,
	RM_OBJECTDELETED = 72,
	RM_ERRORHARDWARELIBRARY = 73,
	RM_VIDEOHASPAUSED = 74,
	RM_ASPECTRATIOCHANGE = 75,
	RM_ACMODECHANGE = 76,
	RM_FETCHCC = 77,
	RM_FETCHDTVCC = 78,
	RM_FATALHARDWAREABSTRACTIONLAYER = 79,
	RM_DEMUX_CANNOT_DETECT_AUDIO = 80,
	RM_ERRORSOCKETINITFAILED = 81,
	RM_ERRORSOCKETWRONGVERSION = 82,
	RM_FATALSOCKET = 83,
	RM_FATALSTRING = 84,
	RM_BUFFERTOOSMALL = 85,
	RM_FATALUDP = 86,
	RM_ERROR_NOT_MP4 = 87,
	RM_MPEG4EOF = 88,
	RM_ERROR_NOT_DIVX = 89,
	RM_NEED_MORE_DATA = 90,
	RM_CANT_REWIND_STREAM = 91,
	RM_MP3_DECODE_NOTHING = 92,
	RM_MP3_INCOMPLETE_FRAME = 93,
	RM_SHIFTSTORAGE_FATAL = 94,
	RM_HWACCESS_GENERIC_ERROR = 95,
	RM_HWACCESS_HWLIB_VERSION_MISMATCH = 96,
	RM_CANT_OPEN_SOCKET = 97,
	RM_ERROR_REMOTE = 98,
	RM_INVALID_PROPERTY_MAINSET = 99,
	RM_INVALID_PROPERTY_SUBSET = 100,
	RM_INVALID_PROPERTY_ID = 101,
	RM_PROPERTY_NOT_SUPPORTED = 102,
	RM_PROPERTY_NOT_SET = 103,
	RM_OK_HAS_NO_VIDEO = 104,
	RM_ERROR_NOT_FINISHED = 105,
	RM_ERROR_INVALID_SECTORS = 106,
	RM_ERROR_FATAL_INVALID_SECTORS = 107,
	RM_ERROR_UOP_NOT_ALLOWED = 108,
	RM_ERROR_QUEUE_COMMAND = 109,
	RM_ERROR_NOT_SET = 110,
	RM_ERROR_NO_NEXT_PGC = 111,
	RM_ERROR_NO_PREV_PGC = 112,
	RM_ERROR_NO_STILL = 113,
	RM_ERROR_PARENTAL_CONTROL = 114,
	RM_ERROR_BAD_COMMAND = 115,
	RM_ERROR_NOT_FOUND = 116,
	RM_ERROR_NO_FPPGC = 117,
	RM_ERROR_ENDOFTITLE_REPEATA = 118,
	RM_ERROR_WRONG_PLAY_MODE = 119,
	RM_ERROR_NAVIGATION_PACK = 120,
	RM_ERROR_NO_SUCH_MENU = 121,
	RM_ERROR_NOTHING_TO_DO = 122,
	RM_ERROR_RPC2_NOT_SET = 123,
	RM_ERROR_RPC2 = 124,
	RM_ERROR_REGION = 125,
	RM_ERROR_NO_DISC_IN_DRIVE = 126,
	RM_ERROR_VIDEO_MODE = 127,
	RM_ERROR_PLAYING_ALREADY = 128,
	RM_ERROR_NOT_PLAYING = 129,
	RM_ERROR_NOT_CONSTRUCTED = 130,
	RM_ERROR_NOT_PAUSING = 131,
	RM_NOBUFFER_AVAILABLE = 132,
	RM_FATAL_COREPOOL_CREATION = 133,
	RM_FATAL_THREAD_DESTRUCTION = 134,
	RM_FATAL_THREAD_CREATION = 135,
	RM_INVALID_BOARD_HANDLE = 136,
	RM_INVALID_CHIP_HANDLE = 137,
	RM_INVALID_MODULE_HANDLE = 138,
	RM_INVALID_PROPERTY_HANDLE = 139,
	RM_WRONGRTSPANSWER = 140,
	RM_WRONG_RELIABLE_RTP_STATE = 141,
	RM_ERROR_BUFFER_TO_SMALL = 142,
	RM_ERROR_NOT_VOD = 143,
	RM_ERROR_STATE = 144,
	RM_UNSUPPORTED_SPEED = 145,
	RM_DRM_UNKNOWN_TYPE = 146,
	RM_DRM_INVALID_KEY = 147,
	RM_DRM_DECRYPTION_FAILED = 148,
	RM_DRM_EXPIRED_RENTAL = 149,
	RM_DRM_UNAUTHORIZED_USER = 150,
	RM_DRM_INVALID_FILE = 151,
	RM_ERROR_COMMAND_PENDING = 152,
	RM_ERROR_INVALID_COMMAND = 153,
	RM_ERROR_INVALID_MESSAGE = 154,
	RM_STATE_NOT_SUPPORTED = 155,
	RM_ERROR_PARSER = 156,
	RM_INSERT_OTHER_DISC = 157,
	RM_UNKNOWN_KEY = 158,
	RM_WMAPRO_NO_MORE_DATA = 159,
	RM_WMAPRO_SKIPFRAME = 160,
	RM_WMAPRO_NO_MORE_SAMPLES = 161,
	RM_ASF_WITHOUT_INDEX = 162,
	RM_ASF_SKIP_DATA = 163,
	RM_KEY_WHILE_WAITING_EOS = 164,
	RM_EOS = 165,
	RM_TIMEOUT = 166,
	RM_BUSY = 167,
	RM_CCFIFO_ALREADY_OPEN = 168,
	RM_DRM_PREVENTS_PLAYBACK = 169,
	RM_SKIP_DATA = 170,
	RM_NO_MORE_DATA = 171,
	RM_UNHANDLED_VIDEO_PCR_DISCONTINUITY = 172,
	RM_UNHANDLED_AUDIO_PCR_DISCONTINUITY = 173,
	RM_AUDIO_CODEC_NOT_SUPPORTED = 174,
	RM_AUDIO_MODE_NOT_SUPPORTED = 175,
	RM_VIDEO_CODEC_NOT_SUPPORTED = 176,
	RM_VIDEO_MODE_NOT_SUPPORTED = 177,
	RM_UNKNOWN_FILE_FORMAT = 178,
	RM_NOT_KNOWN = 179,
	RM_DRM_XSTART_FAILURE = 180,
	RM_DRM_XTASK_SYNC_FAILURE = 181,
	RM_DRM_XTASK_MISMATCH = 182,
	RM_DRM_VERSION_MISMATCH = 183,
	RM_OVERLAP_64MBYTE = 184,
	RM_XLOAD_DESTINATION_ERROR = 185,
	RM_XLOAD_DECRYPT_ERROR = 186,
	RM_XLOAD_VERIFY_ERROR = 187,
	RM_GUNZIP_ERROR = 188,
	RM_XBIND_WRONGLENGTH = 189,
	RM_NO_ACK = 190,
	RM_NO_RESPONSE = 191,
	RM_REMOTE_ERROR = 192,
} RMstatus;

/**
 * The names are the same as the exported symbols of em8xxx.ko
 */
typedef enum {
	Enumerator = 1,
	SystemBlock = 2,
	DisplayBlock = 3,
	DispOSDScaler = 4,
	DispHardwareCursor = 5,
	DispMainVideoScaler = 6,
	DispSubPictureScaler = 7,
	DispVCRMultiScaler = 8,
	DispGFXMultiScaler = 10,
	DispMainMixer = 12,
	DispColorBars = 14,
	DispRouting = 15,
	DispVideoInput = 16,
	DispGraphicInput = 17,
	DispDigitalOut = 18,
	DispMainAnalogOut = 19,
	DispComponentOut = 20,
	DispCompositeOut = 21,
	CPUBlock = 22,
	DemuxEngine = 23,
	MpegEngine = 25,
	VideoDecoder = 26,
	AudioEngine = 27,
	AudioDecoder = 28,
	CRCDecoder = 29,
	XCRCDecoder = 30,
	I2C = 31,
	GFXEngine = 32,
	MM = 33,
	SpuDecoder = 34,
	ClosedCaptionDecoder = 35,
	StreamCapture = 36,
	STC = 42,
	DemuxTask = 44,
	DemuxOutput = 45,
	DispVideoPlane = 50,
	DispHDSDConverter = 51,
} RMcategoryID;

#endif

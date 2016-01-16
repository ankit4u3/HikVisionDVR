/*	HCstruct.h */ 
 
#define DETECTPICLEFT 35 
#define DETECTPICTOP 15 
#define SCREEN_EDGE 30 
 
#define MINSPACE		(200*1024*1024) 
 
#define	CYCLE_TIMER			1		//network preview cycle timer 
#define	AUTORECORD_TIMER	2		//auto record timer 
#define	CHECKSERVER_TIMER	3		//adjust timer for DVR system time 
#define	FREESPACE_TIMER		4		//check HDD timer 
#define	FILEINTERVAL_TIMER	5		//record file interval timer 
#define PING_TIMER			6		//Led turned on/off timer 
#define UPGRADE_TIMER		7		//upgrade timer 
#define PLAY_TIMER			8		//timer for displaying status when local file playback 
#define RPSTATE_TIMER		9		//timer for remote file playback 
#define DOWNSTATE_TIMER		10		//download timer 
#define FORMAT_TIMER		11		//remote format HDD 
#define EVENTLOG_TIMER		12		//event log 
#define PLAYBYTIME_TIMER	13		//playback by time 
#define DOWNBYTIME_TIMER	14		//download by time 
 
#define DEFAULTBRIGHTNESS 6 
#define DEFAULTCONTRAST 6 
#define DEFAULTSATURATION  6 
#define DEFAULTHUE 6 
#define DEFAULTVOLUME 50 
 
#define MAXIPNUMBER 50			//MAX DVR number 
#define MAXCHANNUM 16			//MAX channel number each DVR 
#define MAXVIEWNUM	16			//MAX preview window number  
#define MAXNUMBER   512			//MAX preview channel number 
#define	MAXALARMIN	16			//MAX get DVR alarm information 
//#define MAXDISKNUM 8			//MAX HDD number each DVR	 
 
typedef struct{ 
	CString	m_csServerName; 
	CString m_csServerIP; 
	DWORD	m_dwServerIPvalue; 
	CString m_csServerMultiIP; 
	DWORD	m_dwServerMultiIPvalue; 
	CString m_csServerAdminName; 
	CString m_csServerAdminPasswd; 
	LONG	m_lServerID; 
	LONG	m_lStartChannel; 
	int		m_iServerChannelNumber;	//DVR channel number 
	WORD	m_wServerPort;			//DVR port 
	WORD	m_wServerType;			//1 ---- DVR, 2 --- ATMDVR, 3 --- DVS; 
	CString	m_csSerialNumber;		//serial number 
	DWORD	m_dwAlarmInNum;			//alarm input number 
	DWORD	m_dwAlarmOutNum;		//alarm output number 
	DWORD	m_dwDiskNum;			//HDD number 
	DWORD	m_dwDevSoftVersion;		//Firmware Version 
}SERVER_INFO, *PSERVER_INFO; 
 
typedef struct{ 
	CString	m_csIP;					//alarm DVR IP 
	CString	m_csUsername; 
	CString	m_csPassword; 
	LONG	m_lServerID; 
	int		m_iChannel;				//alarm related channel 
	int		m_iPortIndex;			// 
	int		m_iAlarmType; 
	int		m_iAlarmLevel; 
	WORD	m_wServerPort; 
	LONG	m_lNetIndex;			// 
}ALARM_INFO,*PALARM_INFO;			//this structure is used to receive alarm information 
 
typedef struct { 
	CString	m_csChanName;			//channel name 
	CString	m_csIP;					//DVR IP 
	DWORD	m_dwIPvalue; 
	int		m_iChannel;				//channel No. 
	DWORD	m_dwProtocol;			//network protocol 
	DWORD	m_dwAddress;			//PTZ address	(reserved) 
	CString m_csUser;				//username 
	CString m_csPassword;			//password 
	LONG	m_lServerID; 
	CString m_csMultiIP;			// 
	DWORD	m_dwMultiIPvalue; 
	DWORD	m_dwAlarmlevel;	 
	WORD	m_wServerport;			//DVR port 
	WORD	m_wJMQtype;				//PTZ type (reserved) 
	BOOL	m_bChoosed;				// 
	int		m_iServerNum;			//DVR index 
	int		m_iChannelNum;			//channel index 
	int		m_iSequence;			//preview sequence 
//	BOOL	m_bWiper;				// 
//	BOOL	m_bLight;				// 
}IP_INFO,*PIP_INFO; 
 
typedef struct{ 
	UINT	m_iBrightness;				//1-10 
	UINT	m_iContrast;				//1-10 
	UINT	m_iSaturation;				//1-10 
	UINT	m_iHue;						//1-10 
}VIDEO_INFO, *PVIDEO_INFO; 
 
typedef struct{ 
    WORD	m_iStartHour; 
	WORD	m_iStartMinute; 
	WORD	m_iStopHour; 
	WORD	m_iStopMinute; 
	WORD	m_iStartTime; 
	WORD	m_iStopTime; 
}CLIENTRECORDTIME,*PCLIENTRECORDTIME; 
 
typedef struct 
{ 
	BOOL		m_bCyclePlay;				//cycle preview 
	int			m_iCycleTime;				//cycle time 
	BOOL		m_bUseCard;					//use decode card 
	BOOL		m_bNTSC;					//FALSE£∫Pal÷∆  TRUE£∫NTSC÷∆ 
	BOOL		m_bAutoRecord;				// 
	BOOL		m_bCycleRecord;				// 
	int			m_iStartRecordDriver;		// 
	int			m_iEndRecordDriver;			// 
	int			m_iRecordFileInterval;		// 
	CLIENTRECORDTIME	m_ClientRecordTime[7][4]; 
	CString		m_csClientRecordPath;		// 
	BOOL		m_bAllDiskFull;				//	 
	CString		m_csDownLoadPath;			// 
	CString		m_csPictureSavePath;		// 
	CString		m_csLogSavePath;			//	 
	BOOL		m_bPlaying;					// 
	BOOL		m_bCycling;					// 
	BOOL		m_bPaused;					// 
	BOOL		m_bNextPage;				// 
	BOOL		m_bFrontPage;				// 
	BOOL		m_bEnlarged;				// 
	BOOL		m_bFullScreen;				// 
	BOOL		m_bMultiScreen;				// 
	BOOL		m_bPlaySound[MAXVIEWNUM];	//	 
	int			m_iAlarmHandle[MAXIPNUMBER];	//	 
	VIDEO_INFO	m_VideoInfo[MAXVIEWNUM];		// 
	UINT		m_Volume;						// 
	BOOL		m_bCheckServerTime;			// 
	long		m_iCheckServerTime;			// 
}CLIENTPARAM, *PCLIENTPARAM;
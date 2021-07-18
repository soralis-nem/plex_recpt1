#ifndef		__PT1_IOCTL_H__
#define		__PT1_IOCTL_H__
/***************************************************************************/
/* ?????�P�i?�����c�y�^�w�q                                          */
/***************************************************************************/
typedef	struct	_frequency{
	int		frequencyno ;			// �P�i?????�f?
	int		slot ;					// ????�f?���[��??�P�i?
}FREQUENCY;

/***************************************************************************/
/* IOCTL�w�q                                                               */
/***************************************************************************/
#define		SET_CHANNEL	_IOW(0x8D, 0x01, FREQUENCY)
#define		START_REC	_IO(0x8D, 0x02)
#define		STOP_REC	_IO(0x8D, 0x03)
#define		GET_SIGNAL_STRENGTH	_IOR(0x8D, 0x04, int *)
#define		LNB_ENABLE	_IOW(0x8D, 0x05, int)
#define		LNB_DISABLE	_IO(0x8D, 0x06)
#endif
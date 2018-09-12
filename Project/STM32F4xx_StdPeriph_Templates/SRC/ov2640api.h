#ifndef __ov2640_api_h__
#define __ov2640_api_h__


//JPEG_BUFFER_LENGTH

extern unsigned char JpegBuffer[];
extern unsigned int JpegDataCnt;				//ͼƬ����������

void alloc_jpegbuffer(void);
void free_jpegbuffer(void);

void ov2640_poweron(void);								//��OV2640����ͷ
void ov2640_poweroff(void);							//�ر�OV2640����ͷ

int ov2640_init(void);									//��ʼ��OV2640����ͷ,���� 0 ����ɹ������� -1����ʧ��

int ov2640_read(void);							//���ղɼ�ͼ�񣬲ɼ����ͼ��洢��ͼƬ��������

void _config_mco(void);

//int read_photo_ov2640(int index);
//unsigned char* read_imgbuffer(int index  , int *imglen , unsigned int *paizhaotime);
//void __write_img_2_flash(int index , unsigned char *buffer , int buflen , unsigned int paizhaoshijian);
//unsigned char* read_imgbuffer(int index  , int *imglen , unsigned int *paizhaotime);

/*
example : 

int main(int argc , char ** argv)
{
	ov2640_poweron(); //������ͷ
	ov2640_init();	//��ʼ������ͷ
	
	ov2640_read();	// ��ȡͼƬ
	
	ov2640_poweroff(); //�ر�����ͷ��Դ
	//
	
	//��ͼƬ���д���
	JpegBuffer
	JpegDataCnt
}

*/

#endif


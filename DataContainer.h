#pragma once
#include <mutex>
#include <vector>

class DataContainer {
private:

	DataContainer() {};

	static bool instanceFlag;

	static DataContainer* instance;

	//
	// UPPER to PCU (�÷����� ������ ��)
	//
	int m_UtoP_AorM = 0;
	int m_UtoP_E_STOP = 0;
	int m_UtoP_GEAR = 0;
	int m_UtoP_SPEED = 0;
	int m_UtoP_STEER = 0;
	int m_UtoP_BRAKE = 0;
	int m_UtoP_ALIVE = 0;

	//
	// PCU to UPPER (�÷������� �޾ƿ��� ��)
	//
	int m_PtoU_AorM = 0;
	int m_PtoU_E_STOP = 0;
	int m_PtoU_GEAR = 0;
	int m_PtoU_SPEED = 0;
	int m_PtoU_STEER = 0;
	int m_PtoU_BRAKE = 0;
	long m_PtoU_ENC = 0;
	int m_PtoU_ALIVE = 0;


	std::mutex mtx_UtoP_AorM;
	std::mutex mtx_UtoP_E_STOP;
	std::mutex mtx_UtoP_GEAR;
	std::mutex mtx_UtoP_SPEED;
	std::mutex mtx_UtoP_STEER;
	std::mutex mtx_UtoP_BRAKE;
	std::mutex mtx_UtoP_ALIVE;

	std::mutex mtx_PtoU_AorM;
	std::mutex mtx_PtoU_E_STOP;
	std::mutex mtx_PtoU_GEAR;
	std::mutex mtx_PtoU_SPEED;
	std::mutex mtx_PtoU_STEER;
	std::mutex mtx_PtoU_BRAKE;
	std::mutex mtx_PtoU_ENC;
	std::mutex mtx_PtoU_ALIVE;

	//
	// ���� �� �÷��� ���� ���� ����
	//

	int m_platform_status = 0;
	int m_lidar_status = 0;
	int m_camera1_status = 0;
	int m_gps_status = 0;

	std::mutex mtx_platform_status;
	std::mutex mtx_lidar_status;
	std::mutex mtx_camera1_status;
	std::mutex mtx_camera2_status;
	std::mutex mtx_gps_status;
	
	//
	//���̴�
	//

	//lidar �ڵ� ���� ���� �ʿ�
	//m_lidar_obj[100];

	//
	//ī�޶�1: ����� (���� �ν�) 
	//
	int m_camera1_steer;

	std::mutex mtx_camera1_steer;

	//
	//ī�޶�2: ���� (������) 
	//

	//
	//gps:
	//
	int m_missiontrigger = 0;
	int m_gps_geofence = 0;

	std::mutex mtx_missiontrigger;
	std::mutex mtx_gps_geofence;

public:

	//�ν��Ͻ� ��ȯ
	static DataContainer* getInstance();

	//�Ҹ���
	virtual ~DataContainer() {
		instanceFlag = false;
	}
	
	//
	//���� �� �÷��� ���� ����
	//

	int getValue_platform_status();
	void setValue_platform_status(int value);
	void updateValue_platform_status();
	int getValue_lidar_status();
	void setValue_lidar_status(int value);
	void updateValue_lidar_status();
	int getValue_camera1_status();
	void setValue_camera1_status(int value);
	void updateValue_lidar_status();
	int getValue_gps_status();
	void setValue_gps_status(int value);
	void updateValue_gps_status();

	//
	// �÷��� ������
	//

	// UPPER to PCU (�÷����� ������ ��)
	int getValue_UtoP_AorM();
	int getValue_UtoP_E_STOP();
	int getValue_UtoP_GEAR();
	int getValue_UtoP_SPEED();
	int getValue_UtoP_STEER();
	int getValue_UtoP_BRAKE();
	int getValue_UtoP_ALIVE();

	void setValue_UtoP_AorM(int value);
	void setValue_UtoP_E_STOP(int value);
	void setValue_UtoP_GEAR(int value);
	void setValue_UtoP_SPEED(int value);
	void setValue_UtoP_STEER(int value);
	void setValue_UtoP_BRAKE(int value);
	void setValue_UtoP_ALIVE(int value);

	// ���� ��°�� ��������, �����ϴ� �Լ�. ������� (AorM, E_STOP, GEAR, SPEED, STEER, BRAKE)
	std::vector<int> getValue_UtoP_list();
	void setValue_UtoP_list(int AorM, int E_STOP, int GEAR, int SPEED, int STEER, int BRAKE);

	// PCU to UPPER (�÷������� �޾ƿ��� ��)
	int getValue_PtoU_AorM();
	int getValue_PtoU_E_STOP();
	int getValue_PtoU_GEAR();
	int getValue_PtoU_SPEED();
	int getValue_PtoU_STEER();
	int getValue_PtoU_BRAKE();
	long getValue_PtoU_ENC();
	int getValue_PtoU_ALIVE();

	void setValue_PtoU_AorM(int value);
	void setValue_PtoU_E_STOP(int value);
	void setValue_PtoU_GEAR(int value);
	void setValue_PtoU_SPEED(int value);
	void setValue_PtoU_STEER(int value);
	void setValue_PtoU_BRAKE(int value);
	void setValue_PtoU_ENC(long value);
	void setValue_PtoU_ALIVE(int value);

	// ���� ��°�� ��������, �����ϴ� �Լ�. ������� (AorM, E_STOP, GEAR, SPEED, STEER, BRAKE, ENC)
	std::vector<int> getValue_PtoU_list();
	void setValue_PtoU_list(int AorM, int E_STOP, int GEAR, int SPEED, int STEER, int BRAKE, long ENC);

	// UPPER to PCU or PCU to UPPER �� �����ֱ�
	void show_UtoP();
	void show_PtoU();

	//
	//	���̴�
	//
	// ���� �ʿ�
	/*void setData_lidar_object(object* objL, int num);
	void getData_lidar_object(object* objM);
	void deleteData_lidar_object();*/

	//
	//	ī�޶�1
	//

	int getValue_camera1_steer();
	void setValue_camera1_steer(int value);

	//
	//	GPS
	//

	int get_missiontrigger();
	void set_missiontrigger(int value);

	int get_gps_geofence();
	void set_gps_geofence(int value);

};
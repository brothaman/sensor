#pragma  once

#ifndef _SENSOR_H_
#define _SENSOR_H_

/**
 * Sensor
 *
 * @brief boiler plate container for sensor object
 */
class Sensor
{
	public:
		struct ID
		{
			unsigned char guid[33];
		};
	private:
		unsigned char uuid[33];
		
};

#endif

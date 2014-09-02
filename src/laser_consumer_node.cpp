/*
 * laserConsumer.cpp
 *
 *  Created on: 4 Jul, 2014
 *      Author: eric97
 */

#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>

void consumeLaserData(const sensor_msgs::LaserScan::ConstPtr& scan)
{
	ROS_INFO_STREAM("Laser reading"<< scan->ranges[30] << scan->ranges[300]);
	ROS_INFO_STREAM("Testing");
}

int main(int argc, char **argv) {
	ros::init(argc, argv, "laserConsumer");
	ros::NodeHandle nh;

	// Create a subscriber object
	ros::Subscriber scanSub = nh.subscribe("/scan", 1000, &consumeLaserData);

	ros::spin();
}

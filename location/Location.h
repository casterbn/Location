//
// Created by yangcheng on 2019/1/14.
//


#include "../system/Status.h"
#include "Eigen/Dense"

#ifndef LOCATION_LOCATION_H
#define LOCATION_LOCATION_H

class Location {
public:

    // 状态容器
    routing::Status status;

    Location();
    ~Location();

    // 定位,计算当前位置
    void PredictCurrentPosition(Eigen::Vector3d &gyro_data, Eigen::Vector3d &acc_data, Eigen::Vector3d &mag_data,
                                Eigen::VectorXd &gps_data, Eigen::Vector3d &g_data, Eigen::Vector3d &ornt_data,
                                routing::Status *status);

    // 获取当前位置
    routing::Position GetCurrentPosition();

    // 获取当前方位角
    double GetCurrentBearing();

};


#endif //LOCATION_LOCATION_H

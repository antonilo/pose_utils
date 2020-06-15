#pragma once

#include <kindr/minimal/quat-transformation.h>

#include "pose_utils/aligned.h"

namespace pose_utils {

typedef kindr::minimal::QuatTransformation Pose;
typedef kindr::minimal::RotationQuaternion Rotation;
typedef Eigen::Vector3d Position;

using PoseVec = Aligned<std::vector, Pose>;
using PositionVec = Aligned<std::vector, Position>;
using RotationVec = Aligned<std::vector, Rotation>;

}  // namespace pose_utils
namespace rpg = pose_utils;

#include <mrs_uav_state_estimators/estimators/state/state_generic.h>

namespace mrs_open_vins_estimator_plugin
{

const char estimator_name[] = "open_vins_2";
const bool is_core_plugin = false;

class OpenVins2 : public rclcpp::Node, public mrs_uav_state_estimators::StateGeneric {
public:
  OpenVins2() : rclcpp::Node(estimator_name), mrs_uav_state_estimators::StateGeneric(estimator_name, is_core_plugin) {
    RCLCPP_INFO(get_logger(), "OpenVins 2");
  }

  ~OpenVins2(void) {
  }
};

}  // namespace open_vins

// #include <rclcpp_components/register_node_macro.hpp>
// RCLCPP_COMPONENTS_REGISTER_NODE(open_vins::OpenVins);
#include <pluginlib/class_list_macros.hpp>
PLUGINLIB_EXPORT_CLASS(mrs_open_vins_estimator_plugin::OpenVins2, mrs_uav_managers::StateEstimator)

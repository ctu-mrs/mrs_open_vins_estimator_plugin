#include <mrs_uav_state_estimators/estimators/state/state_generic.h>

namespace mrs_open_vins_estimator_plugin
{

const char estimator_name[] = "open_vins";
const bool is_core_plugin = false;

class OpenVins : public rclcpp::Node, public mrs_uav_state_estimators::StateGeneric {
public:
  OpenVins() : rclcpp::Node(estimator_name), mrs_uav_state_estimators::StateGeneric(estimator_name, is_core_plugin) {
    RCLCPP_INFO(get_logger(), "OpenVins 1");
  }

  ~OpenVins(void) {
  }
};

}  // namespace open_vins

// #include <rclcpp_components/register_node_macro.hpp>
// RCLCPP_COMPONENTS_REGISTER_NODE(open_vins::OpenVins);
#include <pluginlib/class_list_macros.hpp>
PLUGINLIB_EXPORT_CLASS(mrs_open_vins_estimator_plugin::OpenVins, mrs_uav_managers::StateEstimator)
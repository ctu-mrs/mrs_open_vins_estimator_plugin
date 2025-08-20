#include <mrs_uav_state_estimators/estimators/state/state_generic.h>

namespace open_vins
{

const char estimator_name[] = "open_vins";
const bool is_core_plugin = false;

class OpenVins : public rclcpp::Node, public mrs_uav_state_estimators::StateGeneric {
public:
  OpenVins(rclcpp::NodeOptions options) : rclcpp::Node(estimator_name, options), mrs_uav_state_estimators::StateGeneric(estimator_name, is_core_plugin) {
  }

  ~OpenVins(void) {
  }
};

}  // namespace open_vins

#include <rclcpp_components/register_node_macro.hpp>
RCLCPP_COMPONENTS_REGISTER_NODE(open_vins::OpenVins);

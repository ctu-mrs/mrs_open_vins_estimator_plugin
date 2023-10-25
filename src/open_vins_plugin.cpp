#include <mrs_uav_state_estimators/estimators/state/state_generic.h>

namespace open_vins
{

const char estimator_name[] = "open_vins";
const bool is_core_plugin = false;

class OpenVins : public mrs_uav_state_estimators::StateGeneric {
public:
  OpenVins() : mrs_uav_state_estimators::StateGeneric(estimator_name, is_core_plugin) {
  }

  ~OpenVins(void) {
  }
};

}  // namespace open_vins

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(open_vins::OpenVins, mrs_uav_managers::StateEstimator)


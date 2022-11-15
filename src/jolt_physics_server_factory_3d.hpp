#pragma once

#include "jolt_physics_server_3d.hpp"

class JoltPhysicsServerFactory3D : public Object {
	GDCLASS_SILENT(JoltPhysicsServerFactory3D, Object) // NOLINT

protected:
	// NOLINTNEXTLINE(readability-identifier-naming)
	static void _bind_methods() {
		ClassDB::bind_method(D_METHOD("create_server"), &JoltPhysicsServerFactory3D::create_server);
	}

public:
	JoltPhysicsServer3D* create_server() { return memnew(JoltPhysicsServer3D); }
};

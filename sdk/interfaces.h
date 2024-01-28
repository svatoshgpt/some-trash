#pragma once

#include <iostream>
#include <d3dx9.h>

#include "../dependencies/memory/memory.h"
#include "../dependencies/xorstr/xorstr.h"

#include "math/vector.h"
#include "math/quaternion.h"
#include "math/radian_euler.h"
#include "math/math.h"

#include "source-sdk/definitions.h"
#include "source-sdk/c_engine_client.h"
#include "source-sdk/studio.h"
#include "source-sdk/engine/c_collideable.h"
#include "source-sdk/engine/c_render.h"
#include "source-sdk/engine/c_model_info.h"
#include "source-sdk/entity/c_base_combat_weapon.h"
#include "source-sdk/entity/i_client_renderable.h"
#include "source-sdk/entity/c_base_entity.h"
#include "source-sdk/vgui/i_panel.h"
#include "source-sdk/vgui/c_engine_vgui.h"
#include "source-sdk/client/c_view_setup.h"
#include "source-sdk/client/i_view_render.h"
#include "source-sdk/client/i_render_view.h"
#include "source-sdk/server/c_entity_list.h"
#include "source-sdk/materialsystem/i_texture.h"
#include "source-sdk/materialsystem/c_material_system.h"
#include "source-sdk/client/c_hl_client.h"
#include "source-sdk/tier0/platform.h"
#include "source-sdk/tier1/checksum_crc.h"
#include "source-sdk/shared/c_user_cmd.h"
#include "source-sdk/client/c_input.h"
#include "source-sdk/c_global_vars.h"
#include "source-sdk/i_engine_trace.h"

namespace interfaces
{
	void initialize();

	inline c_engine_client*		engine;
	inline i_panel*				panel;
	inline i_render_view*		render_view;
	inline c_entity_list*		entity_list;
	inline c_material_system*	material_system;
	inline c_hl_client*			hl_client;
	inline c_engine_vgui*		engine_vgui;
	inline c_model_info*		model_info;
	inline i_engine_trace*		engine_trace;
	inline i_view_render*		view_render;
	inline c_input*				input;
	inline c_render*			render;
	inline c_global_vars*		global_vars;
}
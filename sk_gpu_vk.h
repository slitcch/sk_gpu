#pragma once

#define VK_USE_PLATFORM_WIN32_KHR
#include <vulkan/vulkan.h>

///////////////////////////////////////////

typedef struct skr_buffer_t {
	skr_use_         use;
	skr_buffer_type_ type;
};

typedef struct skr_mesh_t {
} skr_mesh_t;

typedef struct skr_shader_t {
	skr_shader_  type;
} skr_shader_t;

typedef struct skr_shader_program_t {
} skr_shader_program_t;

typedef struct skr_tex_t {
	int32_t width;
	int32_t height;
	skr_use_                  use;
	skr_tex_type_             type;
	skr_tex_fmt_              format;
	skr_mip_                  mips;

	VkImage     texture;
	VkImageView view;
} skr_tex_t;

typedef struct skr_swapchain_t {
	int32_t width;
	int32_t height;
	skr_tex_t target;
	skr_tex_t depth;

	VkSurfaceFormatKHR format;
	VkSwapchainKHR     swapchain;
	//VkFence           *fence;
	uint32_t           img_count;
	VkImage           *imgs;
	skr_tex_t         *texutres;
	uint32_t           img_curr;
	VkExtent2D         extents;
} skr_swapchain_t;

typedef struct skr_platform_data_t {

} skr_platform_data_t;
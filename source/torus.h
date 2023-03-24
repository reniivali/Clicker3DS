#pragma once

typedef struct
{
	float x, y, z;
} vertex;

typedef struct
{
	vertex vert;
	float tex[2];
	vertex norm;
} vertexObjTex;

typedef struct
{
	vertex vert;
	vertex norm;
} vertexObj;

extern const vertexObj vertex_list[432];
extern const vertexObj sphere[960];
extern const vertexObjTex toruses[6912];
extern const vertexObj pose[7512];
#define vertex_list_count (sizeof(vertex_list)/sizeof(vertex_list[0]))
#define sphere_list_count (sizeof(sphere)/sizeof(sphere[0]))
#define toruses_list_count (sizeof(toruses)/sizeof(toruses[0]))
#define pose_list_count (sizeof(pose)/sizeof(pose[0]))

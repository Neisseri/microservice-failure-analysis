#ifndef __AGENT_DEFS_H__
#define __AGENT_DEFS_H__

#include "agent_structs.h"
#include "kernel_structs.h"

#define RING_BUFFER_POLL_TIMEOUT    100         // ms
#define RING_BUFFER_PATH            "/sys/fs/bpf/gearbox/rb"

#define PID_MAP_PATH                "/sys/fs/bpf/gearbox/pid_map"

#define BPF_TCP_INT_PATH            "/sys/fs/bpf/gearbox/tcp_int"
#define BPF_TCP_INT_NEW_PATH        "/sys/fs/bpf/gearbox/link_tcp_int"

#define CGROUP_PATH                 "/sys/fs/cgroup/"

#define MAX_POINT_CNT               8000        
#define MAX_METRIC_CNT              MAX_POINT_CNT
#define MAX_EDGE_CNT                4000

#define POINT_BUFFER_SIZE           MAX_POINT_CNT * sizeof(struct point)
#define METRIC_BUFFER_SIZE          MAX_METRIC_CNT * sizeof(struct metrics)
#define EDGE_BUFFER_SIZE            MAX_EDGE_CNT * sizeof(struct edge_for_path)

#endif // __AGENT_DEFS_H__
#pragma once

/*
 * Platform overrides for the default configuration settings in the
 * memfault-firmware-sdk. Default configuration settings can be found in
 * "<NCS folder>/modules/lib/memfault-firmware-sdk/components/include/memfault/default_config.h"
 */

/* Uncomment the definition below to override the default setting for
 * heartbeat interval. This will prepare the captured metric data for upload
 * to Memfault cloud at the specified interval.
 */

#define MEMFAULT_METRICS_HEARTBEAT_INTERVAL_SECS 3600
#define MEMFAULT_DATA_EXPORT_CHUNK_MAX_LEN 1000

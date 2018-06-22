/* SPDX-License-Identifier: GPL-2.0 */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM msi_lat

#if !defined(_TRACE_MSI_LAT_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_MSI_LAT_H

#include <linux/tracepoint.h>

TRACE_EVENT(msi_lat_samp0,
	    TP_PROTO(int irq),
	    TP_ARGS(irq),

	    TP_STRUCT__entry(
			     __field(int, irq)
			     ),

	    TP_fast_assign(
			   __entry->irq = irq;
			   ),

	    TP_printk("irq=%d",
		      __entry->irq)
);

TRACE_EVENT(msi_lat_samp1,
	    TP_PROTO(int irq),
	    TP_ARGS(irq),

	    TP_STRUCT__entry(
			     __field(int, irq)
			     ),

	    TP_fast_assign(
			   __entry->irq = irq;
			   ),

	    TP_printk("irq=%d",
		      __entry->irq)
);

TRACE_EVENT(msi_lat,
	    TP_PROTO(int irq, unsigned long duration),
	    TP_ARGS(irq, duration),

	    TP_STRUCT__entry(
			     __field(int, irq)
			     __field(unsigned long, duration)
			     ),

	    TP_fast_assign(
			   __entry->irq = irq;
			   __entry->duration = duration;
			   ),

	    TP_printk("irq=%d, duration=%lu",
		      __entry->irq,
		      __entry->duration)
);

#endif /* _TRACE_MSI_LAT_H */

/* This part must be outside protection */
#include <trace/define_trace.h>

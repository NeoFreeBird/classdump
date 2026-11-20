//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFSTracing11ActiveTrace_h
#define _TtC10TFSTracing11ActiveTrace_h
@import Foundation;

@class TFSTracing.EventDrivenTrace, TFSTracing.SpanAnalyzer, TFSTracing.SpanContext ?, TFSTracing.Tracer, _$sSDySS TFSTracing.SpanContext, _$sSS, _$sSa -> TFSTracing.TraceMetadata ?, _TtCs12_SwiftObject;

@interface TFSTracing.ActiveTrace : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSTracing.EventDrivenTrace eventDrivenTrace;
    TFSTracing.SpanAnalyzer spanAnalyzer;
    TFSTracing.Tracer tracer;
    Swift.Array -> TFSTracing.TraceMetadata ? pendingMetadata;
    TFSTracing.SpanContext ? rootSpanContext;
    Swift.Dictionary empty-list Swift.String TFSTracing.SpanContext spanContexts;
    Swift.String traceType;
}

@end

#endif /* _TtC10TFSTracing11ActiveTrace_h */

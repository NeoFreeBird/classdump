//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFSTracing4Span_h
#define _TtC10TFSTracing4Span_h
@import Foundation;

@class Swift.Bool, TFSTracing.ClientSpanMessageV1, TFSTracing.Span ?, TFSTracing.Span.TraceInfo, _$sSa -> TFSTracing.Span, _$sShySSG, _TtCs12_SwiftObject;

@interface TFSTracing.Span : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> TFSTracing.Span childSpans;
    Swift.Bool isCancelled;
    TFSTracing.Span ? parentSpan;
    TFSTracing.ClientSpanMessageV1 dataModel;
    Swift.Set<Swift.String> expectedChildNames;
    TFSTracing.Span.TraceInfo traceInfo;
}

@end

#endif /* _TtC10TFSTracing4Span_h */

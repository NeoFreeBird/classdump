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

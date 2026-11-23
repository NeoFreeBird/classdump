//
#ifndef _TtC10TFSTracing13TraceReporter_h
#define _TtC10TFSTracing13TraceReporter_h
@import Foundation;

@class TFSTracing.TraceReportingConfiguration ?, XUtilities.UnfairQueue, _$sSa -> TFSTracing.ClientSpanMessageV1, _TtCs12_SwiftObject;

@interface TFSTracing.TraceReporter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSTracing.TraceReportingConfiguration ? config;
    Swift.Array -> TFSTracing.ClientSpanMessageV1 eventBuffer;
    XUtilities.UnfairQueue unfairQueue;
}

@end

#endif /* _TtC10TFSTracing13TraceReporter_h */

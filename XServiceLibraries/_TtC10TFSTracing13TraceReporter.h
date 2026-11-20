//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

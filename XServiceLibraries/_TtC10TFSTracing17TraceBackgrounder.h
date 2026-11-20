//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFSTracing17TraceBackgrounder_h
#define _TtC10TFSTracing17TraceBackgrounder_h
@import Foundation;

@class XUtilities.UnfairQueue, _$sSo11NSHashTableC TFSTracing.Span, _$sySa -> TFSTracing.Span _$sGc, _TtCs12_SwiftObject;

@interface TFSTracing.TraceBackgrounder : Swift._SwiftObject { // (Swift)
    /* instance variables */
     empty-list Swift.Array -> TFSTracing.Span _$sGc abortSpans;
     empty-list Swift.Array -> TFSTracing.Span _$sGc cancelSpans;
    XUtilities.UnfairQueue queue;
    __C.NSHashTable TFSTracing.Span rootSpansToAbort;
    __C.NSHashTable TFSTracing.Span rootSpansToCancel;
}

/* instance methods */
- (void)appDidEnterBackground:(id)background;

@end

#endif /* _TtC10TFSTracing17TraceBackgrounder_h */

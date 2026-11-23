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

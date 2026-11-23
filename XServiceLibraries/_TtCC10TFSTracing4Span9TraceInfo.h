//
#ifndef _TtCC10TFSTracing4Span9TraceInfo_h
#define _TtCC10TFSTracing4Span9TraceInfo_h
@import Foundation;

@class Swift.Bool, TFSTracing.TraceSamplingPolicy, _$sSDySS TFSUtilitiesSwift.SignpostRecorder, _$sSS, _TtCs12_SwiftObject;

@interface TFSTracing.Span.TraceInfo : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool hasBeenReported;
    Swift.Bool isReportingAllowed;
    Swift.String identifier;
    TFSTracing.TraceSamplingPolicy samplingPolicy;
    Swift.Dictionary empty-list Swift.String TFSUtilitiesSwift.SignpostRecorder signpostRecorders;
}

@end

#endif /* _TtCC10TFSTracing4Span9TraceInfo_h */

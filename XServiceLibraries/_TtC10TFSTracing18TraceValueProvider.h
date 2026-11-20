//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFSTracing18TraceValueProvider_h
#define _TtC10TFSTracing18TraceValueProvider_h
@import Foundation;

@class XUtilities.UnfairQueue, _$ss5Int32VMn, _TtCs12_SwiftObject;

@interface TFSTracing.TraceValueProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XUtilities.UnfairQueue messageSequenceNumberQueue;
    nominal type descriptor for Swift.Int32 spanId;
    XUtilities.UnfairQueue spanIdQueue;
}

@end

#endif /* _TtC10TFSTracing18TraceValueProvider_h */

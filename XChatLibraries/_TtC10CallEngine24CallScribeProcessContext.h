//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine24CallScribeProcessContext_h
#define _TtC10CallEngine24CallScribeProcessContext_h
@import Foundation;

@class CallEngine.CallScribeBatteryMonitor, _$s10Foundation4DateVMn ?, _$s10XUtilities11UnfairQueueCMn, _$sSS, _$sSaySo8NSObject_pG, _$ss5Int64VMn ?, _TtCs12_SwiftObject, __C.State ?;

@interface CallEngine.CallScribeProcessContext : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String launchID;
    nominal type descriptor for Swift.Int64 ? processStartContinuousMs;
    nominal type descriptor for XUtilities.UnfairQueue queue;
    CallEngine.CallScribeBatteryMonitor batteryMonitor;
    __C.State ? applicationState;
    nominal type descriptor for Foundation.Date ? enteredBackgroundAt;
    [__C.NSObject] observers;
}

@end

#endif /* _TtC10CallEngine24CallScribeProcessContext_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11TwitterHome38HomeTimelineFilterAutoResetCoordinator_h
#define _TtC11TwitterHome38HomeTimelineFilterAutoResetCoordinator_h
@import Foundation;

@class _$s10Foundation4DateVMn ?, _$s10Foundation4DateVMn _$sSgyc, _$sSbyc, _$sSiyc, _$sSo7NSTimerCSg, _$syyc, _TtCs12_SwiftObject;

@interface TwitterHome.HomeTimelineFilterAutoResetCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    () -> Swift.Bool isFilterActive;
    nominal type descriptor for Foundation.Date _$sSgyc filterActivatedAt;
    () -> Swift.Int resetPeriodMinutes;
    () -> Swift.Bool isBackgroundResetMode;
    () -> () performReset;
    nominal type descriptor for Foundation.Date ? backgroundEnteredAt;
    __C.NSTimer? wallClockTimer;
}

@end

#endif /* _TtC11TwitterHome38HomeTimelineFilterAutoResetCoordinator_h */

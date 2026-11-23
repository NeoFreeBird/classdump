//
#ifndef _TtC6Stamps13MotionManager_h
#define _TtC6Stamps13MotionManager_h
@import Foundation;

@class _$s10Foundation4DateVMn, _$s7Combine9PublishedVMn _$sSd, _$sSd5pitch_Sd4rollt, _$sSo10CMAttitudeCSg, _$sSo15CMMotionManagerC, _TtCs12_SwiftObject;

@interface Stamps.MotionManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Swift.Double _relativePitch;
    nominal type descriptor for Combine.Published Swift.Double _relativeRoll;
    __C.CMMotionManager motionManager;
    __C.CMAttitude? initialAttitude;
    (pitch: Swift.Double, roll: Swift.Double) attitudeSnapshot;
    nominal type descriptor for Foundation.Date lastCalibrationCheck;
}

@end

#endif /* _TtC6Stamps13MotionManager_h */

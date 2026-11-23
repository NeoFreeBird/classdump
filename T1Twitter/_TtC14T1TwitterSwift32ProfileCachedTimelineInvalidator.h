//
#ifndef _TtC14T1TwitterSwift32ProfileCachedTimelineInvalidator_h
#define _TtC14T1TwitterSwift32ProfileCachedTimelineInvalidator_h
@import Foundation;

@class T1TwitterSwift.ProfileTimelineLiveInjectionRegistry, _$sSDySS T1TwitterSwift.ProfileCachedTimelineInvalidator.AccountObservation, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface T1TwitterSwift.ProfileCachedTimelineInvalidator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.ProfileTimelineLiveInjectionRegistry registry;
    __C.NSLock lock;
    Swift.Dictionary empty-list Swift.String T1TwitterSwift.ProfileCachedTimelineInvalidator.AccountObservation observations;
}

@end

#endif /* _TtC14T1TwitterSwift32ProfileCachedTimelineInvalidator_h */

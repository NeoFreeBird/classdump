//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift19ImmersiveSwipeNudge_h
#define _TtC14T1TwitterSwift19ImmersiveSwipeNudge_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.ImmersiveCardNavigator ?, T1TwitterSwift.ImmersiveSwipeNudge.NudgeType ?, _$s8Dispatch0A8WorkItemCMn ?, _$sSbycSg, _$sSi, _TtCs12_SwiftObject;

@interface T1TwitterSwift.ImmersiveSwipeNudge : Swift._SwiftObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveCardNavigator ? cardNavigator;
    (() -> Swift.Bool)? isNudgeBlocked;
    nominal type descriptor for Dispatch.DispatchWorkItem ? nudgeTimer;
    T1TwitterSwift.ImmersiveSwipeNudge.NudgeType ? currentNudgeType;
    Swift.Int currentCardIndex;
    Swift.Int itemCount;
    Swift.Bool waitingForNextCard;
}

@end

#endif /* _TtC14T1TwitterSwift19ImmersiveSwipeNudge_h */

//
#ifndef _TtC7XSports28SportsLiveActivityController_h
#define _TtC7XSports28SportsLiveActivityController_h
@import Foundation;

@class Swift.Bool, _$sSD -> _$s18SportsLiveActivity0abC10AttributesVMn _$s10Foundation4UUIDVMn, _$sScS -> XSports.SportsLiveActivityController.TokenEvent, _$sScS12ContinuationVMn XSports.SportsLiveActivityController.TokenEvent _$s_ ->, _$sShySSG, _TtCs12_SwiftObject;

@interface XSports.SportsLiveActivityController : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.AsyncStream -> XSports.SportsLiveActivityController.TokenEvent tokenEvents;
    nominal type descriptor for Swift.AsyncStream.Continuation XSports.SportsLiveActivityController.TokenEvent  first-element-marker  -> tokenContinuation;
    Swift.Bool isObserving;
    Swift.Set<Swift.String> observedActivityIDs;
    Swift.Dictionary -> nominal type descriptor for SportsLiveActivity.SportsLiveActivityAttributes nominal type descriptor for Foundation.UUID pendingStarts;
}

@end

#endif /* _TtC7XSports28SportsLiveActivityController_h */

//
#ifndef _TtC11TwitterHome24URTHoistingDetectionTask_h
#define _TtC11TwitterHome24URTHoistingDetectionTask_h
@import Foundation;

@class NSObject, TwitterHome.URTHoistEventScriber, _$s14TFSTwitterCore11URTTimelineCMn, _$s14TFSTwitterCore24URTSeenTweetIDCollectionMp, _$s9URTModels28URTEntryIDVisibilityProviderMp, _$sShySSG, __C.TFSTwitterStreamLoadSource ?;

@interface TwitterHome.URTHoistingDetectionTask : NSObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSTwitterCore.URTTimeline oldState;
    Swift.Set<Swift.String> initialVisibleEntryIDs;
    nominal type descriptor for TFSTwitterCore.URTTimeline newState;
    TwitterHome.URTHoistEventScriber hoistEventScriber;
    protocol descriptor for URTModels.URTEntryIDVisibilityProvider visibilityTracker;
    protocol descriptor for TFSTwitterCore.URTSeenTweetIDCollection allSeenTweetIDs;
    __C.TFSTwitterStreamLoadSource ? loadSource;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC11TwitterHome24URTHoistingDetectionTask_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef MTMediaTabFeatureAccess_h
#define MTMediaTabFeatureAccess_h
@import Foundation;

@class NSObject;

@interface MTMediaTabFeatureAccess : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 featureSwitches;
}

@property (nonatomic, readonly) _Bool isImmersivePipDockOwnedControllerEnabled;
@property (nonatomic, readonly) _Bool isImmersiveDockAutoResumeEnabled;
@property (nonatomic, readonly) _Bool isImmersiveDockMorphCoverFixEnabled;
@property (nonatomic, readonly) _Bool isImmersiveTappableCaptionsEnabled;
@property (nonatomic, readonly) _Bool isImmersiveHalfPlaybackSpeedEnabled;
@property (nonatomic, readonly) _Bool isImmersiveBroadcastCaptionsEnabled;
@property (nonatomic, readonly) _Bool isImmersiveLiveBroadcastCardsEnabled;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;

@end

#endif /* MTMediaTabFeatureAccess_h */

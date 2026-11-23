//
#ifndef T1BroadcastingFeatures_h
#define T1BroadcastingFeatures_h
@import Foundation;

#include "TFSFeatureSwitchProvider-Protocol.h"

@class NSObject, TFSAccountFeatureSwitches;
@protocol LHLSFeatures;

@interface T1BroadcastingFeatures : NSObject

@property (readonly, nonatomic) TFSAccountFeatureSwitches *featureSwitches;
@property (readonly, nonatomic) id <TFSFeatureSwitchProvider> provider;
@property (readonly, nonatomic) id <LHLSFeatures> lhlsFeatures;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;
- (_Bool)isGuestBroadcastingByDefaultEnabled;
- (_Bool)isGuestBroadcastingCreationEnabled;
- (_Bool)isGuestBroadcastingCreationInNewsCameraEnabled;
- (_Bool)isGuestBroadcastingCallInEnabled;
- (_Bool)isGuestBroadcastingTimelineDecorationsEnabled;
- (_Bool)isGuestBroadcastingVideoGuestsEnabled;
- (_Bool)isUserProfileSheetEnabled;
- (_Bool)isTwitterWebRTCEnabled;
- (_Bool)isChatRestrictedToPremium;
- (_Bool)isLiveVideoBFramesDisabled;
- (_Bool)isLLHLSTuningEnabled;
- (_Bool)isServerEndDetectionEnabled;
- (double)qualityViewThreshold;
- (double)minimumDurationForQualityViewEvent;

@end

#endif /* T1BroadcastingFeatures_h */

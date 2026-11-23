//
#ifndef TASSpacesFeatureSwitches_h
#define TASSpacesFeatureSwitches_h
@import Foundation;

@class NSObject;

@interface TASSpacesFeatureSwitches : NSObject // (Swift)

/* class methods */
+ (_Bool)isConsumptionEnabled:(id)enabled;
+ (_Bool)isCreationEnabled:(id)enabled;
+ (long long)maximumNumberOfAdmins:(id)admins;
+ (long long)maximumNumberOfSpeakers:(id)speakers;
+ (double)refreshTimeInterval:(id)interval;
+ (_Bool)isLockdownEnabled:(id)enabled;
+ (_Bool)isEmployeeOnlyEnabled:(id)enabled;
+ (_Bool)isGraphQLEndpointEnabled:(id)enabled;
+ (double)sharingReloadingInterval:(id)interval;
+ (long long)scheduledSpaceRsvpDisplayThreshold:(id)threshold;
+ (_Bool)isHLSPlaybackEnabled:(id)enabled;
+ (double)surveyMinimumTimeSpentHost:(id)host;
+ (double)surveyMinimumTimeSpentNonHost:(id)host;
+ (long long)surveyProbability:(id)probability;
+ (_Bool)isMultistreamEnabled:(id)enabled;
+ (_Bool)isMultistreamConferencesEnabled:(id)enabled;
+ (long long)multiScheduledMaxSpaces:(id)spaces;
+ (double)followPromptWaitTime:(id)time;
+ (_Bool)isCommunitySpaceJoinPromptEnabled:(id)enabled;
+ (long long)userFetcherPrecachingLimit:(id)limit;
+ (_Bool)isVideoCreationEnabled:(id)enabled;
+ (_Bool)isVideoAdminsEnabled:(id)enabled;
+ (_Bool)isVideoSpeakersEnabled:(id)enabled;
+ (_Bool)isIncognitoCreationEnabled:(id)enabled;
+ (_Bool)isIncognitoConsumptionEnabled:(id)enabled;
+ (_Bool)incognitoConsumptionDefault:(id)_default;
+ (_Bool)isSpeakersNullUserIDLogsEnabled:(id)enabled;
+ (_Bool)isVideoSimulcastEnabled:(id)enabled;
+ (_Bool)isConferenceSimulcastEnabled:(id)enabled;
+ (_Bool)isVideoLocalThumbnailEnabled:(id)enabled;
+ (_Bool)isConferenceOpusDtxEnabled:(id)enabled;
+ (_Bool)isOpusDtxEnabled:(id)enabled;
+ (_Bool)isConferenceSoloModeEnabled:(id)enabled;
+ (_Bool)isNameOverlayEnabled:(id)enabled;
+ (_Bool)isDockRedesignEnabled:(id)enabled;
+ (_Bool)isDockCollapseEndsComposeSessionEnabled:(id)enabled;
+ (_Bool)isLiveChatListenerSyncEnabled:(id)enabled;
+ (_Bool)isTabGraphQLFeedEnabled:(id)enabled;
+ (_Bool)isLinkLoadErrorAlertEnabled:(id)enabled;

/* instance methods */
- (id)init;

@end

#endif /* TASSpacesFeatureSwitches_h */

//
#ifndef NSError_TFNBroadcast_h
#define NSError_TFNBroadcast_h
@import Foundation;

@interface NSError (TFNBroadcast)

/* instance methods */
- (_Bool)tfn_isWebKitErrorPluginHandledLoad;
- (_Bool)tfn_isWebKitErrorFrameLoadInterrupted;
- (_Bool)t1_isLiveStreamUnavailableError;
- (_Bool)t1_isLiveGeoblockedError;
- (_Bool)t1_isAutomaticCopyrightEnforcementError;
- (id)t1_streamCopyrightRestriction;

@end

#endif /* NSError_TFNBroadcast_h */

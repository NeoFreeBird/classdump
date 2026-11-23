//
#ifndef TFSTwitterAccessibilitySettings_h
#define TFSTwitterAccessibilitySettings_h
@import Foundation;

@class NSObject;

@interface TFSTwitterAccessibilitySettings : NSObject

/* class methods */
+ (_Bool)isHashtagPronounciationAllowed;
+ (_Bool)areLinksShortened;
+ (long long)magicTapAction;
+ (_Bool)includeUsernameInTimelines;
+ (_Bool)isPreferClosedCaptionsWithSDHEnabled;
+ (_Bool)isReduceMotionSettingEnabled;
+ (void)setReduceMotionSettingEnabled:(_Bool)enabled;
+ (void)_tfs_postReduceMotionDidChangeNotification;

@end

#endif /* TFSTwitterAccessibilitySettings_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12TweetDetails41GrokAutoTranslateLanguagePreferenceHelper_h
#define _TtC12TweetDetails41GrokAutoTranslateLanguagePreferenceHelper_h
@import Foundation;

@class NSObject, _$sSDySS TweetDetails.GrokAutoTranslateLanguagePreferenceHelper.LanguagePreference;

@interface TweetDetails.GrokAutoTranslateLanguagePreferenceHelper : NSObject { // (Swift)
    /* instance variables */
    Swift.Dictionary empty-list Swift.String TweetDetails.GrokAutoTranslateLanguagePreferenceHelper.LanguagePreference preferences;
}

/* class methods */
+ (id)shared;
+ (id)didUpdateNotification;
+ (long long)preferenceVersion;
+ (void)setPreferenceVersion:(long long)version;

/* instance methods */
- (id)init;
- (void)postDidUpdateNotificationFor:(id)_for;
- (_Bool)isAutoTranslateDisabledFor:(id)_for;
- (void)cleanupExpiredPreferences;

@end

#endif /* _TtC12TweetDetails41GrokAutoTranslateLanguagePreferenceHelper_h */

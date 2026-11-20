//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASLocalSettings_h
#define TASLocalSettings_h
@import Foundation;

@class NSObject;

@interface TASLocalSettings : NSObject // (Swift)

/* class methods */
+ (_Bool)soundEffectsInSpacesEnabled;
+ (void)setSoundEffectsInSpacesEnabled:(_Bool)enabled;
+ (_Bool)backgroundMusicAutoplayEnabled;
+ (void)setBackgroundMusicAutoplayEnabled:(_Bool)enabled;
+ (long long)backgroundMusicTrackNumber;
+ (void)setBackgroundMusicTrackNumber:(long long)number;

/* instance methods */
- (id)init;

@end

#endif /* TASLocalSettings_h */

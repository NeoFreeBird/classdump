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

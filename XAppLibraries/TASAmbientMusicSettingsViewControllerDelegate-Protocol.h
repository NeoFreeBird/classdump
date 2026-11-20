//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASAmbientMusicSettingsViewControllerDelegate_Protocol_h
#define TASAmbientMusicSettingsViewControllerDelegate_Protocol_h
@import Foundation;

@protocol TASAmbientMusicSettingsViewControllerDelegate

@required

/* required instance methods */
- (void)ambientMusicSettingsViewControllerDidChangeTrack:(id)track;

@optional

@end

#endif /* TASAmbientMusicSettingsViewControllerDelegate_Protocol_h */

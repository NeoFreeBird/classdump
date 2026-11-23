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

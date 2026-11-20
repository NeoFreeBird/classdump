//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBSettingsListViewControllerDelegate_Protocol_h
#define ONBSettingsListViewControllerDelegate_Protocol_h
@import Foundation;

@protocol ONBSettingsListViewControllerDelegate

@required

/* required instance methods */
- (void)settingsListViewController:(id)controller didUpdateSettings:(id)settings;
- (void)settingsListViewController:(id)controller didTapNextWithSettings:(id)settings;
- (void)settingsListViewControllerDidTapSkip:(id)skip;

@optional

@end

#endif /* ONBSettingsListViewControllerDelegate_Protocol_h */

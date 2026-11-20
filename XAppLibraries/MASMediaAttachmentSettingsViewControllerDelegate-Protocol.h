//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef MASMediaAttachmentSettingsViewControllerDelegate_Protocol_h
#define MASMediaAttachmentSettingsViewControllerDelegate_Protocol_h
@import Foundation;

@protocol MASMediaAttachmentSettingsViewControllerDelegate

@required

/* required instance methods */
- (void)mediaAttachmentSettingsViewControllerDidCancel:(id)cancel;
- (void)mediaAttachmentSettingsViewControllerDidComplete:(id)complete warnings:(id)warnings allowDownload:(_Bool)download blockGrokModifications:(_Bool)modifications;

@optional

@end

#endif /* MASMediaAttachmentSettingsViewControllerDelegate_Protocol_h */

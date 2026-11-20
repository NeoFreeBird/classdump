//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer41MessageComposerCameraPickerViewController_h
#define _TtC19ChatMessageComposer41MessageComposerCameraPickerViewController_h
@import Foundation;

#include "UIImagePickerControllerDelegate-Protocol.h"
#include "UINavigationControllerDelegate-Protocol.h"

@class ChatModels.MessageCompositionAttachment _$sSgc ->, ChatModelsCore.ChatHost, UIViewController, _$sSo014Subsystem_ios_B35Arm64_mainDataUsageSettingsProvider_p;

@interface ChatMessageComposer.MessageComposerCameraPickerViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> { // (Swift)
    /* instance variables */
    ChatModelsCore.ChatHost chatHost;
    ChatModels.MessageCompositionAttachment _$sSgc -> didSelect;
    __C.Subsystem_ios_iosArm64_mainDataUsageSettingsProvider dataUsageSettingsProvider;
}

/* instance methods */
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(id)cancel;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19ChatMessageComposer41MessageComposerCameraPickerViewController_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer39MessageComposerFilePickerViewController_h
#define _TtC19ChatMessageComposer39MessageComposerFilePickerViewController_h
@import Foundation;

#include "UIDocumentPickerDelegate-Protocol.h"

@class ChatModels.MessageCompositionAttachment _$sSgc ->, ChatModelsCore.ChatHost, UIViewController;

@interface ChatMessageComposer.MessageComposerFilePickerViewController : UIViewController <UIDocumentPickerDelegate> { // (Swift)
    /* instance variables */
    ChatModelsCore.ChatHost chatHost;
    ChatModels.MessageCompositionAttachment _$sSgc -> didSelect;
}

/* instance methods */
- (void)documentPicker:(id)picker didPickDocumentsAtURLs:(id)urls;
- (void)documentPickerWasCancelled:(id)cancelled;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19ChatMessageComposer39MessageComposerFilePickerViewController_h */

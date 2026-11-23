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

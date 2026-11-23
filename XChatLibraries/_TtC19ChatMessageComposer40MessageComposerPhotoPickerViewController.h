//
#ifndef _TtC19ChatMessageComposer40MessageComposerPhotoPickerViewController_h
#define _TtC19ChatMessageComposer40MessageComposerPhotoPickerViewController_h
@import Foundation;

@class ChatModelsCore.ChatHost, UIViewController, _$sSi, _$sySa -> ChatModels.MessageCompositionAttachment _$sGc;

@interface ChatMessageComposer.MessageComposerPhotoPickerViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatModelsCore.ChatHost chatHost;
    Swift.Int selectionLimit;
     empty-list Swift.Array -> ChatModels.MessageCompositionAttachment _$sGc didSelect;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19ChatMessageComposer40MessageComposerPhotoPickerViewController_h */

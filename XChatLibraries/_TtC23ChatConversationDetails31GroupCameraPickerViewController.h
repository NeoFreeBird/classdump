//
#ifndef _TtC23ChatConversationDetails31GroupCameraPickerViewController_h
#define _TtC23ChatConversationDetails31GroupCameraPickerViewController_h
@import Foundation;

#include "UIImagePickerControllerDelegate-Protocol.h"
#include "UINavigationControllerDelegate-Protocol.h"

@class UIViewController, _$sySo7UIImageCc;

@interface ChatConversationDetails.GroupCameraPickerViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> { // (Swift)
    /* instance variables */
    (__C.UIImage) -> () didSelect;
}

/* instance methods */
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(id)cancel;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC23ChatConversationDetails31GroupCameraPickerViewController_h */

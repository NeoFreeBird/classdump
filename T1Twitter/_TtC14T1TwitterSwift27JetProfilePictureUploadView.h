//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift27JetProfilePictureUploadView_h
#define _TtC14T1TwitterSwift27JetProfilePictureUploadView_h
@import Foundation;

#include "UIImagePickerControllerDelegate-Protocol.h"
#include "UINavigationControllerDelegate-Protocol.h"

@class T1TwitterSwift.JetProfilePictureService, T1TwitterSwift.JetProfilePictureUploadView.PictureState, T1TwitterSwift.JetProfilePictureUploadView.PictureState _$scSg ->, UIView, _$s10JetfuelSDK11ViewContextVMn, _$sSSSg, _$sSo11UIImageViewC, _$sSo7UILabelC, _$sSo9TFNButtonC;

@interface T1TwitterSwift.JetProfilePictureUploadView : UIView <UIImagePickerControllerDelegate, UINavigationControllerDelegate> { // (Swift)
    /* instance variables */
    __C.UIImageView profileImageView;
    __C.UILabel importedLabel;
    __C.TFNButton closeButton;
    nominal type descriptor for JetfuelSDK.ViewContext context;
    Swift.String? name;
    Swift.String? phone;
    T1TwitterSwift.JetProfilePictureUploadView.PictureState currentState;
    T1TwitterSwift.JetProfilePictureUploadView.PictureState _$scSg -> onStateUpdate;
    T1TwitterSwift.JetProfilePictureService profilePictureService;
}

/* instance methods */
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(id)cancel;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)closeButtonTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift27JetProfilePictureUploadView_h */

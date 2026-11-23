//
#ifndef _TtC14T1TwitterSwift38T1CommunityBannerImagePickerController_h
#define _TtC14T1TwitterSwift38T1CommunityBannerImagePickerController_h
@import Foundation;

#include "T1CameraCapturePresenterDelegate-Protocol.h"
#include "TUINativePhotoPickerDelegate-Protocol.h"

@class DispatchQueue, NSObject, T1TwitterSwift.T1CommunityBannerImagePickerControllerDelegate ?, _$sSSSg, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC, _$sSo24T1CameraCapturePresenterCSg;

@interface T1TwitterSwift.T1CommunityBannerImagePickerController : NSObject <T1CameraCapturePresenterDelegate, TUINativePhotoPickerDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    Swift.String? originalImageMD5;
    DispatchQueue backgroundQueue;
    __C.T1CameraCapturePresenter? $__lazy_storage_$_cameraPresenter;
    weak __C.UIViewController? presenting;
    T1TwitterSwift.T1CommunityBannerImagePickerControllerDelegate ? delegate;
}

/* instance methods */
- (void)cameraCapturePresenter:(id)presenter cameraViewController:(id)controller didFinishWithAttachments:(id)attachments;
- (void)nativePhotoPicker:(id)picker didSelectAssets:(id)assets;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift38T1CommunityBannerImagePickerController_h */

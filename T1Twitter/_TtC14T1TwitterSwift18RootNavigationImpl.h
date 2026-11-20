//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift18RootNavigationImpl_h
#define _TtC14T1TwitterSwift18RootNavigationImpl_h
@import Foundation;

#include "T1CameraCapturePresenterDelegate-Protocol.h"
#include "T1PickAndFilterPhotoFlowControllerDelegate-Protocol.h"

@class NSObject, T1TwitterSwift.PhotoEditorDelegateHandler ?, _$sSo17TFNTwitterAccountC, _$sSo24T1CameraCapturePresenterCSg, _$sSo34T1PickAndFilterPhotoFlowControllerCSg, _$sySaySo8TTMAssetCGSgcSg, _$sySo13TTMAssetImageCSg_So7UIImageCSgtcSg;

@interface T1TwitterSwift.RootNavigationImpl : NSObject <T1PickAndFilterPhotoFlowControllerDelegate, T1CameraCapturePresenterDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    (([__C.TTMAsset]?) -> ())? cameraCompletionHandler;
    __C.T1CameraCapturePresenter? cameraPresenter;
    T1TwitterSwift.PhotoEditorDelegateHandler ? photoEditorDelegate;
    __C.T1PickAndFilterPhotoFlowController? pickAndFilterPhotoFlowController;
    ((__C.TTMAssetImage?, __C.UIImage?) -> ())? pickAndFilterCompletionHandler;
}

/* instance methods */
- (void)pickAndFilterPhotoFlowController:(id)controller userDidSelectPhoto:(id)photo type:(long long)type;
- (void)pickAndFilterPhotoFlowController:(id)controller userDidCancelPhotoType:(long long)type;
- (void)cameraCapturePresenter:(id)presenter cameraViewController:(id)controller didFinishWithAttachments:(id)attachments;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift18RootNavigationImpl_h */

//
#ifndef _TtC14T1TwitterSwift18RootNavigationImpl_h
#define _TtC14T1TwitterSwift18RootNavigationImpl_h
@import Foundation;

#include "T1CameraCapturePresenterDelegate-Protocol.h"

@class NSObject, T1TwitterSwift.PhotoEditorDelegateHandler ?, _$sSo17TFNTwitterAccountC, _$sSo24T1CameraCapturePresenterCSg, _$sySaySo8TTMAssetCGSgcSg;

@interface T1TwitterSwift.RootNavigationImpl : NSObject <T1CameraCapturePresenterDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    (([__C.TTMAsset]?) -> ())? cameraCompletionHandler;
    __C.T1CameraCapturePresenter? cameraPresenter;
    T1TwitterSwift.PhotoEditorDelegateHandler ? photoEditorDelegate;
}

/* instance methods */
- (void)cameraCapturePresenter:(id)presenter cameraViewController:(id)controller didFinishWithAttachments:(id)attachments;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift18RootNavigationImpl_h */

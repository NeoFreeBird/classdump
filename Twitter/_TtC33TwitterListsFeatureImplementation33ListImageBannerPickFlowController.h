//
#ifndef _TtC33TwitterListsFeatureImplementation33ListImageBannerPickFlowController_h
#define _TtC33TwitterListsFeatureImplementation33ListImageBannerPickFlowController_h
@import Foundation;

#include "TUINativePhotoPickerDelegate-Protocol.h"

@class DispatchQueue, NSObject, _$s12TwitterLists41ListImageBannerPickFlowControllerDelegateMp ?, _$sSSSg, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC;

@interface TwitterListsFeatureImplementation.ListImageBannerPickFlowController : NSObject <TUINativePhotoPickerDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    Swift.String? originalImageMD5;
    weak __C.UIViewController? presenting;
    DispatchQueue backgroundQueue;
    protocol descriptor for TwitterLists.ListImageBannerPickFlowControllerDelegate ? delegate;
}

/* instance methods */
- (void)nativePhotoPicker:(id)picker didSelectAssets:(id)assets;
- (id)init;

@end

#endif /* _TtC33TwitterListsFeatureImplementation33ListImageBannerPickFlowController_h */

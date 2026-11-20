//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppStoreProductSheetPresenter_h
#define T1AppStoreProductSheetPresenter_h
@import Foundation;

#include "SKStoreProductViewControllerDelegate-Protocol.h"
#include "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class NSObject;

@interface T1AppStoreProductSheetPresenter : NSObject <SKStoreProductViewControllerDelegate, UIAdaptivePresentationControllerDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *onDismiss;
}

/* class methods */
+ (_Bool)canPresentSheetForURL:(id)url account:(id)account;
+ (void)presentSheetForURL:(id)url account:(id)account fromViewController:(id)controller onDismiss:(id /* block */)dismiss fallback:(id /* block */)fallback;

/* instance methods */
- (void)productViewControllerDidFinish:(id)finish;
- (void)presentationControllerDidDismiss:(id)dismiss;
- (id)init;

@end

#endif /* T1AppStoreProductSheetPresenter_h */

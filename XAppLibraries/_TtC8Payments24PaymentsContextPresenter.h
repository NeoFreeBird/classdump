//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8Payments24PaymentsContextPresenter_h
#define _TtC8Payments24PaymentsContextPresenter_h
@import Foundation;

@class NSObject, Payments.PaymentsContext, Payments.PaymentsPublicKeyCredentialService, _$sSo16UIViewControllerCSgXw;

@interface Payments.PaymentsContextPresenter : NSObject { // (Swift)
    /* instance variables */
    weak __C.UIViewController? viewController;
    Payments.PaymentsContext context;
    Payments.PaymentsPublicKeyCredentialService publicKeyCredentialService;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC8Payments24PaymentsContextPresenter_h */

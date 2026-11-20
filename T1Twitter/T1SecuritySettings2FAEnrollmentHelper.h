//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SecuritySettings2FAEnrollmentHelper_h
#define T1SecuritySettings2FAEnrollmentHelper_h
@import Foundation;

@class NSObject;

@interface T1SecuritySettings2FAEnrollmentHelper : NSObject

/* class methods */
+ (id)addSecuriyKeyDataViewItemWithPresentationVC:(id)vc;
+ (id)alertControllerForAccount:(id)account error:(id)error completion:(id /* block */)completion;
+ (id)alertDismissActionWithTitle:(id)title completion:(id /* block */)completion;
+ (id)alertOpenURLActionWithTitle:(id)title url:(id)url completion:(id /* block */)completion;
+ (id)alertOpenURLInSafariActionWithTitle:(id)title url:(id)url presentationController:(id)controller completion:(id /* block */)completion;
+ (id)alertAddPhoneErrorActionWithTitle:(id)title completion:(id /* block */)completion;
+ (void)scribeLoginVerificationForAccount:(id)account action:(id)action withElement:(id)element;

@end

#endif /* T1SecuritySettings2FAEnrollmentHelper_h */

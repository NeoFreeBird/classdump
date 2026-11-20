//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBSignUpViewControllerDelegate_Protocol_h
#define ONBSignUpViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBSignUpViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)signUpViewController:(id)controller didTapNextWithName:(id)name countryCode:(id)code phone:(id)phone email:(id)email birthday:(id)birthday;
- (void)signUpViewController:(id)controller didReturnInstrumentationResult:(id)result;
- (void)signUpViewController:(id)controller didChangeTextInField:(long long)field;
- (void)signUpViewController:(id)controller didShowErrorInField:(long long)field;
- (void)signUpViewController:(id)controller didSelectContactType:(long long)type;

@optional

@end

#endif /* ONBSignUpViewControllerDelegate_Protocol_h */

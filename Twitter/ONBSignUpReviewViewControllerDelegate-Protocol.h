//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBSignUpReviewViewControllerDelegate_Protocol_h
#define ONBSignUpReviewViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBSignUpReviewViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)signUpReviewViewControllerDidTapName:(id)name;
- (void)signUpReviewViewControllerDidTapPhone:(id)phone;
- (void)signUpReviewViewControllerDidTapEmail:(id)email;
- (void)signUpReviewViewControllerDidTapBirthday:(id)birthday;
- (void)signUpReviewViewControllerDidTapNext:(id)next;

@optional

@end

#endif /* ONBSignUpReviewViewControllerDelegate_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef HUIRateLimitUserActionPresenterDelegate_Protocol_h
#define HUIRateLimitUserActionPresenterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol HUIRateLimitUserActionPresenterDelegate <NSObject>

@required

/* required instance methods */
- (void)rateLimitUserActionPresenter:(id)presenter didTapLearnMoreURL:(id)url viewController:(id)controller;

@optional

@end

#endif /* HUIRateLimitUserActionPresenterDelegate_Protocol_h */

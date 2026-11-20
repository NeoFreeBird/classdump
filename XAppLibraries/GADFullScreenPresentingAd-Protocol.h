//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADFullScreenPresentingAd_Protocol_h
#define GADFullScreenPresentingAd_Protocol_h
@import Foundation;

#include "GADFullScreenContentDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@protocol GADFullScreenPresentingAd <NSObject>

@required

@property (weak, nonatomic) id <GADFullScreenContentDelegate> fullScreenContentDelegate;

@optional

@end

#endif /* GADFullScreenPresentingAd_Protocol_h */

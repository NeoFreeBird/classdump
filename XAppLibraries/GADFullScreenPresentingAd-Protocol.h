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

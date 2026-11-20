//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAppEventDelegate_Protocol_h
#define GADAppEventDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADAppEventDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)adView:(id)view didReceiveAppEvent:(id)event withInfo:(id)info;
- (void)interstitialAd:(id)ad didReceiveAppEvent:(id)event withInfo:(id)info;

@end

#endif /* GADAppEventDelegate_Protocol_h */

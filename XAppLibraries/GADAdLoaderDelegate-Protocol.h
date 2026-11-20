//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdLoaderDelegate_Protocol_h
#define GADAdLoaderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADAdLoaderDelegate <NSObject>

@required

/* required instance methods */
- (void)adLoader:(id)loader didFailToReceiveAdWithError:(id)error;

@optional

/* optional instance methods */
- (void)adLoaderDidFinishLoading:(id)loading;

@end

#endif /* GADAdLoaderDelegate_Protocol_h */

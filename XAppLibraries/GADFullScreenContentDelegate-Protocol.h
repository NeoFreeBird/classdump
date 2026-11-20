//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADFullScreenContentDelegate_Protocol_h
#define GADFullScreenContentDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADFullScreenContentDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)adDidRecordImpression:(id)impression;
- (void)adDidRecordClick:(id)click;
- (void)ad:(id)ad didFailToPresentFullScreenContentWithError:(id)error;
- (void)adWillPresentFullScreenContent:(id)content;
- (void)adWillDismissFullScreenContent:(id)content;
- (void)adDidDismissFullScreenContent:(id)content;
- (void)adDidPresentFullScreenContent:(id)content;

@end

#endif /* GADFullScreenContentDelegate_Protocol_h */

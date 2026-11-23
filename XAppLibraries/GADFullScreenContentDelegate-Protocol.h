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

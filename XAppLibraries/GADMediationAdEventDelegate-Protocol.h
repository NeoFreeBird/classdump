//
#ifndef GADMediationAdEventDelegate_Protocol_h
#define GADMediationAdEventDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADMediationAdEventDelegate <NSObject>

@required

/* required instance methods */
- (void)reportImpression;
- (void)reportClick;
- (void)willPresentFullScreenView;
- (void)didFailToPresentWithError:(id)error;
- (void)willDismissFullScreenView;
- (void)didDismissFullScreenView;

@optional

@end

#endif /* GADMediationAdEventDelegate_Protocol_h */

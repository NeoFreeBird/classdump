//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

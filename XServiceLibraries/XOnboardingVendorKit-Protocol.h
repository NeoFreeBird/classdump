//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XOnboardingVendorKit_Protocol_h
#define XOnboardingVendorKit_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol XOnboardingVendorKit <NSObject>

@required

@property (nonatomic, readonly) _Bool castleConfigured;
@property (nonatomic, readonly) _Bool castleConfigured;

/* required instance methods */
- (_Bool)isCastleConfigured;
- (_Bool)isCastleConfigured;
- (_Bool)configureCastleWithPublishableKey:(id)key debugLoggingEnabled:(_Bool)enabled error:(id *)error;
- (_Bool)configureCastleWithPublishableKey:(id)key debugLoggingEnabled:(_Bool)enabled error:(id *)error;
- (id)createCastleRequestToken;
- (void)dispatchPreludeSignalsWithSDKKey:(id)sdkkey timeout:(double)timeout maxRetries:(long long)retries completion:(id /* block */)completion;
- (void)dispatchPreludeSignalsWithSDKKey:(id)sdkkey timeout:(double)timeout maxRetries:(long long)retries completion:(id /* block */)completion;

@optional

@end

#endif /* XOnboardingVendorKit_Protocol_h */

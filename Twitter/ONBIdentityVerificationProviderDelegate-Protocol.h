//
#ifndef ONBIdentityVerificationProviderDelegate_Protocol_h
#define ONBIdentityVerificationProviderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBIdentityVerificationProviderDelegate <NSObject>

@required

/* required instance methods */
- (id)subtaskDataProvider;

@optional

@end

#endif /* ONBIdentityVerificationProviderDelegate_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

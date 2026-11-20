//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBCPeriscopeAuthenticationResponse_h
#define TBCPeriscopeAuthenticationResponse_h
@import Foundation;

#include "TBCPeriscopeAuthenticationResult.h"

@class TNLResponse;

@interface TBCPeriscopeAuthenticationResponse : TNLResponse

@property (readonly, nonatomic) TBCPeriscopeAuthenticationResult *result;

/* instance methods */
- (void)prepare;

@end

#endif /* TBCPeriscopeAuthenticationResponse_h */

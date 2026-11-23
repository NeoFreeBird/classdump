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

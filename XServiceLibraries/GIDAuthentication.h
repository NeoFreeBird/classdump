//
#ifndef GIDAuthentication_h
#define GIDAuthentication_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "OIDAuthState.h"

@class NSObject;

@interface GIDAuthentication : NSObject <NSSecureCoding>

@property (retain, nonatomic) OIDAuthState *authState;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithAuthState:(id)state;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* GIDAuthentication_h */

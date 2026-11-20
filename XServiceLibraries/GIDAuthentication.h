//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

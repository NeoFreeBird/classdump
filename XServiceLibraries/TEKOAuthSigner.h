//
#ifndef TEKOAuthSigner_h
#define TEKOAuthSigner_h
@import Foundation;

#include "TEKAuthSigner.h"

@class NSString;

@interface TEKOAuthSigner : TEKAuthSigner

@property (copy, nonatomic) NSString *oAuthToken;
@property (copy, nonatomic) NSString *oAuthTokenSecret;
@property (nonatomic) double oAuthClockDelta;

/* instance methods */
- (id)signedMutableURLRequest;
- (id)_oAuthAuthorizationHeader;
- (id)_normalizedURLString;

@end

#endif /* TEKOAuthSigner_h */

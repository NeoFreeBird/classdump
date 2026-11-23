//
#ifndef TFSAuthRequestAuthorizer_Protocol_h
#define TFSAuthRequestAuthorizer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSAuthRequestAuthorizer <NSObject>

@required

/* required instance methods */
- (id)authorizationForURLRequest:(id)urlrequest context:(id)context error:(out id *)error;

@optional

@end

#endif /* TFSAuthRequestAuthorizer_Protocol_h */

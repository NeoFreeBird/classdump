//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

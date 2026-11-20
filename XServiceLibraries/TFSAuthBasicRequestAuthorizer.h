//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSAuthBasicRequestAuthorizer_h
#define TFSAuthBasicRequestAuthorizer_h
@import Foundation;

#include "TFSAuthRequestAuthorizer-Protocol.h"

@class NSObject, NSString;

@interface TFSAuthBasicRequestAuthorizer : NSObject <TFSAuthRequestAuthorizer>

@property (copy, nonatomic) NSString *consumerKey;
@property (copy, nonatomic) NSString *consumerSecret;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)authorizationForURLRequest:(id)urlrequest context:(id)context error:(out id *)error;

@end

#endif /* TFSAuthBasicRequestAuthorizer_h */

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

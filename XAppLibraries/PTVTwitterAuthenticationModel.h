//
#ifndef PTVTwitterAuthenticationModel_h
#define PTVTwitterAuthenticationModel_h
@import Foundation;

#include "PTVTwitterAuthentication-Protocol.h"

@class NSObject, NSString;

@interface PTVTwitterAuthenticationModel : NSObject <PTVTwitterAuthentication>

@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *consumerKey;
@property (readonly, copy, nonatomic) NSString *consumerSecret;
@property (readonly, copy, nonatomic) NSString *authToken;
@property (readonly, copy, nonatomic) NSString *authTokenSecret;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserID:(id)id consumerKey:(id)key consumerSecret:(id)secret authToken:(id)token authTokenSecret:(id)secret;

@end

#endif /* PTVTwitterAuthenticationModel_h */

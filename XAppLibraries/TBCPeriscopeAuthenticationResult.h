//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBCPeriscopeAuthenticationResult_h
#define TBCPeriscopeAuthenticationResult_h
@import Foundation;

#include "TBCPeriscopeAccount.h"

@class NSError, NSObject;

@interface TBCPeriscopeAuthenticationResult : NSObject

@property (readonly, nonatomic) long long resultType;
@property (readonly, nonatomic) TBCPeriscopeAccount *periscopeAccount;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) _Bool tokenRejected;
@property (readonly, nonatomic) _Bool hasRectifyURL;

/* class methods */
+ (id)authorizedResultFromData:(id)data;
+ (id)authorizedResultFromDictionary:(id)dictionary;
+ (id)unauthorizedResultFromData:(id)data;
+ (id)unauthorizedResultFromDictionary:(id)dictionary;
+ (id)failedResultWithStatusCode:(long long)code;
+ (id)failedResultWithError:(id)error;
+ (id)inProgressResult;
+ (id)cancelledResult;

/* instance methods */
- (id)initWithResultType:(long long)type periscopeAccount:(id)account error:(id)error hasRectifyURL:(_Bool)url;

@end

#endif /* TBCPeriscopeAuthenticationResult_h */

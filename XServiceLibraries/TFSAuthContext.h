//
#ifndef TFSAuthContext_h
#define TFSAuthContext_h
@import Foundation;

#include "TFSAuthConsumerCredential.h"

@class NSObject, NSString;

@interface TFSAuthContext : NSObject

@property (nonatomic) unsigned long long authType;
@property (readonly, nonatomic) TFSAuthConsumerCredential *requestingAppCredential;
@property (readonly, copy, nonatomic) NSString *bearerToken;
@property (readonly, copy, nonatomic) NSString *callbackURLString;

/* instance methods */
- (id)initWithAuthType:(unsigned long long)type consumerCredential:(id)credential bearerToken:(id)token callbackURLString:(id)urlstring;
- (id)initWithAuthType:(unsigned long long)type consumerCredential:(id)credential callbackURLString:(id)urlstring;
- (id)initWithBearerToken:(id)token;

@end

#endif /* TFSAuthContext_h */

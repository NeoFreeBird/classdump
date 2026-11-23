//
#ifndef OIDTokenResponse_h
#define OIDTokenResponse_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "OIDTokenRequest.h"

@class NSDate, NSDictionary, NSObject, NSString;

@interface OIDTokenResponse : NSObject <NSCopying, NSSecureCoding>

@property (readonly, nonatomic) OIDTokenRequest *request;
@property (readonly, nonatomic) NSString *accessToken;
@property (readonly, nonatomic) NSDate *accessTokenExpirationDate;
@property (readonly, nonatomic) NSString *tokenType;
@property (readonly, nonatomic) NSString *idToken;
@property (readonly, nonatomic) NSString *refreshToken;
@property (readonly, nonatomic) NSString *scope;
@property (readonly, nonatomic) NSDictionary *additionalParameters;

/* class methods */
+ (id)fieldMap;
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithRequest:(id)request parameters:(id)parameters;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;

@end

#endif /* OIDTokenResponse_h */

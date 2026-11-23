//
#ifndef OIDIDToken_h
#define OIDIDToken_h
@import Foundation;

@class NSArray, NSDate, NSDictionary, NSObject, NSString, NSURL;

@interface OIDIDToken : NSObject

@property (readonly, nonatomic) NSDictionary *header;
@property (readonly, nonatomic) NSDictionary *claims;
@property (readonly, nonatomic) NSURL *issuer;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSArray *audience;
@property (readonly, nonatomic) NSDate *expiresAt;
@property (readonly, nonatomic) NSDate *issuedAt;
@property (readonly, nonatomic) NSString *nonce;

/* class methods */
+ (id)fieldMap;
+ (id)parseJWTSection:(id)jwtsection;
+ (id)base64urlNoPaddingDecode:(id)decode;

/* instance methods */
- (id)initWithIDTokenString:(id)string;

@end

#endif /* OIDIDToken_h */

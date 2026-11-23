//
#ifndef TEKTwitterAccount_h
#define TEKTwitterAccount_h
@import Foundation;

@class NSObject, NSString;

@interface TEKTwitterAccount : NSObject

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) long long userID;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *userType;
@property (readonly, copy, nonatomic) NSString *oAuthToken;
@property (readonly, copy, nonatomic) NSString *oAuthTokenSecret;
@property (readonly, nonatomic) _Bool isOwner;

/* instance methods */
- (id)initWithTFSAccount:(id)tfsaccount;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)_signedMutableURLRequestForURLRequest:(id)urlrequest parameters:(id)parameters;
- (id)_fullyInitializedURLRequest:(id)urlrequest;
- (id)authenticatedMutableURLRequestForURLRequest:(id)urlrequest parameters:(id)parameters error:(id *)error;
- (id)authenticatedMutableUploadingURLRequestForURLRequest:(id)urlrequest multipartFormData:(id)data error:(id *)error;

@end

#endif /* TEKTwitterAccount_h */

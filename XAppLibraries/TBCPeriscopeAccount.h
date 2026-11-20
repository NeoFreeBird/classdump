//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBCPeriscopeAccount_h
#define TBCPeriscopeAccount_h
@import Foundation;

@class NSArray, NSDate, NSObject, NSString;

@interface TBCPeriscopeAccount : NSObject

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *cookie;
@property (readonly, copy, nonatomic) NSString *userDescription;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *userId;
@property (readonly, copy, nonatomic) NSString *initials;
@property (readonly, nonatomic) _Bool betaUser;
@property (readonly, nonatomic) _Bool employee;
@property (readonly, nonatomic) _Bool verified;
@property (readonly, nonatomic) _Bool bluebirdUser;
@property (readonly, nonatomic) unsigned long long followers;
@property (readonly, nonatomic) unsigned long long following;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *twitterUserId;
@property (readonly, nonatomic) NSString *twitterUsername;
@property (readonly, nonatomic) NSArray *profileImageURLs;
@property (retain, nonatomic) NSDate *lastRefreshed;

/* instance methods */
- (_Bool)isDirectAccount;
- (unsigned long long)accountType;
- (_Bool)isCookieActive;
- (double)cookieTTL;
- (id)initWithDictionary:(id)dictionary;
- (void)updateWithAccount:(id)account;
- (id)description;
- (id)plistDictionaryValue;
- (_Bool)isBetaUser;
- (_Bool)isEmployee;
- (_Bool)isVerified;
- (_Bool)isBluebirdUser;

@end

#endif /* TBCPeriscopeAccount_h */

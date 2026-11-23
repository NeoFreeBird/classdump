//
#ifndef TFSTwitterAccount_h
#define TFSTwitterAccount_h
@import Foundation;

#include "TFSAccountProtocol-Protocol.h"

@class NSDate, NSObject, NSString;

@interface TFSTwitterAccount : NSObject <TFSAccountProtocol> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 typedIdentifier;
    B24@0:8@"NSString"16 credentials;
    B24@0:8@"NSString"16 isOwnerFlag;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSString *oAuthToken;
@property (nonatomic, readonly) NSString *oAuthTokenSecret;
@property (nonatomic, readonly) _Bool isOwner;
@property (nonatomic, readonly) NSObject *identifier;
@property (nonatomic, readonly) NSString *username;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) _Bool verified;
@property (nonatomic, readonly) NSDate *lastActiveDate;
@property (nonatomic, readonly) NSString *userType;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)accountType;

/* instance methods */
- (id)initWithAccountID:(id)id username:(id)username userID:(long long)id oAuthToken:(id)token lastActiveDate:(id)date verified:(_Bool)verified isOwner:(_Bool)owner userType:(id)type;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterAccount_h */

//
#ifndef PTVBroadcastGuestSession_h
#define PTVBroadcastGuestSession_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate, NSObject, NSString, NSURL;

@interface PTVBroadcastGuestSession : NSObject <NSSecureCoding>

@property (readonly, nonatomic) NSString *sessionUUID;
@property (readonly, nonatomic) NSDate *start;
@property (readonly, nonatomic) NSDate *end;
@property (readonly, nonatomic) _Bool active;
@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSURL *avatarURL;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithDictionary:(id)dictionary;
- (id)guestSessionJSON;
- (id)bestKnownDisplayName;
- (_Bool)isActive;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToBroadcastGuestSession:(id)session;
- (unsigned long long)hash;

@end

#endif /* PTVBroadcastGuestSession_h */

//
#ifndef PTVChatOccupant_h
#define PTVChatOccupant_h
@import Foundation;

@class NSObject, NSString;

@interface PTVChatOccupant : NSObject

@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) NSString *twitterId;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *profileImageUrl;
@property (readonly, nonatomic) _Bool isVerified;
@property (readonly, nonatomic) _Bool isSubscriber;
@property (nonatomic) long long participantIndex;
@property (nonatomic) _Bool isNewUser;

/* instance methods */
- (id)initWithDict:(id)dict;

@end

#endif /* PTVChatOccupant_h */

//
#ifndef T1FollowerRequests_h
#define T1FollowerRequests_h
@import Foundation;

@class NSArray, NSObject;

@interface T1FollowerRequests : NSObject

@property (retain, nonatomic) NSArray *userIDs;
@property (nonatomic) unsigned long long unreadCount;

/* instance methods */
- (id)init;
- (_Bool)isRequestUnreadAtIndex:(unsigned long long)index;
- (unsigned long long)updateWithFollowerRequests:(id)requests;

@end

#endif /* T1FollowerRequests_h */

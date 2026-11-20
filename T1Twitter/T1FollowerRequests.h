//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

//
#ifndef T1URTUserListsTimelineViewControllerFactory_h
#define T1URTUserListsTimelineViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTUserListsTimelineViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)membershipsTimelineViewControllerWithAccount:(id)account userID:(long long)id username:(id)username title:(id)title;
+ (id)allSubscribedListsTimelineViewControllerWithAccount:(id)account forUserID:(long long)id username:(id)username;

/* instance methods */
- (id)init;

@end

#endif /* T1URTUserListsTimelineViewControllerFactory_h */

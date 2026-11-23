//
#ifndef T1URTListUsersTimelineViewControllerFactory_h
#define T1URTListUsersTimelineViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTListUsersTimelineViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)membersViewControllerForAccount:(id)account listID:(long long)id;
+ (id)membersViewControllerForAccount:(id)account listID:(long long)id title:(id)title emptyStateConfiguration:(id)configuration scribeContext:(id)context;
+ (id)subscribersViewControllerForAccount:(id)account listID:(long long)id;

/* instance methods */
- (id)init;

@end

#endif /* T1URTListUsersTimelineViewControllerFactory_h */

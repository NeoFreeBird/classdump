//
#ifndef T1URTFollowersTimelineViewControllerFactory_h
#define T1URTFollowersTimelineViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTFollowersTimelineViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)followersViewControllerWithAccount:(id)account userReference:(id)reference shouldShowPeopleButton:(_Bool)button shouldShowTitle:(_Bool)title;
+ (id)verifiedFollowersViewControllerWithAccount:(id)account userReference:(id)reference shouldShowPeopleButton:(_Bool)button shouldShowTitle:(_Bool)title;
+ (id)followersYouKnowViewControllerWithAccount:(id)account userReference:(id)reference;

/* instance methods */
- (id)init;

@end

#endif /* T1URTFollowersTimelineViewControllerFactory_h */

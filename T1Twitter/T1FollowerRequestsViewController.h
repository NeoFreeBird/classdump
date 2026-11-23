//
#ifndef T1FollowerRequestsViewController_h
#define T1FollowerRequestsViewController_h
@import Foundation;

#include "T1FollowerRequests.h"
#include "T1TwitterUsersStream.h"

@class TFNItemsDataViewController, TFNTwitterAccount;

@interface T1FollowerRequestsViewController : TFNItemsDataViewController

@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) T1TwitterUsersStream *stream;
@property (nonatomic) _Bool needsFollowerRequestUpdate;
@property (retain, nonatomic) T1FollowerRequests *followerRequests;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)appear;
- (id)title;
- (void)update:(_Bool)update;
- (void)_t1_updateFollowerRequests;
- (void)_t1_updateUsers;
- (void)_t1_streamDidUpdate:(id)update;
- (id)_t1_errorItemForStreamError:(id)error;
- (void)willDisplayCell:(id)cell forItem:(id)item atIndexPath:(id)path;
- (long long)dashContentItemType;
- (void)errorItemTapped:(id)tapped;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeImpressionParameters;

@end

#endif /* T1FollowerRequestsViewController_h */

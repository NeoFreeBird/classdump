//
#ifndef T1TweetNotificationsButtonViewModel_h
#define T1TweetNotificationsButtonViewModel_h
@import Foundation;

#include "T1AccountNotificationSettingsProperty.h"
#include "T1TweetNotificationsButton.h"
#include "T1TweetNotificationsDelegate-Protocol.h"

@class NSObject, TFNTwitterAccount, TFNTwitterUserDataSource, TFSTwitterScribeContext;

@interface T1TweetNotificationsButtonViewModel : NSObject

@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (nonatomic) long long tweetNotificationsRelationshipState;
@property (retain, nonatomic) T1AccountNotificationSettingsProperty *notificationSettingsProperty;
@property (readonly, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (nonatomic) _Bool isRelationshipBeingFetched;
@property (readonly, nonatomic) TFNTwitterUserDataSource *userDataSource;
@property (weak, nonatomic) T1TweetNotificationsButton *tweetNotificationsButton;
@property (weak, nonatomic) id <T1TweetNotificationsDelegate> delegate;

/* instance methods */
- (id)initWithAccount:(id)account userDataSource:(id)source scribeContext:(id)context;
- (void)dealloc;
- (_Bool)isButtonSelected;
- (void)handleNotificationsButtonTapped;
- (void)_t1_userDataSourceDidUpdate:(id)update;
- (void)_t1_invalidateRelationshipAndSetUpdated:(_Bool)updated;
- (void)_t1_handleUpdateRelationship:(id)relationship;
- (_Bool)_t1_shouldReFetchRelationship:(id)relationship;
- (long long)_t1_tweetNotificationsRelationshipStateForRelationship:(id)relationship;

@end

#endif /* T1TweetNotificationsButtonViewModel_h */

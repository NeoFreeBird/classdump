//
#ifndef T1TweetNotificationsButton_h
#define T1TweetNotificationsButton_h
@import Foundation;

#include "T1TweetNotificationsButtonViewModel.h"
#include "T1UserViewActionControl-Protocol.h"

@class NSString, TFNButton, TFSTwitterScribeContext;

@interface T1TweetNotificationsButton : TFNButton <T1UserViewActionControl>

@property (readonly, nonatomic) T1TweetNotificationsButtonViewModel *viewModel;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)updateState;
- (void)_t1_notificationsButtonTapped:(id)tapped;

@end

#endif /* T1TweetNotificationsButton_h */

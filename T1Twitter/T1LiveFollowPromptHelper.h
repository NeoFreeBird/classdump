//
#ifndef T1LiveFollowPromptHelper_h
#define T1LiveFollowPromptHelper_h
@import Foundation;

@class NSDictionary, NSObject, NSString, TFNItemsDataViewController, TFNTwitterAccount, TFNTwitterUserDataSource, TFSTwitterScribeContext, TUITwitterUserContext;

@interface T1LiveFollowPromptHelper : NSObject

@property (retain, nonatomic) TFNItemsDataViewController *controller;
@property (weak, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TFNTwitterUserDataSource *userDataSource;
@property (readonly, nonatomic) TUITwitterUserContext *userContext;
@property (retain, nonatomic) NSString *followToken;
@property (nonatomic) _Bool hasLiveFollowPermission;
@property (retain, nonatomic) NSDictionary *scribeParameters;
@property (readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly, copy, nonatomic) NSDictionary *userScribeItem;

/* instance methods */
- (id)initWithTargetUserDataSource:(id)source userContext:(id)context account:(id)account controller:(id)controller scribeContext:(id)context userScribeItem:(id)item;
- (id)init;
- (void)promptLiveUnfollowWithResponse:(id /* block */)response;
- (void)_liveUnfollowWasAccepted;

@end

#endif /* T1LiveFollowPromptHelper_h */

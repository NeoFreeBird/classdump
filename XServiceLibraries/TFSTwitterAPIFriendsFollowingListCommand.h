//
#ifndef TFSTwitterAPIFriendsFollowingListCommand_h
#define TFSTwitterAPIFriendsFollowingListCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSNumber, NSString;

@interface TFSTwitterAPIFriendsFollowingListCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSString *screenName;
@property (retain, nonatomic) NSString *cursor;
@property (nonatomic) _Bool withTotalCount;

/* instance methods */
- (id)initWithAccountID:(id)id userID:(id)id cursor:(id)cursor withTotalCount:(_Bool)count context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id screenName:(id)name cursor:(id)cursor withTotalCount:(_Bool)count context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (unsigned long long)friendsRequestType;
- (id)request;

@end

#endif /* TFSTwitterAPIFriendsFollowingListCommand_h */

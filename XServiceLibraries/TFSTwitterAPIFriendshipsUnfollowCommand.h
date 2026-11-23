//
#ifndef TFSTwitterAPIFriendshipsUnfollowCommand_h
#define TFSTwitterAPIFriendshipsUnfollowCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSNumber, NSString;

@interface TFSTwitterAPIFriendshipsUnfollowCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSString *screenName;
@property (retain, nonatomic) NSString *impressionID;
@property (nonatomic) _Bool earned;

/* instance methods */
- (id)initWithAccountID:(id)id userID:(id)id screenName:(id)name impressionID:(id)id earned:(_Bool)earned context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (void)processResponse:(id)response;

@end

#endif /* TFSTwitterAPIFriendshipsUnfollowCommand_h */

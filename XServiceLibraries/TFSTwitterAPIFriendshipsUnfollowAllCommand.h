//
#ifndef TFSTwitterAPIFriendshipsUnfollowAllCommand_h
#define TFSTwitterAPIFriendshipsUnfollowAllCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSArray;

@interface TFSTwitterAPIFriendshipsUnfollowAllCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSArray *userIDs;

/* instance methods */
- (id)initWithAccountID:(id)id context:(id)context userIDs:(id)ids source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (void)processResponse:(id)response;

@end

#endif /* TFSTwitterAPIFriendshipsUnfollowAllCommand_h */

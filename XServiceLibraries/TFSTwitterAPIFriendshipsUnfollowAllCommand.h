//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

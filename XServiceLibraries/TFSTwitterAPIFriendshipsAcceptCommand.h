//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIFriendshipsAcceptCommand_h
#define TFSTwitterAPIFriendshipsAcceptCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSNumber, NSString;

@interface TFSTwitterAPIFriendshipsAcceptCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSString *screenName;

/* instance methods */
- (id)initWithAccountID:(id)id userID:(id)id screenName:(id)name context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (void)processResponse:(id)response;

@end

#endif /* TFSTwitterAPIFriendshipsAcceptCommand_h */

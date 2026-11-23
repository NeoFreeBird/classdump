//
#ifndef TFSTwitterAPIFriendshipsDenyCommand_h
#define TFSTwitterAPIFriendshipsDenyCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSNumber, NSString;

@interface TFSTwitterAPIFriendshipsDenyCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSString *screenName;

/* instance methods */
- (id)initWithAccountID:(id)id userID:(id)id screenName:(id)name context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (void)processResponse:(id)response;

@end

#endif /* TFSTwitterAPIFriendshipsDenyCommand_h */

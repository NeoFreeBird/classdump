//
#ifndef TFSTwitterAPIFriendshipsCancelCommand_h
#define TFSTwitterAPIFriendshipsCancelCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSNumber, NSString;

@interface TFSTwitterAPIFriendshipsCancelCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSString *impressionID;
@property (nonatomic) _Bool earned;

/* instance methods */
- (id)initWithAccountID:(id)id userID:(id)id screenName:(id)name impressionID:(id)id earned:(_Bool)earned context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (void)processResponse:(id)response;

@end

#endif /* TFSTwitterAPIFriendshipsCancelCommand_h */

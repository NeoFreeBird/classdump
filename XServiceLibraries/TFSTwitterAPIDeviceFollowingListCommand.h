//
#ifndef TFSTwitterAPIDeviceFollowingListCommand_h
#define TFSTwitterAPIDeviceFollowingListCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSNumber, NSString;

@interface TFSTwitterAPIDeviceFollowingListCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSString *cursor;
@property (nonatomic) _Bool skipStatus;

/* instance methods */
- (id)initWithAccountID:(id)id userID:(id)id cursor:(id)cursor skipStatus:(_Bool)status context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIDeviceFollowingListCommand_h */

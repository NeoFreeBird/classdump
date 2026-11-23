//
#ifndef TFSTwitterAPIMutesUsersCreateCommand_h
#define TFSTwitterAPIMutesUsersCreateCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithExternalResponseProcessor.h"

@class NSNumber, NSString;

@interface TFSTwitterAPIMutesUsersCreateCommand : TFSTwitterAPICommandWithExternalResponseProcessor

@property (readonly, nonatomic) NSNumber *userID;
@property (readonly, nonatomic) NSString *screenName;
@property (readonly, nonatomic) NSString *impressionID;
@property (readonly, nonatomic) _Bool earned;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id userID:(id)id impressionID:(id)id isEarned:(_Bool)earned responseModelBuilder:(id)builder responseProcessorBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (id)initWithContext:(id)context accountID:(id)id screenName:(id)name impressionID:(id)id isEarned:(_Bool)earned responseModelBuilder:(id)builder responseProcessorBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (id)request;
- (_Bool)isEarned;

@end

#endif /* TFSTwitterAPIMutesUsersCreateCommand_h */

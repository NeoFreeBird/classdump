//
#ifndef TFSTwitterAPIBadgeCountsCommand_h
#define TFSTwitterAPIBadgeCountsCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSNumber;

@interface TFSTwitterAPIBadgeCountsCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (readonly, nonatomic) NSNumber *activityModelVersion;
@property (readonly, nonatomic) _Bool urtEnabled;
@property (readonly, nonatomic) _Bool xchatEnabled;
@property (readonly, nonatomic) _Bool grokBotEnabled;
@property (readonly, nonatomic) long long userID;

/* instance methods */
- (id)initWithAccountID:(id)id userID:(long long)id activityModelVersion:(id)version urtEnabled:(_Bool)enabled xchatEnabled:(_Bool)enabled grokBotEnabled:(_Bool)enabled context:(id)context responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIBadgeCountsCommand_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIBlocksCreateCommand_h
#define TFSTwitterAPIBlocksCreateCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithExternalResponseProcessor.h"

@class NSNumber, NSString;

@interface TFSTwitterAPIBlocksCreateCommand : TFSTwitterAPICommandWithExternalResponseProcessor

@property (readonly, nonatomic) NSNumber *userID;
@property (readonly, nonatomic) NSString *screenName;
@property (readonly, nonatomic) NSString *impressionID;
@property (readonly, nonatomic) _Bool isEarned;

/* instance methods */
- (id)initWithAccountID:(id)id userID:(id)id impressionID:(id)id isEarned:(_Bool)earned context:(id)context responseModelBuilder:(id)builder responseProcessorBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (id)initWithAccountID:(id)id screenName:(id)name impressionID:(id)id isEarned:(_Bool)earned context:(id)context responseModelBuilder:(id)builder responseProcessorBlock:(id /* block */)block completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIBlocksCreateCommand_h */

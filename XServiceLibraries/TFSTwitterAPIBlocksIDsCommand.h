//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIBlocksIDsCommand_h
#define TFSTwitterAPIBlocksIDsCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPIBlocksIDsCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSString *cursor;

/* instance methods */
- (id)initWithAccountID:(id)id cursor:(id)cursor context:(id)context source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIBlocksIDsCommand_h */

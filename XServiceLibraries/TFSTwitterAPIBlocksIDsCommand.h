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

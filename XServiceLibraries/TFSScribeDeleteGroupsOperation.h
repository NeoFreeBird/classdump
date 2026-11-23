//
#ifndef TFSScribeDeleteGroupsOperation_h
#define TFSScribeDeleteGroupsOperation_h
@import Foundation;

#include "TFSScribeOperation.h"

@class NSArray, NSMutableSet;

@interface TFSScribeDeleteGroupsOperation : TFSScribeOperation

@property (readonly, nonatomic) NSMutableSet *flushedEventKeysAwaitingResponse;
@property (readonly, copy, nonatomic) NSArray *groups;

/* instance methods */
- (id)initWithApplicationLink:(id)link databaseProvider:(id)provider flushedEventKeysAwaitingResponse:(id)response groups:(id)groups;
- (void)main;

@end

#endif /* TFSScribeDeleteGroupsOperation_h */

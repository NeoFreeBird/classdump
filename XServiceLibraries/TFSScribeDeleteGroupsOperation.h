//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

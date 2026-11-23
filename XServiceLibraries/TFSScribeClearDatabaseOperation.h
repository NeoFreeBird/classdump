//
#ifndef TFSScribeClearDatabaseOperation_h
#define TFSScribeClearDatabaseOperation_h
@import Foundation;

#include "TFSScribeOperation.h"

@class NSMutableSet;

@interface TFSScribeClearDatabaseOperation : TFSScribeOperation

@property (readonly, nonatomic) NSMutableSet *flushedEventKeysAwaitingResponse;

/* instance methods */
- (id)initWithApplicationLink:(id)link databaseProvider:(id)provider flushedEventKeysAwaitingResponse:(id)response;
- (void)main;

@end

#endif /* TFSScribeClearDatabaseOperation_h */

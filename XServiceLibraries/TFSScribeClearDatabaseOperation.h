//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

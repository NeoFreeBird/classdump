//
#ifndef TFSModelDiskCacheReadStrategy_Protocol_h
#define TFSModelDiskCacheReadStrategy_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSModelDiskCacheReadStrategy <NSObject>

@required

/* required instance methods */
- (_Bool)enumerateRecordsForKeys:(id)keys withConfiguration:(id)configuration database:(id)database session:(id)session block:(id /* block */)block;
- (_Bool)enumerateRecordsForKeys:(id)keys withConfiguration:(id)configuration database:(id)database session:(id)session stoppableBlock:(id /* block */)block;

@optional

@end

#endif /* TFSModelDiskCacheReadStrategy_Protocol_h */

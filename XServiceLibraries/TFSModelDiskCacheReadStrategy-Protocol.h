//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

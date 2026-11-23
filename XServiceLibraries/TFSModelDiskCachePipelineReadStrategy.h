//
#ifndef TFSModelDiskCachePipelineReadStrategy_h
#define TFSModelDiskCachePipelineReadStrategy_h
@import Foundation;

#include "TFSModelDiskCacheReadStrategy-Protocol.h"

@class NSObject, NSString;

@interface TFSModelDiskCachePipelineReadStrategy : NSObject <TFSModelDiskCacheReadStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)enumerateRecordsForKeys:(id)keys withConfiguration:(id)configuration database:(id)database session:(id)session block:(id /* block */)block;
- (_Bool)enumerateRecordsForKeys:(id)keys withConfiguration:(id)configuration database:(id)database session:(id)session stoppableBlock:(id /* block */)block;
- (_Bool)_tfs_enumerateRecordsForKeys:(id)keys withConfiguration:(id)configuration database:(id)database session:(id)session stopEnabled:(_Bool)enabled stoppableBlock:(id /* block */)block;

@end

#endif /* TFSModelDiskCachePipelineReadStrategy_h */

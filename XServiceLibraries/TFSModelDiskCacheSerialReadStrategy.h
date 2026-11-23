//
#ifndef TFSModelDiskCacheSerialReadStrategy_h
#define TFSModelDiskCacheSerialReadStrategy_h
@import Foundation;

#include "TFSModelDiskCacheReadStrategy-Protocol.h"

@class NSObject, NSString;

@interface TFSModelDiskCacheSerialReadStrategy : NSObject <TFSModelDiskCacheReadStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)enumerateRecordsForKeys:(id)keys withConfiguration:(id)configuration database:(id)database session:(id)session block:(id /* block */)block;
- (_Bool)enumerateRecordsForKeys:(id)keys withConfiguration:(id)configuration database:(id)database session:(id)session stoppableBlock:(id /* block */)block;

@end

#endif /* TFSModelDiskCacheSerialReadStrategy_h */

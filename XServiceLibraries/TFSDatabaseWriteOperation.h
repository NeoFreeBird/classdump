//
#ifndef TFSDatabaseWriteOperation_h
#define TFSDatabaseWriteOperation_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSOperation, NSOperationQueue;

@interface TFSDatabaseWriteOperation : NSOperation <NSCopying>

@property (readonly, weak, nonatomic) NSOperationQueue *operationQueue;
@property (copy, nonatomic) id /* block */ block;

/* instance methods */
- (id)initWithQueue:(id)queue block:(id /* block */)block;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addCopyToQueueHead;

@end

#endif /* TFSDatabaseWriteOperation_h */

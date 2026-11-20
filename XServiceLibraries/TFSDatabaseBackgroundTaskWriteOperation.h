//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSDatabaseBackgroundTaskWriteOperation_h
#define TFSDatabaseBackgroundTaskWriteOperation_h
@import Foundation;

#include "TFSDatabaseUIApplicationLink.h"
#include "TFSDatabaseWriteOperation.h"

@interface TFSDatabaseBackgroundTaskWriteOperation : TFSDatabaseWriteOperation

@property (readonly, nonatomic) TFSDatabaseUIApplicationLink *applicationLink;
@property _Bool didExpire;

/* class methods */
+ (id)operationAddedToQueue:(id)queue withApplicationLink:(id)link block:(id /* block */)block;

/* instance methods */
- (id)initWithQueue:(id)queue applicationLink:(id)link block:(id /* block */)block;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)main;

@end

#endif /* TFSDatabaseBackgroundTaskWriteOperation_h */

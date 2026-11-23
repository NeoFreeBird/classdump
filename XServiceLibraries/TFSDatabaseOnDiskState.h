//
#ifndef TFSDatabaseOnDiskState_h
#define TFSDatabaseOnDiskState_h
@import Foundation;

#include "TFSDatabaseState.h"

@class NSMutableArray;

@interface TFSDatabaseOnDiskState : TFSDatabaseState

@property (readonly, nonatomic) NSMutableArray *idleConnections;
@property (nonatomic) long long writeTransactionCount;
@property (nonatomic) _Bool isApplicationActive;

/* instance methods */
- (id)init;

@end

#endif /* TFSDatabaseOnDiskState_h */

//
#ifndef TFSDatabaseIncrementalVacuumer_h
#define TFSDatabaseIncrementalVacuumer_h
@import Foundation;

#include "TFSDatabaseTransactionWrapper-Protocol.h"

@class NSObject, NSString;

@interface TFSDatabaseIncrementalVacuumer : NSObject <TFSDatabaseTransactionWrapper>

@property (nonatomic) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (_Bool)isEnabled;
- (id /* block */)wrap:(id /* block */)wrap;

@end

#endif /* TFSDatabaseIncrementalVacuumer_h */

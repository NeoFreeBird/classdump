//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSDatabaseTransactionRetryer_h
#define TFSDatabaseTransactionRetryer_h
@import Foundation;

#include "TFSDatabaseTransactionWrapper-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TFSDatabaseTransactionRetryer : NSObject <TFSDatabaseTransactionWrapper>

@property (readonly, copy, nonatomic) NSArray *retriableSQLiteResultCodes;
@property (nonatomic) double initialPauseUntilRetry;
@property (nonatomic) long long maximumRetryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRetriableSQLiteResultCodes:(id)codes;
- (id /* block */)wrap:(id /* block */)wrap;

@end

#endif /* TFSDatabaseTransactionRetryer_h */

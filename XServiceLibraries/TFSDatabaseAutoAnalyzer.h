//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSDatabaseAutoAnalyzer_h
#define TFSDatabaseAutoAnalyzer_h
@import Foundation;

#include "TFSDatabaseStateQueue.h"
#include "TFSDatabaseTransactionWrapper-Protocol.h"

@class NSObject, NSString;

@interface TFSDatabaseAutoAnalyzer : NSObject <TFSDatabaseTransactionWrapper> {
    /* instance variables */
    TFSDatabaseStateQueue *_stateQueue;
}

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

#endif /* TFSDatabaseAutoAnalyzer_h */

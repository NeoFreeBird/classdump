//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRInstallationsSingleOperationPromiseCache_h
#define FIRInstallationsSingleOperationPromiseCache_h
@import Foundation;

#include "FBLPromise.h"

@class NSObject;

@interface FIRInstallationsSingleOperationPromiseCache : NSObject

@property (readonly, nonatomic) id /* block */ newOperationHandler;
@property (retain, nonatomic) FBLPromise *pendingPromise;

/* instance methods */
- (id)initWithNewOperationHandler:(id /* block */)handler;
- (id)getExistingPendingOrCreateNewPromise;
- (id)getExistingPendingPromise;

@end

#endif /* FIRInstallationsSingleOperationPromiseCache_h */

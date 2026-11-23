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

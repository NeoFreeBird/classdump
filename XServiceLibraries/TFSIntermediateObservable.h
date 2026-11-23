//
#ifndef TFSIntermediateObservable_h
#define TFSIntermediateObservable_h
@import Foundation;

#include "TFSIntermediateObservableProtocol-Protocol.h"

@class NSObject;

@interface TFSIntermediateObservable : NSObject <TFSIntermediateObservableProtocol> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 removeObserverImp;
    B24@0:8@"NSString"16 addObserverImp;
}

/* instance methods */
- (id)addObserverWithUpdate:(id /* block */)update;
- (id)addObserverUpdateWithCachedValue:(_Bool)value update:(id /* block */)update;
- (id)addObserverWithDispatchQueue:(id)queue update:(id /* block */)update;
- (void)removeObserver:(id)observer;
- (id)init;

@end

#endif /* TFSIntermediateObservable_h */

//
#ifndef TFSObservable_h
#define TFSObservable_h
@import Foundation;

#include "TFSIntermediateObservableProtocol-Protocol.h"

@class NSObject;

@interface TFSObservable : NSObject

@property (readonly, nonatomic) id <TFSIntermediateObservableProtocol> wrappedObservable;

/* instance methods */
- (id)initWithObservable:(id)observable;
- (id)addObserverWithUpdate:(id /* block */)update;
- (id)addObserverUpdateWithCachedValue:(_Bool)value update:(id /* block */)update;
- (id)addObserverWithDispatchQueue:(id)queue update:(id /* block */)update;
- (void)removeObserver:(id)observer;

@end

#endif /* TFSObservable_h */

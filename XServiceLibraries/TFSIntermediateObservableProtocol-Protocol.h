//
#ifndef TFSIntermediateObservableProtocol_Protocol_h
#define TFSIntermediateObservableProtocol_Protocol_h
@import Foundation;

@protocol TFSIntermediateObservableProtocol

@required

/* required instance methods */
- (id)addObserverWithUpdate:(id /* block */)update;
- (id)addObserverWithUpdate:(id /* block */)update;
- (id)addObserverUpdateWithCachedValue:(_Bool)value update:(id /* block */)update;
- (id)addObserverUpdateWithCachedValue:(_Bool)value update:(id /* block */)update;
- (id)addObserverWithDispatchQueue:(id)queue update:(id /* block */)update;
- (id)addObserverWithDispatchQueue:(id)queue update:(id /* block */)update;
- (void)removeObserver:(id)observer;

@optional

@end

#endif /* TFSIntermediateObservableProtocol_Protocol_h */

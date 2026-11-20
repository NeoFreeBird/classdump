//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

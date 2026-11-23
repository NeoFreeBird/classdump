//
#ifndef TAVKeyValueObservation_h
#define TAVKeyValueObservation_h
@import Foundation;

@class NSObject, NSString;

@interface TAVKeyValueObservation : NSObject

@property (nonatomic) _Bool observing;
@property (copy, nonatomic) id /* block */ observerBlock;
@property (readonly, nonatomic) NSString *keyPath;
@property (nonatomic) unsigned long long options;
@property (readonly, weak, nonatomic) id observedObject;

/* instance methods */
- (id)initWithKeyPath:(id)path observedObject:(id)object options:(unsigned long long)options observerBlock:(id /* block */)block;
- (void)dealloc;
- (void)startObserving;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;

@end

#endif /* TAVKeyValueObservation_h */

//
#ifndef TFNInterfaceOrientationChangeListener_h
#define TFNInterfaceOrientationChangeListener_h
@import Foundation;

@class NSObject;
@protocol TFNInterfaceOrientationChangeListenerDelegate;

@interface TFNInterfaceOrientationChangeListener : NSObject

@property (nonatomic) _Bool isListeningForOrientationChanges;
@property (readonly, nonatomic) unsigned long long observedOrientations;
@property (weak, nonatomic) id <TFNInterfaceOrientationChangeListenerDelegate> delegate;

/* instance methods */
- (id)initWithObservedOrientations:(unsigned long long)orientations delegate:(id)delegate;
- (id)init;
- (void)startObservingInterfaceOrientationChanges;
- (void)stopObservingInterfaceOrientationChanges;
- (void)_tfn_deviceOrientationChanged:(id)changed;
- (void)dealloc;

@end

#endif /* TFNInterfaceOrientationChangeListener_h */

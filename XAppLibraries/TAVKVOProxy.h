//
#ifndef TAVKVOProxy_h
#define TAVKVOProxy_h
@import Foundation;

@class NSObject;

@interface TAVKVOProxy : NSObject

@property (weak, nonatomic) NSObject *observer;

/* instance methods */
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;

@end

#endif /* TAVKVOProxy_h */

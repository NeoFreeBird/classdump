//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

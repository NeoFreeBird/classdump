//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNInteractiveIndex_h
#define TFNInteractiveIndex_h
@import Foundation;

@class NSObject;

@interface TFNInteractiveIndex : NSObject

@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) unsigned long long offset;

/* instance methods */
- (id)initWithIndex:(unsigned long long)index offset:(unsigned long long)offset;

@end

#endif /* TFNInteractiveIndex_h */

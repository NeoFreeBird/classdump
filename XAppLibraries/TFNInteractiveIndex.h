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

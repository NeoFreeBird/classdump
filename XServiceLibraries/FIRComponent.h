//
#ifndef FIRComponent_h
#define FIRComponent_h
@import Foundation;

@class NSObject, Protocol;

@interface FIRComponent : NSObject

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) long long instantiationTiming;
@property (readonly, copy, nonatomic) id /* block */ creationBlock;

/* class methods */
+ (id)componentWithProtocol:(id)protocol creationBlock:(id /* block */)block;
+ (id)componentWithProtocol:(id)protocol instantiationTiming:(long long)timing creationBlock:(id /* block */)block;

/* instance methods */
- (id)initWithProtocol:(id)protocol instantiationTiming:(long long)timing creationBlock:(id /* block */)block;

@end

#endif /* FIRComponent_h */

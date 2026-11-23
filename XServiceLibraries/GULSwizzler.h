//
#ifndef GULSwizzler_h
#define GULSwizzler_h
@import Foundation;

@class NSObject;

@interface GULSwizzler : NSObject

/* class methods */
+ (void)swizzleClass:(Class)_class selector:(SEL)selector isClassSelector:(_Bool)selector withBlock:(id)block;
+ (void * /* function */)currentImplementationForClass:(Class)_class selector:(SEL)selector isClassSelector:(_Bool)selector;
+ (_Bool)selector:(SEL)selector existsInClass:(Class)_class isClassSelector:(_Bool)selector;
+ (id)ivarObjectsForObject:(id)object;

@end

#endif /* GULSwizzler_h */

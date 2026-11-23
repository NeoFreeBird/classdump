//
#ifndef TFSSecureCoding_h
#define TFSSecureCoding_h
@import Foundation;

@class NSObject;

@interface TFSSecureCoding : NSObject

/* class methods */
+ (id)dataFromRootObject:(id)object;
+ (id)objectFromData:(id)data asClass:(Class)_class;
+ (id)objectFromData:(id)data asClass:(Class)_class ofClasses:(id)classes;

@end

#endif /* TFSSecureCoding_h */

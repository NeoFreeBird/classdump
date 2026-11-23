//
#ifndef TFSNonSecureCoding_h
#define TFSNonSecureCoding_h
@import Foundation;

@class NSObject;

@interface TFSNonSecureCoding : NSObject

/* class methods */
+ (id)dataFromRootObject:(id)object;
+ (id)objectFromData:(id)data asClass:(Class)_class;

@end

#endif /* TFSNonSecureCoding_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

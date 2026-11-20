//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVLoggingSystemObjC_h
#define TAVLoggingSystemObjC_h
@import Foundation;

@class NSObject;

@interface TAVLoggingSystemObjC : NSObject // (Swift)

/* class methods */
+ (void)bootstrapWithObjCBlock:(id /* block */)cblock;

/* instance methods */
- (id)init;

@end

#endif /* TAVLoggingSystemObjC_h */

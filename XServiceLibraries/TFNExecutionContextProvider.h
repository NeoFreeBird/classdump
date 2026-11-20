//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNExecutionContextProvider_h
#define TFNExecutionContextProvider_h
@import Foundation;

@class NSObject;

@interface TFNExecutionContextProvider : NSObject

/* class methods */
+ (void)setSharedContext:(id)context;
+ (id)sharedContext;

@end

#endif /* TFNExecutionContextProvider_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TGFExecuteContext_h
#define TGFExecuteContext_h
@import Foundation;

@class CIContext, NSObject;

@interface TGFExecuteContext : NSObject

@property (readonly, nonatomic) CIContext *coreImageContext;

/* instance methods */

@end

#endif /* TGFExecuteContext_h */

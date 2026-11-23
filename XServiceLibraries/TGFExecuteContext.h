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

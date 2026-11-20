//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBCPeriscopeAuthenticationOperationContext_h
#define TBCPeriscopeAuthenticationOperationContext_h
@import Foundation;

@class NSObject;

@interface TBCPeriscopeAuthenticationOperationContext : NSObject

@property (retain, nonatomic) id owner;
@property (copy, nonatomic) id /* block */ completionBlock;

/* instance methods */

@end

#endif /* TBCPeriscopeAuthenticationOperationContext_h */

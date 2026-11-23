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

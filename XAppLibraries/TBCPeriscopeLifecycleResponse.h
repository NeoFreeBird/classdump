//
#ifndef TBCPeriscopeLifecycleResponse_h
#define TBCPeriscopeLifecycleResponse_h
@import Foundation;

@class NSError, TNLResponse;

@interface TBCPeriscopeLifecycleResponse : TNLResponse

@property (retain, nonatomic) id responseObject;
@property (retain, nonatomic) NSError *parseError;

/* instance methods */
- (void)prepare;

@end

#endif /* TBCPeriscopeLifecycleResponse_h */

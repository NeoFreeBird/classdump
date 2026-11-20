//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

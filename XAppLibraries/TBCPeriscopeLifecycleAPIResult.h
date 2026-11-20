//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBCPeriscopeLifecycleAPIResult_h
#define TBCPeriscopeLifecycleAPIResult_h
@import Foundation;

@class NSDictionary, NSError, NSObject;

@interface TBCPeriscopeLifecycleAPIResult : NSObject

@property (readonly, nonatomic) _Bool didSucceedRemotely;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) id responseObject;
@property (readonly, nonatomic) NSDictionary *responseDictionary;

/* instance methods */
- (id)initWithStatusCode:(long long)code responseObject:(id)object error:(id)error;

@end

#endif /* TBCPeriscopeLifecycleAPIResult_h */

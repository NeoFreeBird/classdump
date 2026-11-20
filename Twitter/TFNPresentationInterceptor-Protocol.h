//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNPresentationInterceptor_Protocol_h
#define TFNPresentationInterceptor_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNPresentationInterceptor <NSObject>

@required

/* required instance methods */
- (id)viewController:(id)controller willPresentWithPresentationInfo:(id)info;
- (id)viewController:(id)controller willPresentWithPresentationInfo:(id)info;

@optional

@end

#endif /* TFNPresentationInterceptor_Protocol_h */

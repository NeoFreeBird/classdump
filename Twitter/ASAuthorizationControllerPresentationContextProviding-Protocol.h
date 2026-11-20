//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ASAuthorizationControllerPresentationContextProviding_Protocol_h
#define ASAuthorizationControllerPresentationContextProviding_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ASAuthorizationControllerPresentationContextProviding <NSObject>

@required

/* required instance methods */
- (id)presentationAnchorForAuthorizationController:(id)controller;

@optional

@end

#endif /* ASAuthorizationControllerPresentationContextProviding_Protocol_h */

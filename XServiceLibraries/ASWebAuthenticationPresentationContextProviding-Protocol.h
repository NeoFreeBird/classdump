//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ASWebAuthenticationPresentationContextProviding_Protocol_h
#define ASWebAuthenticationPresentationContextProviding_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ASWebAuthenticationPresentationContextProviding <NSObject>

@required

/* required instance methods */
- (id)presentationAnchorForWebAuthenticationSession:(id)session;

@optional

@end

#endif /* ASWebAuthenticationPresentationContextProviding_Protocol_h */

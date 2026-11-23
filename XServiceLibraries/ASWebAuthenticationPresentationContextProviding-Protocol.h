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

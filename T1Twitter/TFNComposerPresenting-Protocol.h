//
#ifndef TFNComposerPresenting_Protocol_h
#define TFNComposerPresenting_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNComposerPresenting <NSObject>

@required

/* required instance methods */
- (void)presentComposerFromViewController:(id)controller;
- (void)presentComposerFromViewController:(id)controller;

@optional

@end

#endif /* TFNComposerPresenting_Protocol_h */

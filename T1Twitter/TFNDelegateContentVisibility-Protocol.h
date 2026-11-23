//
#ifndef TFNDelegateContentVisibility_Protocol_h
#define TFNDelegateContentVisibility_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNDelegateContentVisibility <NSObject>

@required

/* required instance methods */
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })visibleContentInsetForView:(id)view;

@optional

@end

#endif /* TFNDelegateContentVisibility_Protocol_h */

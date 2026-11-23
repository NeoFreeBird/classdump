//
#ifndef TUICardViewAccessible_Protocol_h
#define TUICardViewAccessible_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUICardViewAccessible <NSObject>

@required

/* required instance methods */
- (id)accessibilityStringForStatusText:(id)text;
- (id)accessibilityStringForStatusText:(id)text;

@optional

/* optional instance methods */
- (id)accessibilityCustomCardActions;

@end

#endif /* TUICardViewAccessible_Protocol_h */

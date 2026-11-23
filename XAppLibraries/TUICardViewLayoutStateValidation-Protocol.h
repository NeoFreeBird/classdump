//
#ifndef TUICardViewLayoutStateValidation_Protocol_h
#define TUICardViewLayoutStateValidation_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUICardViewLayoutStateValidation <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)isLayoutStateValidForCardContext:(id)context;

@end

#endif /* TUICardViewLayoutStateValidation_Protocol_h */

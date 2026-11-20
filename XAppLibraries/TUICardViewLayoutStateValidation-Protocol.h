//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

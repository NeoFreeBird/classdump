//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNViewControllerVisibility_Protocol_h
#define TFNViewControllerVisibility_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNViewControllerVisibility <NSObject>

@required

@property (nonatomic, readonly) _Bool visible;
@property (nonatomic, readonly) _Bool visible;

/* required instance methods */
- (_Bool)isVisible;
- (_Bool)isVisible;

@optional

@end

#endif /* TFNViewControllerVisibility_Protocol_h */

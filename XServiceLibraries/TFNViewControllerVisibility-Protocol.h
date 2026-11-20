//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNViewControllerVisibility_Protocol_h
#define TFNViewControllerVisibility_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNViewControllerVisibility <NSObject>

@required

@property (readonly, nonatomic) _Bool visible;

/* required instance methods */
- (_Bool)isVisible;

@optional

@end

#endif /* TFNViewControllerVisibility_Protocol_h */

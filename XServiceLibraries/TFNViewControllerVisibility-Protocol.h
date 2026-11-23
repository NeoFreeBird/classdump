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

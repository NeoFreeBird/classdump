//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSizeThatFitsHelperDelegate_Protocol_h
#define TFNSizeThatFitsHelperDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNSizeThatFitsHelperDelegate <NSObject>

@required

/* required instance methods */
- (void)sizeThatFitsHelper:(id)helper layoutSubviewsForView:(id)view atWidth:(double)width;

@optional

/* optional instance methods */
- (_Bool)sizeThatFitsHelper:(id)helper shouldIncludeSubview:(id)subview inSizeThatFitsCalculationForView:(id)view;

@end

#endif /* TFNSizeThatFitsHelperDelegate_Protocol_h */

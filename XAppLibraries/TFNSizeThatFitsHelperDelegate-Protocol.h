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

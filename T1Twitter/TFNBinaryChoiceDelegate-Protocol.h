//
#ifndef TFNBinaryChoiceDelegate_Protocol_h
#define TFNBinaryChoiceDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNBinaryChoiceDelegate <NSObject>

@required

/* required instance methods */
- (void)didAccept:(id)accept event:(id)event;
- (void)didDecline:(id)decline event:(id)event;

@optional

@end

#endif /* TFNBinaryChoiceDelegate_Protocol_h */

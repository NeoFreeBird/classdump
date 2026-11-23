//
#ifndef TFNDismissDelegate_Protocol_h
#define TFNDismissDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNDismissDelegate <NSObject>

@required

/* required instance methods */
- (void)dismissableViewDidDismiss:(id)dismiss;

@optional

@end

#endif /* TFNDismissDelegate_Protocol_h */

//
#ifndef T1AppUIResponderEventHandling_Protocol_h
#define T1AppUIResponderEventHandling_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AppUIResponderEventHandling <NSObject>

@required

/* required instance methods */
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;

@optional

@end

#endif /* T1AppUIResponderEventHandling_Protocol_h */

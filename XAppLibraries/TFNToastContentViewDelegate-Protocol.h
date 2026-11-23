//
#ifndef TFNToastContentViewDelegate_Protocol_h
#define TFNToastContentViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNToastContentViewDelegate <NSObject>

@required

/* required instance methods */
- (void)toastView:(id)view didInvokeToastAction:(id)action actionView:(id)view;

@optional

@end

#endif /* TFNToastContentViewDelegate_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

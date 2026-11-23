//
#ifndef TFNToasterContextDelegate_Protocol_h
#define TFNToasterContextDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNToasterContextDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)scribePageForToaster:(id)toaster;
- (_Bool)toaster:(id)toaster canDisplayToast:(id)toast withPriority:(unsigned long long)priority;
- (id)toaster:(id)toaster overrideAction:(id)action forToast:(id)toast;

@end

#endif /* TFNToasterContextDelegate_Protocol_h */

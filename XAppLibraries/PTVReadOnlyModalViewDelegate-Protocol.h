//
#ifndef PTVReadOnlyModalViewDelegate_Protocol_h
#define PTVReadOnlyModalViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVReadOnlyModalViewDelegate <NSObject>

@required

/* required instance methods */
- (void)readOnlyModalViewDidSelectDismiss:(id)dismiss;

@optional

@end

#endif /* PTVReadOnlyModalViewDelegate_Protocol_h */

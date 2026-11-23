//
#ifndef T1SecurityLoginRequestCellDelegate_Protocol_h
#define T1SecurityLoginRequestCellDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1SecurityLoginRequestCellDelegate <NSObject>

@required

/* required instance methods */
- (void)loginRequestCell:(id)cell didMakeSelection:(long long)selection;

@optional

@end

#endif /* T1SecurityLoginRequestCellDelegate_Protocol_h */

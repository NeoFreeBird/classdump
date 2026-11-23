//
#ifndef T1AppealPivotViewDelegate_Protocol_h
#define T1AppealPivotViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AppealPivotViewDelegate <NSObject>

@required

/* required instance methods */
- (void)appealPivotViewDidTap:(id)tap;

@optional

@end

#endif /* T1AppealPivotViewDelegate_Protocol_h */

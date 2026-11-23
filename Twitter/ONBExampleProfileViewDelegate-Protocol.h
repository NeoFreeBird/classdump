//
#ifndef ONBExampleProfileViewDelegate_Protocol_h
#define ONBExampleProfileViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBExampleProfileViewDelegate <NSObject>

@required

/* required instance methods */
- (void)exampleProfileView:(id)view didTapAddBannerControl:(id)control;

@optional

@end

#endif /* ONBExampleProfileViewDelegate_Protocol_h */

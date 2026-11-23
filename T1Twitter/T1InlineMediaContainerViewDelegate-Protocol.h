//
#ifndef T1InlineMediaContainerViewDelegate_Protocol_h
#define T1InlineMediaContainerViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1InlineMediaContainerViewDelegate <NSObject>

@required

/* required instance methods */
- (void)inlineMediaContainerView:(id)view didTapCTAButtonWithModel:(id)model;

@optional

@end

#endif /* T1InlineMediaContainerViewDelegate_Protocol_h */

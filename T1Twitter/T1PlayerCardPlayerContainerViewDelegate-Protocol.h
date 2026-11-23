//
#ifndef T1PlayerCardPlayerContainerViewDelegate_Protocol_h
#define T1PlayerCardPlayerContainerViewDelegate_Protocol_h
@import Foundation;

#include "T1CardPlayerContainerDelegate-Protocol.h"

@protocol T1PlayerCardPlayerContainerViewDelegate <T1CardPlayerContainerDelegate>

@required

/* required instance methods */
- (void)cardPlayerContainerView:(id)view didTapPlayButtonOverlayWithEvent:(id)event;
- (void)cardPlayerContainerView:(id)view didTapPlayButtonOverlayWithEvent:(id)event;

@optional

@end

#endif /* T1PlayerCardPlayerContainerViewDelegate_Protocol_h */

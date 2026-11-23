//
#ifndef T1PlayerCardInlineVideoViewDelegate_Protocol_h
#define T1PlayerCardInlineVideoViewDelegate_Protocol_h
@import Foundation;

#include "T1CardPlayerContainerDelegate-Protocol.h"

@protocol T1PlayerCardInlineVideoViewDelegate <T1CardPlayerContainerDelegate>

@required

/* required instance methods */
- (void)cardPlayerContainerViewDidTapPlayButtonOverlay:(id)overlay;

@optional

@end

#endif /* T1PlayerCardInlineVideoViewDelegate_Protocol_h */

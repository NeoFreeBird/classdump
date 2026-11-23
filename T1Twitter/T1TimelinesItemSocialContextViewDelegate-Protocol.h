//
#ifndef T1TimelinesItemSocialContextViewDelegate_Protocol_h
#define T1TimelinesItemSocialContextViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TimelinesItemSocialContextViewDelegate <NSObject>

@required

/* required instance methods */
- (void)socialContextViewDidTap:(id)tap;
- (void)socialContextView:(id)view didTapCaret:(id)caret;
- (id)previewConfigurationForSocialContextView:(id)view;
- (void)socialContextView:(id)view didTapActionButton:(id)button withViewModel:(id)model;

@optional

/* optional instance methods */
- (void)socialContextViewDidTapSeeLess:(id)less;
- (void)socialContextViewDidLongPress:(id)press;

@end

#endif /* T1TimelinesItemSocialContextViewDelegate_Protocol_h */

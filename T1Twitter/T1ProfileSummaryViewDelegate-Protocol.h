//
#ifndef T1ProfileSummaryViewDelegate_Protocol_h
#define T1ProfileSummaryViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ProfileSummaryViewDelegate <NSObject>

@required

/* required instance methods */
- (void)summaryView:(id)view didTapAvatar:(id)avatar menuSource:(id)source fromLongPress:(_Bool)press;
- (void)summaryViewDidTapFullName:(id)name;
- (void)summaryView:(id)view didTapUserBadge:(id)badge withinUserBadges:(id)badges sourceView:(id)view sourceViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)summaryViewDidTapDesignatorLabel:(id)label range:(id)range;
- (void)summaryView:(id)view didTapUnderReviewButton:(id)button sourceView:(id)view;
- (void)didTapUserDesignatorView:(id)view;
- (_Bool)summaryViewShouldHideGetVerifiedButton:(id)button;

@optional

@end

#endif /* T1ProfileSummaryViewDelegate_Protocol_h */

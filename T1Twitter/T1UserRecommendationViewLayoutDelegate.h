//
#ifndef T1UserRecommendationViewLayoutDelegate_h
#define T1UserRecommendationViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1UserRecommendationViewLayoutDelegate : NSObject <TFNLayoutableViewLayoutDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (id)layoutForViewModel:(id)model account:(id)account width:(double)width mediaViewSize:(struct CGSize { double x0; double x1; })size withPreviousLayoutState:(id)state;
- (_Bool)_t1_layoutState:(id)state isValidForViewModel:(id)model account:(id)account width:(double)width mediaViewSize:(struct CGSize { double x0; double x1; })size;
- (id)_t1_performLayoutForViewModel:(id)model account:(id)account width:(double)width mediaViewSize:(struct CGSize { double x0; double x1; })size;
- (double)_t1_mediaView:(id)view width:(double)width mediaViewHeight:(double)height;
- (double)_t1_layoutBannerImage:(id)image width:(double)width mediaViewMaxY:(double)y;
- (double)_t1_layoutAvatar:(id)avatar bannerViewMaxY:(double)y followControlHeight:(double)height account:(id)account;
- (double)_t1_layoutFollowControl:(id)control followControlSize:(struct CGSize { double x0; double x1; })size width:(double)width yCoordinate:(double)coordinate;
- (double)_t1_layoutAuthor:(id)author user:(id)user userBadger:(id)badger followControlSize:(struct CGSize { double x0; double x1; })size width:(double)width yCoordinate:(double)coordinate;
- (double)_t1_layoutBio:(id)bio user:(id)user width:(double)width yCoordinate:(double)coordinate;
- (double)_t1_maxYForLayoutState:(id)state;
- (void)layoutSubviewsForLayoutableView:(id)view;

@end

#endif /* T1UserRecommendationViewLayoutDelegate_h */

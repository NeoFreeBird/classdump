//
#ifndef T1StandardStatusAffiliateBadgeViewLayoutState_h
#define T1StandardStatusAffiliateBadgeViewLayoutState_h
@import Foundation;

@class NSString, TFNComposableViewLayoutState;

@interface T1StandardStatusAffiliateBadgeViewLayoutState : TFNComposableViewLayoutState

@property (copy, nonatomic) NSString *designatorString;
@property (copy, nonatomic) NSString *designatorImageUrl;
@property (nonatomic) long long designatorIconType;
@property (nonatomic) long long designatorLabelType;
@property (copy, nonatomic) NSString *designatorUrl;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } affiliateBadgeFrame;
@property (nonatomic) _Bool hasAccountLabel;

/* instance methods */

@end

#endif /* T1StandardStatusAffiliateBadgeViewLayoutState_h */

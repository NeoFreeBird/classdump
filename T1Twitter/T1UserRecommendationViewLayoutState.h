//
#ifndef T1UserRecommendationViewLayoutState_h
#define T1UserRecommendationViewLayoutState_h
@import Foundation;

#include "TTACoreStatusViewModel-Protocol.h"

@class NSObject, TFNTwitterAccount;

@interface T1UserRecommendationViewLayoutState : NSObject

@property (retain, nonatomic) id <TTACoreStatusViewModel> viewModel;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bannerImageFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } avatarFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fullNameFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } usernameFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } badgeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } followControlFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bioFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } mediaViewFrame;
@property (nonatomic) struct CGSize { double x0; double x1; } size;

/* instance methods */

@end

#endif /* T1UserRecommendationViewLayoutState_h */

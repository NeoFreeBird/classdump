//
#ifndef TFCCustomerFeedbackRatingViewsContainerView_h
#define TFCCustomerFeedbackRatingViewsContainerView_h
@import Foundation;

#include "TFCCustomerFeedbackCSATRatingView.h"
#include "TFCCustomerFeedbackNPSRatingView.h"
#include "TFCCustomerFeedbackRatingViewDelegate-Protocol.h"

@class NSString, UIView;

@interface TFCCustomerFeedbackRatingViewsContainerView : UIView <TFCCustomerFeedbackRatingViewDelegate>

@property (retain, nonatomic) TFCCustomerFeedbackNPSRatingView *npsRatingView;
@property (retain, nonatomic) TFCCustomerFeedbackCSATRatingView *csatRatingView;
@property (weak, nonatomic) id <TFCCustomerFeedbackRatingViewDelegate> delegate;
@property (nonatomic) unsigned long long feedbackType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)resetSelection;
- (void)prepareForReuse;
- (void)feedbackRatingView:(id)view didUpdateToValue:(unsigned long long)value;

@end

#endif /* TFCCustomerFeedbackRatingViewsContainerView_h */

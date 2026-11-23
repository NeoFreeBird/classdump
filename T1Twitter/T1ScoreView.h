//
#ifndef T1ScoreView_h
#define T1ScoreView_h
@import Foundation;

#include "T1ScoreViewTheme.h"

@class CALayer, NSArray, TFSTwitterMomentSportEventUpdate, TIPImagePipeline, UILabel, UIStackView, UIView;

@interface T1ScoreView : UIView

@property (retain, nonatomic) NSArray *participantViews;
@property (retain, nonatomic) CALayer *dividerLayer;
@property (retain, nonatomic) UILabel *notesLabel;
@property (retain, nonatomic) CALayer *topSeparatorLayer;
@property (retain, nonatomic) UIStackView *participantsStackView;
@property (retain, nonatomic) T1ScoreViewTheme *theme;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) TFSTwitterMomentSportEventUpdate *eventUpdate;
@property (nonatomic) _Bool topSeparatorHidden;
@property (readonly, nonatomic) double spacing;

/* class methods */
+ (double)heightForEventUpdate:(id)update width:(double)width theme:(id)theme;
+ (double)estimatedHeightForEventUpdate:(id)update theme:(id)theme;
+ (id)_createNotesLabelWithTheme:(id)theme;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame theme:(id)theme;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_dynamicColorsDidReload:(id)reload;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)_calculateFrames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x[4])frames fittingSize:(struct CGSize { double x0; double x1; })size;
- (void)setEventUpdate:(id)update animated:(_Bool)animated;
- (void)cleanup;
- (double)calculatedHeightForWidth:(double)width;
- (void)_ensureParticipantViewsWithCount:(long long)count;
- (_Bool)isTopSeparatorHidden;

@end

#endif /* T1ScoreView_h */

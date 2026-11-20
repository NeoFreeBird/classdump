//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ScoreParticipantInfoView_h
#define T1ScoreParticipantInfoView_h
@import Foundation;

#include "T1ScoreParticipantInfo.h"
#include "T1ScoreParticipantInfoViewTheme.h"
#include "T1ScoreParticipantInfoWinnerView.h"
#include "TIPImageFetchDelegate-Protocol.h"

@class NSString, TIPImageFetchOperation, TIPImagePipeline, UIImageView, UILabel, UIStackView, UIView;

@interface T1ScoreParticipantInfoView : UIView <TIPImageFetchDelegate>

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *scoreWrapper;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UIView *winnerAttributionContainerView;
@property (retain, nonatomic) T1ScoreParticipantInfoWinnerView *winnerAttributionView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) T1ScoreParticipantInfoViewTheme *theme;
@property (retain, nonatomic) TIPImageFetchOperation *avatarFetchOperation;
@property (retain, nonatomic) T1ScoreParticipantInfo *participantInfo;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForParticipantInfo:(id)info width:(double)width theme:(id)theme;
+ (double)estimatedHeightForParticipantInfo:(id)info theme:(id)theme;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame theme:(id)theme;
- (void)_dynamicColorsDidReload:(id)reload;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_calculateFrames:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x[3])frames fittingSize:(struct CGSize { double x0; double x1; })size;
- (void)setParticipantInfo:(id)info animated:(_Bool)animated;
- (void)cleanup;
- (void)_updateWinnerAttributionViewAnimated:(_Bool)animated;
- (void)_hideScoreAnimatedWithCompletion:(id /* block */)completion;
- (void)_showScoreAnimatedWithCompletion:(id /* block */)completion;
- (void)_toggleScoreWithShow:(_Bool)show completion:(id /* block */)completion;
- (void)tip_imageFetchOperation:(id)operation didUpdateProgressiveImage:(id)image progress:(float)progress;
- (void)tip_imageFetchOperation:(id)operation didFailToLoadFinalImage:(id)image;
- (void)tip_imageFetchOperation:(id)operation didLoadFinalImage:(id)image;

@end

#endif /* T1ScoreParticipantInfoView_h */

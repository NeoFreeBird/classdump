//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UnifiedCardTwitterListDetailsComponentView_h
#define T1UnifiedCardTwitterListDetailsComponentView_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentView-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"

@class TFNAttributedTextView, TFNTappableHighlightView, TFSTwitterScribeContext, TIPImagePipeline, TUCLayoutableView, TUCUnifiedCard, TUIAvatarImageView, TUIUserBadger, UIImageView, UILabel, UIView;

@interface T1UnifiedCardTwitterListDetailsComponentView : TUCLayoutableView <TUCComponentView>

@property (retain, nonatomic) TFNTappableHighlightView *highlightView;
@property (retain, nonatomic) UIImageView *titleIconView;
@property (retain, nonatomic) TFNAttributedTextView *titleTextView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) TUIAvatarImageView *userAvatarImageView;
@property (retain, nonatomic) TFNAttributedTextView *userTextView;
@property (retain, nonatomic) TUIUserBadger *userBadger;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (retain, nonatomic) TUCUnifiedCard *unifiedCard;
@property (retain, nonatomic) id <TUCComponentModel> component;
@property (weak, nonatomic) id <TUCComponentViewEventDelegate> eventDelegate;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) UIView *autoplayableContainerView;

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)_t1_nameLabelFont;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)accessibilityLabel;
- (id)accessibilityCustomUCActions;
- (void)setupActions;
- (void)prepareForReuse;
- (id)supplementalParamsForEvent:(id)event;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)_t1_didTapListDetails;

@end

#endif /* T1UnifiedCardTwitterListDetailsComponentView_h */

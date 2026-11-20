//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BroadcastCellCardView_h
#define T1BroadcastCellCardView_h
@import Foundation;

#include "T1BroadcastCardViewModel.h"
#include "T1BroadcastCardViewModelDelegate-Protocol.h"
#include "T1BroadcastCellCardViewModel.h"
#include "TUICardViewAccessible-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class NSString, TUICardView, TUIPillView, UIImageView, UILabel;

@interface T1BroadcastCellCardView : TUICardView <T1BroadcastCardViewModelDelegate, TUIImageViewFetchHelperDelegate, TUICardViewAccessible>

@property (retain, nonatomic) T1BroadcastCellCardViewModel *viewModel;
@property (retain, nonatomic) T1BroadcastCardViewModel *broadcastUpdateObserver;
@property (readonly, nonatomic) UILabel *categoryLabel;
@property (readonly, nonatomic) UILabel *categorySpacerLabel;
@property (readonly, nonatomic) UILabel *liveBadge;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) TUIPillView *periscopePillView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)updateSubviews;
- (void)broadcastCardViewModelDidUpdate:(id)update;
- (id)cardMediaView;
- (id)imageFetchingViews;
- (void)setImagePipeline:(id)pipeline;
- (void)fetchImages;
- (void)cardContextDidUpdate;
- (void)prepareForReuse;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (id)accessibilityStringForStatusText:(id)text;
- (void)_t1_cleanup;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityHint;

@end

#endif /* T1BroadcastCellCardView_h */

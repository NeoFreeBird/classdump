//
#ifndef TUIAvatarImageView_h
#define TUIAvatarImageView_h
@import Foundation;

#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TUIAvatarImageViewDataSource-Protocol.h"
#include "TUIAvatarImageViewModel.h"

@class TFNAvatarImageView, TIPImagePipeline;

@interface TUIAvatarImageView : TFNAvatarImageView

@property (retain, nonatomic) TUIAvatarImageViewModel *viewModel;
@property (retain, nonatomic) id <TFSTwitterCanonicalUser> user;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (retain, nonatomic) id <TUIAvatarImageViewDataSource> dataSource;
@property (readonly, nonatomic) TUIAvatarImageViewModel *currentViewModel;
@property (nonatomic) _Bool shouldDeriveStyleFromViewModel;

/* class methods */
+ (long long)avatarImageViewStyleWithProfileImageShape:(long long)shape identityType:(long long)type;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_tui_startObservingDataSource;
- (void)_tui_stopObservingDataSource;
- (void)_tui_dataSourceDidUpdate:(id)update;
- (void)_tui_updateCurrentViewModel;
- (void)updateImageFromViewModel;
- (void)_tui_didSetStyle:(long long)style oldStyleOrNil:(id)nil;
- (void)setStyle:(long long)style;
- (void)currentViewModelWillChange:(id)change;
- (void)currentViewModelDidChange:(id)change;

@end

#endif /* TUIAvatarImageView_h */

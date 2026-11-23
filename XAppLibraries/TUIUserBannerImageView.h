//
#ifndef TUIUserBannerImageView_h
#define TUIUserBannerImageView_h
@import Foundation;

#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TUIUserBannerImageViewDataSource-Protocol.h"
#include "TUIUserBannerImageViewModel.h"

@class TIPImagePipeline, UIImageView;

@interface TUIUserBannerImageView : UIImageView

@property (retain, nonatomic) TUIUserBannerImageViewModel *bannerImageViewModel;
@property (retain, nonatomic) id <TFSTwitterCanonicalUser> user;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (retain, nonatomic) id <TUIUserBannerImageViewDataSource> dataSource;
@property (readonly, nonatomic) TUIUserBannerImageViewModel *currentViewModel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_tui_startObservingDataSource;
- (void)_tui_stopObservingDataSource;
- (void)_tui_dataSourceDidUpdate:(id)update;
- (void)_tui_updateCurrentViewModel;
- (void)updateImageFromViewModel;
- (void)currentViewModelWillChange:(id)change;
- (void)currentViewModelDidChange:(id)change;

@end

#endif /* TUIUserBannerImageView_h */

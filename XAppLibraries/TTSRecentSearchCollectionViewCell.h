//
#ifndef TTSRecentSearchCollectionViewCell_h
#define TTSRecentSearchCollectionViewCell_h
@import Foundation;

#include "TTSRecentSearchViewModel.h"

@class TFNCollectionViewCell, TFSTwitterUserPresenceInfo, TIPImagePipeline, UIImageView, UILabel, UIStackView, UIView;
@protocol TTSAvatarImageView, TTSAvatarPresenceView, TTSExternalViewProviderContext, TTSRecentSearchCollectionItemAdapterContext, TTSRecentSearchCollectionViewCellContext, TTSUserBadgesImageView;

@interface TTSRecentSearchCollectionViewCell : TFNCollectionViewCell

@property (retain, nonatomic) UIView *imageToTextSpacerView;
@property (retain, nonatomic) UIView<TTSAvatarImageView> *avatarImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *subtextLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIImageView<TTSUserBadgesImageView> *badgesImageView;
@property (retain, nonatomic) UIView<TTSAvatarPresenceView> *presenceImageView;
@property (retain, nonatomic) UIView *avatarContainerView;
@property (retain, nonatomic) id userPresenceObserver;
@property (retain, nonatomic) TFSTwitterUserPresenceInfo *presenceInfo;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (retain, nonatomic) TTSRecentSearchViewModel *viewModel;
@property (retain, nonatomic) id <TTSRecentSearchCollectionViewCellContext> cellContext;
@property (retain, nonatomic) id <TTSRecentSearchCollectionItemAdapterContext> itemAdapterContext;
@property (retain, nonatomic) id <TTSExternalViewProviderContext> externalViewContext;

/* class methods */
+ (struct CGSize { double x0; double x1; })recentSearchCellSize;

/* instance methods */
- (void)cleanup;
- (void)setUserPresenceInfo:(id)info;
- (void)configureUI;
- (void)updateAvatarPresenceWith:(id)with user:(id)user;
- (id)accessibilityLabel;

@end

#endif /* TTSRecentSearchCollectionViewCell_h */

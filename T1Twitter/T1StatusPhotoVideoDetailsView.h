//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusPhotoVideoDetailsView_h
#define T1StatusPhotoVideoDetailsView_h
@import Foundation;

#include "T1StatusPhotoVideoDetailsViewDelegate-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSArray, NSLayoutConstraint, TFNBadgesImageView, TFNTappableHighlightView, TFSTwitterEntityMedia, TIPImagePipeline, UILabel, UIStackView, UIView;

@interface T1StatusPhotoVideoDetailsView : UIView

@property (retain, nonatomic) TFSTwitterEntityMedia *mediaEntity;
@property (retain, nonatomic) id <TFSTwitterCanonicalUser> user;
@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) UIStackView *horizontalStackView;
@property (retain, nonatomic) TFNTappableHighlightView *highlightView;
@property (retain, nonatomic) UIView *horizontalContainerView;
@property (retain, nonatomic) UILabel *viewCountLabel;
@property (retain, nonatomic) UILabel *viewCountSeparatorLabel;
@property (retain, nonatomic) UILabel *fromLabel;
@property (retain, nonatomic) UILabel *fullNameLabel;
@property (retain, nonatomic) UILabel *usernameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) TFNBadgesImageView *badgeImageView;
@property (retain, nonatomic) UIView *spacerView;
@property (retain, nonatomic) NSArray *highlightViewConstraints;
@property (readonly, nonatomic) NSLayoutConstraint *horizontalStackViewWidthConstraint;
@property (retain, nonatomic) NSArray *userBadges;
@property (weak, nonatomic) id <T1StatusPhotoVideoDetailsViewDelegate> delegate;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (nonatomic) unsigned long long displayStyle;

/* class methods */
+ (struct CGSize { double x0; double x1; })preferredSizeForMaxWidth:(unsigned long long)width;
+ (struct CGSize { double x0; double x1; })preferredSizeForMaxWidth:(unsigned long long)width mediaEntity:(id)entity displayStyle:(unsigned long long)style featureSwitches:(id)switches;
+ (struct CGSize { double x0; double x1; })preferredVanityURLSizeForMaxWidth:(unsigned long long)width;
+ (_Bool)hasVisibleContentForMediaEntity:(id)entity displayStyle:(unsigned long long)style;
+ (_Bool)isTitleAndDescriptionEnabledForFeatureSwitches:(id)switches;
+ (_Bool)isTitleAndDescriptionEnabledNoImpressionForFeatureSwitches:(id)switches;
+ (id)visibleTitleForMediaEntity:(id)entity titleAndDescriptionEnabled:(_Bool)enabled;
+ (id)visibleDescriptionForMediaEntity:(id)entity titleAndDescriptionEnabled:(_Bool)enabled;
+ (id)prefixFontForDisplayStyle:(unsigned long long)style;

/* instance methods */
- (id)initWithDisplayStyle:(unsigned long long)style;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureWithMediaEntity:(id)entity featureSwitches:(id)switches;
- (void)configureWithUser:(id)user prefixString:(id)string featureSwitches:(id)switches;
- (void)configureWithAdString:(id)string featureSwitches:(id)switches;
- (void)configureWithVanityURLString:(id)urlstring showsAdDisclosure:(_Bool)disclosure featureSwitches:(id)switches;
- (void)reset;
- (void)_t1_setPrefixString:(id)string displayName:(id)name username:(id)username isVerified:(_Bool)verified isBlueVerified:(_Bool)verified identityType:(long long)type highlightedDesignatorInfo:(id)info titleString:(id)string descriptionString:(id)string featureSwitches:(id)switches;
- (void)_t1_didTapAttribution;
- (void)_t1_didTapView;
- (void)_t1_updateDisplayStyle;
- (id)_t1_userBadgesForFeatureSwitches:(id)switches isVerified:(_Bool)verified isBlueVerified:(_Bool)verified identityType:(long long)type highlightedDesignatorInfo:(id)info;
- (void)_t1_updateBadgeImageView;

@end

#endif /* T1StatusPhotoVideoDetailsView_h */

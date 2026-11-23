//
#ifndef ONBAddAvatarSuggestionView_h
#define ONBAddAvatarSuggestionView_h
@import Foundation;

#include "ONBAddAvatarDeanimatingImageView.h"
#include "ONBAddAvatarSuggestionViewDelegate-Protocol.h"
#include "ONBCarouselMenuView.h"
#include "ONBCarouselMenuViewDelegate-Protocol.h"

@class NSArray, NSObject, TFNFlexibleLayoutView, TFNTwitterAccount, UIColor, UIImage, UIImageView;
@protocol TFNFlexibleLayoutItem;

@interface ONBAddAvatarSuggestionView : TFNFlexibleLayoutView <ONBCarouselMenuViewDelegate> {
    /* instance variables */
    id <ONBAddAvatarSuggestionViewDelegate> _delegate;
    long long _lastTappedBackgroundItemIndex;
    long long _lastTappedForegroundItemIndex;
    ONBAddAvatarDeanimatingImageView *_fullSizeEmojiImageFetcherView;
    ONBCarouselMenuView *_backgroundCarousel;
    ONBCarouselMenuView *_foregroundCarousel;
    TFNTwitterAccount *_account;
    UIColor *_lastTappedBackgroundColor;
    UIImage *_lastTappedEmojiImage;
    UIImageView *_lastTappedView;
}

@property (readonly, nonatomic) NSArray *backgroundDataItems;
@property (readonly, nonatomic) NSArray *backgroundColors;
@property (readonly, nonatomic) NSArray *emojiDataItems;
@property (readonly, nonatomic) NSArray *emojiUrls;
@property (readonly, nonatomic) NSObject<TFNFlexibleLayoutItem> *cameraDataItem;

/* instance methods */
- (id)initWithAccount:(id)account delegate:(id)delegate;
- (void)resetSelections;
- (id)itemForCarouselMenuView:(id)view withIdentifier:(id)identifier atIndex:(long long)index;
- (long long)numberOfItemsInCarouselMenuView:(id)view withIdentifier:(id)identifier;
- (void)carouselMenuView:(id)view withIdentifier:(id)identifier didSelectItemAtIndex:(long long)index;
- (id)customHighlightViewInCarouselMenu:(id)menu withIdentifier:(id)identifier atIndex:(long long)index;
- (void)carouselMenuViewDidFinishScrolling:(id)scrolling withIdentifier:(id)identifier;
- (id)private_createCameraDataItem;
- (id)private_dataItemForImageView:(id)view withBorderColor:(id)color;
- (id)private_emojiDataItemWithURLString:(id)urlstring withAnimationFrameAtIndex:(long long)index;
- (id)private_backgroundDataItemWithColor:(id)color borderColor:(id)color;
- (void)private_fetchFullSizeEmojiWithURL:(id)url;
- (long long)private_emojiEntryForItemIndex:(long long)index;
- (long long)private_backgroundColorEntryForItemIndex:(long long)index;
- (id)private_emojiUrlForItemIndex:(long long)index;
- (id)private_backgroundColorForItemIndex:(long long)index;
- (void)private_notifyDelegateOfAvatarSelection;

@end

#endif /* ONBAddAvatarSuggestionView_h */

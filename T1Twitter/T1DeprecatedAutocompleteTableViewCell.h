//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1DeprecatedAutocompleteTableViewCell_h
#define T1DeprecatedAutocompleteTableViewCell_h
@import Foundation;

#include "TTSAutocompleteResultItem-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class NSString, TFNTableViewCell, UIImageView, UILabel;

@interface T1DeprecatedAutocompleteTableViewCell : TFNTableViewCell <TUIImageViewFetchHelperDelegate> {
    /* instance variables */
    UIImageView *_verifiedBadgeView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) NSString *accountID;
@property (readonly, nonatomic) id <TTSAutocompleteResultItem> autocompleteItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)defaultHeightForLayoutMetrics:(id)metrics;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)prepareForReuse;
- (void)setAutocompleteItem:(id)item featureSwitches:(id)switches;
- (id)calculatedLayoutMetrics;
- (void)layoutSubviews;
- (void)_resetImage;
- (void)_loadImage;
- (void)tui_fetchHelper:(id)helper readyToConfigureView:(id)view state:(long long)state;

@end

#endif /* T1DeprecatedAutocompleteTableViewCell_h */

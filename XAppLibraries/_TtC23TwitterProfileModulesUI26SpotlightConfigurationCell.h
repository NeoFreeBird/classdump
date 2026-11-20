//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23TwitterProfileModulesUI26SpotlightConfigurationCell_h
#define _TtC23TwitterProfileModulesUI26SpotlightConfigurationCell_h
@import Foundation;

@class NSString, TFNTableViewCell, TwitterProfileModulesUI.SpotlightConfigurationItem ?, _$sSo11UIStackViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo9TFNButtonCSg;

@interface TwitterProfileModulesUI.SpotlightConfigurationCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    TwitterProfileModulesUI.SpotlightConfigurationItem ? spotlightConfigurationItem;
    __C.UIStackView mainHorizontalStackView;
    __C.UIStackView titleAndSubtitleStackView;
    __C.UIStackView titleLineStackView;
    __C.UILabel titleLabel;
    __C.UIView featuredBadgeView;
    __C.UILabel subtitleLabel;
    __C.TFNButton? $__lazy_storage_$_arrowButton;
}

@property (nonatomic) _Bool isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)arrowButtonAction;

@end

#endif /* _TtC23TwitterProfileModulesUI26SpotlightConfigurationCell_h */

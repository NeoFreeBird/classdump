//
#ifndef _TtC23TwitterProfileModulesUI38SpotlightConfigurationModificationCell_h
#define _TtC23TwitterProfileModulesUI38SpotlightConfigurationModificationCell_h
@import Foundation;

@class TFNTableViewCell, TwitterProfileModulesUI.SpotlightConfigurationModificationItem ?, _$sSo11UIStackViewC, _$sSo9TFNButtonCSg;

@interface TwitterProfileModulesUI.SpotlightConfigurationModificationCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    TwitterProfileModulesUI.SpotlightConfigurationModificationItem ? spotlightConfigurationModificationItem;
    __C.UIStackView stackView;
    __C.TFNButton? $__lazy_storage_$_disableButton;
    __C.TFNButton? $__lazy_storage_$_featureButton;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)disableButtonAction;
- (void)featureButtonAction;

@end

#endif /* _TtC23TwitterProfileModulesUI38SpotlightConfigurationModificationCell_h */

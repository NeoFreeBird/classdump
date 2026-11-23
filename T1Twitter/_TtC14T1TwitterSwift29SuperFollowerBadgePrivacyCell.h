//
#ifndef _TtC14T1TwitterSwift29SuperFollowerBadgePrivacyCell_h
#define _TtC14T1TwitterSwift29SuperFollowerBadgePrivacyCell_h
@import Foundation;

@class TFNTableViewCell, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo8UISwitchC, _$sSo9TFNButtonC, _$sySbcSg, _$syycSg;

@interface T1TwitterSwift.SuperFollowerBadgePrivacyCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    __C.UILabel titleLabel;
    __C.UILabel subtitleLabel;
    __C.UISwitch accessorySwitch;
    ((Swift.Bool) -> ())? accessorySwitchHandler;
    __C.UILabel disclaimerLabel;
    __C.TFNButton disclaimerLearnMoreButton;
    (() -> ())? disclaimerLearnMoreButtonHandler;
    __C.UIView disclaimerContainer;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)accessorySwitchValueChanged:(id)changed;
- (void)disclaimerLearnMoreButtonTriggered:(id)triggered;

@end

#endif /* _TtC14T1TwitterSwift29SuperFollowerBadgePrivacyCell_h */

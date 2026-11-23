//
#ifndef _TtC29TwitterOnboardingFeatureSwift34OnboardingChoiceSelectionBoxedCell_h
#define _TtC29TwitterOnboardingFeatureSwift34OnboardingChoiceSelectionBoxedCell_h
@import Foundation;

@class Swift.Bool, TFNTableViewCell, _$sSo19TFNCheckmarkControlC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface TwitterOnboardingFeatureSwift.OnboardingChoiceSelectionBoxedCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    __C.UIView containerView;
    __C.TFNCheckmarkControl checkmarkImageView;
    __C.UILabel titleLabel;
    __C.UILabel detailLabel;
    Swift.Bool isChecked;
}

@property (nonatomic) unsigned long long accessibilityTraits;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)prepareForReuse;

@end

#endif /* _TtC29TwitterOnboardingFeatureSwift34OnboardingChoiceSelectionBoxedCell_h */

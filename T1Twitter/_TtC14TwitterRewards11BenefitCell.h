//
#ifndef _TtC14TwitterRewards11BenefitCell_h
#define _TtC14TwitterRewards11BenefitCell_h
@import Foundation;

@class TFNTableViewCell, TwitterRewards.BenefitView, TwitterRewards.BenefitViewModel ?;

@interface TwitterRewards.BenefitCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    TwitterRewards.BenefitViewModel ? viewModel;
    TwitterRewards.BenefitView benefitView;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14TwitterRewards11BenefitCell_h */

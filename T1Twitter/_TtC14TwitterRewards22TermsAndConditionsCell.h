//
#ifndef _TtC14TwitterRewards22TermsAndConditionsCell_h
#define _TtC14TwitterRewards22TermsAndConditionsCell_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class TFNTableViewCell, TwitterRewards.TermsAndConditionsView ?;

@interface TwitterRewards.TermsAndConditionsCell : TFNTableViewCell <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    TwitterRewards.TermsAndConditionsView ? $__lazy_storage_$_termsAndConditionsView;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14TwitterRewards22TermsAndConditionsCell_h */

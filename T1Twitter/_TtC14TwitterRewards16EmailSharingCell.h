//
#ifndef _TtC14TwitterRewards16EmailSharingCell_h
#define _TtC14TwitterRewards16EmailSharingCell_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class TFNTableViewCell, TwitterRewards.EmailSharingView ?;

@interface TwitterRewards.EmailSharingCell : TFNTableViewCell <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    TwitterRewards.EmailSharingView ? $__lazy_storage_$_emailSharingView;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14TwitterRewards16EmailSharingCell_h */

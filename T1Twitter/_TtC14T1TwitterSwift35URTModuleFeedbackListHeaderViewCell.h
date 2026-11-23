//
#ifndef _TtC14T1TwitterSwift35URTModuleFeedbackListHeaderViewCell_h
#define _TtC14T1TwitterSwift35URTModuleFeedbackListHeaderViewCell_h
@import Foundation;

@class T1TwitterSwift.FeedbackListHeaderView ?, T1TwitterSwift.ModuleSeparatorView, TFNTableViewCell, _$sSo18NSLayoutConstraintC;

@interface T1TwitterSwift.URTModuleFeedbackListHeaderViewCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    T1TwitterSwift.ModuleSeparatorView separatorView;
    T1TwitterSwift.FeedbackListHeaderView ? customHeaderView;
    __C.NSLayoutConstraint separatorHeightConstraint;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwift35URTModuleFeedbackListHeaderViewCell_h */

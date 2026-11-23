//
#ifndef _TtC14T1TwitterSwiftP33_DBDD21BC51BAD9016628985D765CF2F128URTTimelineTweetComposerCell_h
#define _TtC14T1TwitterSwiftP33_DBDD21BC51BAD9016628985D765CF2F128URTTimelineTweetComposerCell_h
@import Foundation;

@class TFNTableViewCell;

@interface T1TwitterSwift.(URTTimelineTweetComposerCell in _DBDD21BC51BAD9016628985D765CF2F1) : TFNTableViewCell { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *connectorView;
    NSNumber"16@0:8 *avatarView;
    NSNumber"16@0:8 *button;
    NSNumber"16@0:8 *tapActionBlock;
    NSNumber"16@0:8 *isPrecededByAncestor;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)didTapButtonWithSender:(id)sender;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwiftP33_DBDD21BC51BAD9016628985D765CF2F128URTTimelineTweetComposerCell_h */

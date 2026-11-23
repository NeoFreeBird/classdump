//
#ifndef _TtC10JetfuelSDK9ErrorCell_h
#define _TtC10JetfuelSDK9ErrorCell_h
@import Foundation;

@class JetfuelSDK.ErrorCellDelegate ?, UITableViewCell, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface JetfuelSDK.ErrorCell : UITableViewCell { // (Swift)
    /* instance variables */
    JetfuelSDK.ErrorCellDelegate ? delegate;
    __C.UILabel errorLabel;
    __C.UIImageView errorIcon;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)didTapCell;

@end

#endif /* _TtC10JetfuelSDK9ErrorCell_h */

//
#ifndef _TtC14T1TwitterSwift45ConversationDeamplificationShowMoreThreadCell_h
#define _TtC14T1TwitterSwift45ConversationDeamplificationShowMoreThreadCell_h
@import Foundation;

@class T1TwitterSwift.ConversationDeamplificationShowMoreThreadCell.Style, T1TwitterSwift.ConversationDeamplificationShowMoreThreadCellViewModel ?, TFNTextCell, _$sSo23UIActivityIndicatorViewC;

@interface T1TwitterSwift.ConversationDeamplificationShowMoreThreadCell : TFNTextCell { // (Swift)
    /* instance variables */
    __C.UIActivityIndicatorView loadingIndicatorView;
    T1TwitterSwift.ConversationDeamplificationShowMoreThreadCell.Style style;
    T1TwitterSwift.ConversationDeamplificationShowMoreThreadCellViewModel ? viewModel;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

#endif /* _TtC14T1TwitterSwift45ConversationDeamplificationShowMoreThreadCell_h */

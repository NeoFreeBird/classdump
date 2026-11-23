//
#ifndef _TtC14T1TwitterSwift30ConversationShowMoreThreadCell_h
#define _TtC14T1TwitterSwift30ConversationShowMoreThreadCell_h
@import Foundation;

@class Swift.Bool, TFNTextCell, _$sSSSg, _$sSo23UIActivityIndicatorViewC;

@interface T1TwitterSwift.ConversationShowMoreThreadCell : TFNTextCell { // (Swift)
    /* instance variables */
    Swift.String? actionText;
    Swift.Bool loading;
    __C.UIActivityIndicatorView loadingIndicatorView;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (_Bool)swipeActionAnimationsSupported;

@end

#endif /* _TtC14T1TwitterSwift30ConversationShowMoreThreadCell_h */

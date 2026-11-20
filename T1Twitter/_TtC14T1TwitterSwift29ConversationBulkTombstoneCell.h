//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift29ConversationBulkTombstoneCell_h
#define _TtC14T1TwitterSwift29ConversationBulkTombstoneCell_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.ConversationBulkTombstoneCell _$scSg ->, TFNTextCell, _$sSSSg, _$sSo12CAShapeLayerC, _$sSo23UIActivityIndicatorViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo8UIButtonC;

@interface T1TwitterSwift.ConversationBulkTombstoneCell : TFNTextCell { // (Swift)
    /* instance variables */
    Swift.String? actionText;
    Swift.String? labelText;
    Swift.Bool loading;
    Swift.Bool displayRetryableError;
    T1TwitterSwift.ConversationBulkTombstoneCell _$scSg -> buttonAction;
    __C.UIButton button;
    __C.UIActivityIndicatorView loadingIndicatorView;
    __C.CAShapeLayer frameLayer;
    __C.UIView containerView;
    __C.UILabel label;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)buttonTapped:(id)tapped;

@end

#endif /* _TtC14T1TwitterSwift29ConversationBulkTombstoneCell_h */

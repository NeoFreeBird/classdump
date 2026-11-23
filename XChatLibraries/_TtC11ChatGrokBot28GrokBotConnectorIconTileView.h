//
#ifndef _TtC11ChatGrokBot28GrokBotConnectorIconTileView_h
#define _TtC11ChatGrokBot28GrokBotConnectorIconTileView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSSSg, _$sSo11UIImageViewC;

@interface ChatGrokBot.GrokBotConnectorIconTileView : UIView { // (Swift)
    /* instance variables */
    Swift.String? iconURL;
    Swift.Bool isOutlined;
    Swift.Bool logoFillsTile;
    __C.UIImageView glyphView;
    __C.UIImageView logoView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot28GrokBotConnectorIconTileView_h */

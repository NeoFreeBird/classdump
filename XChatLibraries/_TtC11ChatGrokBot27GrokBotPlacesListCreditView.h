//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot27GrokBotPlacesListCreditView_h
#define _TtC11ChatGrokBot27GrokBotPlacesListCreditView_h
@import Foundation;

@class UIView, _$s10Foundation3URLVMn ?, _$s10Foundation3URLVMn _$scSg ->, _$sSo11UIImageViewC, _$sSo9UIControlC, __C.CGSize, __C.UIEdgeInsets;

@interface ChatGrokBot.GrokBotPlacesListCreditView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL _$scSg -> onOpenLink;
    __C.UIControl logoControl;
    __C.UIImageView logoView;
    nominal type descriptor for Foundation.URL ? homeURL;
    __C.CGSize logoSize;
    __C.UIEdgeInsets padding;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot27GrokBotPlacesListCreditView_h */

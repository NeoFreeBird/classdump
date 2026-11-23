//
#ifndef _TtC11ChatGrokBot24GrokBotShoppingPhotoView_h
#define _TtC11ChatGrokBot24GrokBotShoppingPhotoView_h
@import Foundation;

@class ChatGrokBot.GrokBotShoppingPhotoBackingView, ChatGrokBot.GrokBotShoppingPhotoFit, Swift.Bool, UIView, _$s10Foundation3URLVMn ?, _$s10Foundation3URLVMn _$scSg ->, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sScTyyt _$ss5NeverOMn ?, _$sSo11UIImageViewC, _$sSo7UIImageCSg, __C.CGSize;

@interface ChatGrokBot.GrokBotShoppingPhotoView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat containInset;
    nominal type descriptor for Foundation.URL _$scSg -> onLoadFailure;
    nominal type descriptor for CoreGraphics.CGFloat ? wholePhotoInset;
    ChatGrokBot.GrokBotShoppingPhotoBackingView backingView;
    __C.UIImageView imageView;
    __C.CGSize pixelSize;
    Swift.Bool samplesFit;
    __C.UIImage? backdrop;
    ChatGrokBot.GrokBotShoppingPhotoFit fit;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    nominal type descriptor for Foundation.URL ? url;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot24GrokBotShoppingPhotoView_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatNumber24EnterChatNumberTextField_h
#define _TtC10ChatNumber24EnterChatNumberTextField_h
@import Foundation;

@class NSString, UITextField, _$s12CoreGraphics7CGFloatVMn, _$sSS, _$sySScSg, _$syycSg;

@interface ChatNumber.EnterChatNumberTextField : UITextField { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onInsert;
    (() -> ())? onDeleteBackward;
    Swift.String digits;
    nominal type descriptor for CoreGraphics.CGFloat trailingCaretOffset;
}

@property (nonatomic, copy) NSString *accessibilityValue;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)position;
- (void)insertText:(id)text;
- (void)deleteBackward;
- (void)paste:(id)paste;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10ChatNumber24EnterChatNumberTextField_h */

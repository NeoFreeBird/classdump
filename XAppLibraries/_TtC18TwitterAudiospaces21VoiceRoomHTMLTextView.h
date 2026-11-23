//
#ifndef _TtC18TwitterAudiospaces21VoiceRoomHTMLTextView_h
#define _TtC18TwitterAudiospaces21VoiceRoomHTMLTextView_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class TwitterAudiospaces.VoiceRoomHTMLTextViewDelegate ?, UIColor, UIView, _$sSDyS2SG, _$sSSSg, _$sSo10UITextViewCSg, _$sSo6UIFontC, _$sSo7UIColorC;

@interface TwitterAudiospaces.VoiceRoomHTMLTextView : UIView <UITextViewDelegate> { // (Swift)
    /* instance variables */
    __C.UIFont font;
    __C.UIColor linkColor;
    TwitterAudiospaces.VoiceRoomHTMLTextViewDelegate ? delegate;
    Swift.String? htmlText;
    [Swift.String : Swift.String] htmlEntities;
    __C.UITextView? $__lazy_storage_$_textView;
}

@property (nonatomic, retain) UIColor *textColor;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC18TwitterAudiospaces21VoiceRoomHTMLTextView_h */

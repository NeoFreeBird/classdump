//
#ifndef _TtC9XArticles22ArticleTextLinkHandler_h
#define _TtC9XArticles22ArticleTextLinkHandler_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSObject, XArticles.ArticleTextLinkHandler.HandledTap ?, _$s10Foundation3URLVMn _$scSg ->, _$sSo22UITapGestureRecognizerCSg;

@interface XArticles.ArticleTextLinkHandler : NSObject <UITextViewDelegate, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL _$scSg -> onLinkTap;
    XArticles.ArticleTextLinkHandler.HandledTap ? lastHandledTap;
    __C.UITapGestureRecognizer? $__lazy_storage_$_tapRecognizer;
}

/* instance methods */
- (_Bool)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (id)textView:(id)view primaryActionForTextItem:(id)item defaultAction:(id)action;
- (id)textView:(id)view menuConfigurationForTextItem:(id)item defaultMenu:(id)menu;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)handleTap:(id)tap;
- (id)init;

@end

#endif /* _TtC9XArticles22ArticleTextLinkHandler_h */

//
#ifndef _TtC12MarkdownView11Highlighter_h
#define _TtC12MarkdownView11Highlighter_h
@import Foundation;

@class DispatchQueue, MarkdownView.Theme ?, MarkdownView.Theme _$scSg ->, Swift.Bool, _$sSS, _$sSo19NSRegularExpressionC, _$sSo7JSValueC, _$sSo8NSBundleC, _TtCs12_SwiftObject;

@interface MarkdownView.Highlighter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    DispatchQueue highlightQueue;
    MarkdownView.Theme ? theme;
    MarkdownView.Theme _$scSg -> themeChanged;
    Swift.Bool ignoreIllegals;
    __C.JSValue hljs;
    __C.NSBundle bundle;
    Swift.String htmlStart;
    Swift.String spanStart;
    Swift.String spanStartClose;
    Swift.String spanEnd;
    __C.NSRegularExpression htmlEscape;
}

@end

#endif /* _TtC12MarkdownView11Highlighter_h */

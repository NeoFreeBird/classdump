//
#ifndef _TtC18TwitterAudiospaces19TitleTextEditorView_h
#define _TtC18TwitterAudiospaces19TitleTextEditorView_h
@import Foundation;

@class TwitterAudiospaces.TitleTextEditorViewDelegate ?, TwitterTextEditor.TextEditorView, UIColor, UIView, _$sSh -> __C.TFSActiveTextRangeFlavor, _$sSi, _$sSo7UIColorCSg;

@interface TwitterAudiospaces.TitleTextEditorView : UIView { // (Swift)
    /* instance variables */
    TwitterTextEditor.TextEditorView textEditorView;
    TwitterAudiospaces.TitleTextEditorViewDelegate ? delegate;
    Swift.Int maximumTextCharacterCount;
    Swift.Set -> __C.TFSActiveTextRangeFlavor highlightingTextRangeFlavors;
    Swift.Int alertingMaximumTextCharacterCount;
}

@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIColor *highlightedTextColor;
@property (nonatomic, retain) UIColor *alertedTextBackgroundColor;
@property (nonatomic, retain) UIColor *placeholderTextColor;
@property (nonatomic) long long maximumNumberOfLinesForPlaceholderText;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)dynamicColorDidReload:(id)reload;

@end

#endif /* _TtC18TwitterAudiospaces19TitleTextEditorView_h */

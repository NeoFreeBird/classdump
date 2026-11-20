//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12TweetDetails50GrokTranslationCorrectionTrayContentViewController_h
#define _TtC12TweetDetails50GrokTranslationCorrectionTrayContentViewController_h
@import Foundation;

@class Grok.GrokTranslationCorrectionContext, Grok.GrokTranslationCorrectionValidator, Grok.GrokTranslationCorrectionValidator.Verdict, Swift.Bool, TweetDetails.GrokTranslationCorrectionTextBox, _$s13XDesignSystem16TrayFootnoteViewCMn, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSo7UILabelC, _$sySScSg;

@interface TweetDetails.GrokTranslationCorrectionTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onSubmit;
    Grok.GrokTranslationCorrectionContext context;
    Grok.GrokTranslationCorrectionValidator validator;
    __C.UILabel originalCaptionLabel;
    __C.UILabel originalLabel;
    __C.UILabel sourceLanguageLabel;
    __C.UILabel correctionCaptionLabel;
    TweetDetails.GrokTranslationCorrectionTextBox textBox;
    nominal type descriptor for XDesignSystem.TrayFootnoteView footnoteView;
    Swift.Bool hasAutoFocused;
    Grok.GrokTranslationCorrectionValidator.Verdict verdict;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12TweetDetails50GrokTranslationCorrectionTrayContentViewController_h */

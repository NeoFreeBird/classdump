//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GrokMarkdownUI24MarkdownContentViewModel_h
#define _TtC14GrokMarkdownUI24MarkdownContentViewModel_h
@import Foundation;

@class GrokMarkdownCore.MarkdownEnvironment, GrokMarkdownCore.MarkdownRenderContext, GrokMarkdownCore.MarkdownTheme, GrokMarkdownCore.TextAnimationStyle, GrokMarkdownUI.MarkdownComponentProvider, GrokMarkdownUI.MarkdownTextDecoratorFactory ?, GrokMarkdownUI.MarkdownTextSelectionMenuProvider ?, Swift.Bool, Swift.Bool _$s10Foundation3URLVMn _$scSg, _$s10Foundation3URLVMn _$scSg ->, _$s7Combine9PublishedVMn Swift.Bool, _$sSa -> GrokCardsModels.GrokCard, _$syycSg, _TtCs12_SwiftObject;

@interface GrokMarkdownUI.MarkdownContentViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GrokMarkdownCore.MarkdownEnvironment environment;
    GrokMarkdownCore.MarkdownRenderContext context;
    Swift.Array -> GrokCardsModels.GrokCard cards;
    Swift.Bool isVoice;
    nominal type descriptor for Foundation.URL _$scSg -> onLinkTap;
    GrokMarkdownCore.MarkdownTheme theme;
    Swift.Bool nominal type descriptor for Foundation.URL _$scSg allowsDetectedLink;
    nominal type descriptor for Combine.Published Swift.Bool _isStreaming;
    GrokMarkdownCore.TextAnimationStyle pacedTextAnimationStyle;
    GrokMarkdownCore.TextAnimationStyle textAnimationStyle;
    GrokMarkdownUI.MarkdownTextDecoratorFactory ? textDecoratorFactory;
    GrokMarkdownUI.MarkdownTextSelectionMenuProvider ? selectionMenuProvider;
    Swift.Bool allowsTextSelectionGestures;
    Swift.Bool tablesMeasureSynchronously;
    Swift.Bool rendersFirstTextSynchronously;
    (() -> ())? onContentSizeChanged;
    GrokMarkdownUI.MarkdownComponentProvider componentProvider;
}

@end

#endif /* _TtC14GrokMarkdownUI24MarkdownContentViewModel_h */

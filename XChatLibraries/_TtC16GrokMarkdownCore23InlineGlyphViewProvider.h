//
#ifndef _TtC16GrokMarkdownCore23InlineGlyphViewProvider_h
#define _TtC16GrokMarkdownCore23InlineGlyphViewProvider_h
@import Foundation;

@class NSTextAttachmentViewProvider, _$sSo6UIViewCyc, __C.CGRect _$sSo6UIFontCc;

@interface GrokMarkdownCore.InlineGlyphViewProvider : NSTextAttachmentViewProvider { // (Swift)
    /* instance variables */
    __C.CGRect _$sSo6UIFontCc glyphBounds;
    () -> __C.UIView makeView;
}

/* instance methods */
- (void)loadView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)attributes location:(id)location textContainer:(id)container proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fragment position:(struct CGPoint { double x0; double x1; })position;
- (id)initWithTextAttachment:(id)attachment parentView:(id)view textLayoutManager:(id)manager location:(id)location;

@end

#endif /* _TtC16GrokMarkdownCore23InlineGlyphViewProvider_h */

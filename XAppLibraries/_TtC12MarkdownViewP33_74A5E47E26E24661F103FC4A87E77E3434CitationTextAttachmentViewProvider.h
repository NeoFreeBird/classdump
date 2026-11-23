//
#ifndef _TtC12MarkdownViewP33_74A5E47E26E24661F103FC4A87E77E3434CitationTextAttachmentViewProvider_h
#define _TtC12MarkdownViewP33_74A5E47E26E24661F103FC4A87E77E3434CitationTextAttachmentViewProvider_h
@import Foundation;

@class NSTextAttachmentViewProvider;

@interface MarkdownView.(CitationTextAttachmentViewProvider in _74A5E47E26E24661F103FC4A87E77E34) : NSTextAttachmentViewProvider { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 title;
    @40@0:8:16@24@32 font;
}

/* instance methods */
- (void)loadView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)attributes location:(id)location textContainer:(id)container proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fragment position:(struct CGPoint { double x0; double x1; })position;
- (id)initWithTextAttachment:(id)attachment parentView:(id)view textLayoutManager:(id)manager location:(id)location;

@end

#endif /* _TtC12MarkdownViewP33_74A5E47E26E24661F103FC4A87E77E3434CitationTextAttachmentViewProvider_h */

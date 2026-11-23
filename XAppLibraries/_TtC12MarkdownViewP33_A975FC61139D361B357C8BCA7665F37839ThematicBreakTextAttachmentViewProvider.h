//
#ifndef _TtC12MarkdownViewP33_A975FC61139D361B357C8BCA7665F37839ThematicBreakTextAttachmentViewProvider_h
#define _TtC12MarkdownViewP33_A975FC61139D361B357C8BCA7665F37839ThematicBreakTextAttachmentViewProvider_h
@import Foundation;

@class NSTextAttachmentViewProvider;

@interface MarkdownView.(ThematicBreakTextAttachmentViewProvider in _A975FC61139D361B357C8BCA7665F378) : NSTextAttachmentViewProvider // (Swift)

/* instance methods */
- (id)initWithTextAttachment:(id)attachment parentView:(id)view textLayoutManager:(id)manager location:(id)location;
- (void)loadView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)attributes location:(id)location textContainer:(id)container proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fragment position:(struct CGPoint { double x0; double x1; })position;

@end

#endif /* _TtC12MarkdownViewP33_A975FC61139D361B357C8BCA7665F37839ThematicBreakTextAttachmentViewProvider_h */

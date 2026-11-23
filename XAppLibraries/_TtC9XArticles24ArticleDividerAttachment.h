//
#ifndef _TtC9XArticles24ArticleDividerAttachment_h
#define _TtC9XArticles24ArticleDividerAttachment_h
@import Foundation;

@class NSTextAttachment;

@interface XArticles.ArticleDividerAttachment : NSTextAttachment // (Swift)

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)container proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fragment glyphPosition:(struct CGPoint { double x0; double x1; })position characterIndex:(long long)index;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds textContainer:(id)container characterIndex:(long long)index;
- (id)initWithData:(id)data ofType:(id)type;

@end

#endif /* _TtC9XArticles24ArticleDividerAttachment_h */

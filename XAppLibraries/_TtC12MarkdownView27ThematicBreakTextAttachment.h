//
#ifndef _TtC12MarkdownView27ThematicBreakTextAttachment_h
#define _TtC12MarkdownView27ThematicBreakTextAttachment_h
@import Foundation;

@class NSTextAttachment;

@interface MarkdownView.ThematicBreakTextAttachment : NSTextAttachment // (Swift)

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)viewProviderForParentView:(id)view location:(id)location textContainer:(id)container;
- (id)initWithData:(id)data ofType:(id)type;

@end

#endif /* _TtC12MarkdownView27ThematicBreakTextAttachment_h */

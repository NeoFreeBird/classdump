//
#ifndef _TtC12MarkdownView22CitationTextAttachment_h
#define _TtC12MarkdownView22CitationTextAttachment_h
@import Foundation;

@class NSTextAttachment, _$s10Foundation3URLVMn _$scSg ->, _$sSS, _$sSo6UIFontC;

@interface MarkdownView.CitationTextAttachment : NSTextAttachment { // (Swift)
    /* instance variables */
    Swift.String title;
    __C.UIFont font;
    nominal type descriptor for Foundation.URL _$scSg -> onTap;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)viewProviderForParentView:(id)view location:(id)location textContainer:(id)container;
- (id)initWithData:(id)data ofType:(id)type;

@end

#endif /* _TtC12MarkdownView22CitationTextAttachment_h */

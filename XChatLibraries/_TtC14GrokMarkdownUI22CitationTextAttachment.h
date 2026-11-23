//
#ifndef _TtC14GrokMarkdownUI22CitationTextAttachment_h
#define _TtC14GrokMarkdownUI22CitationTextAttachment_h
@import Foundation;

@class NSTextAttachment, _$sSS, _$sSo6UIFontC, _$sSo7UIColorC;

@interface GrokMarkdownUI.CitationTextAttachment : NSTextAttachment { // (Swift)
    /* instance variables */
    Swift.String title;
    __C.UIFont font;
    Swift.String fullURL;
    Swift.String messageID;
    __C.UIColor pillBackgroundColor;
    __C.UIColor pillTextColor;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)viewProviderForParentView:(id)view location:(id)location textContainer:(id)container;
- (id)initWithData:(id)data ofType:(id)type;

@end

#endif /* _TtC14GrokMarkdownUI22CitationTextAttachment_h */

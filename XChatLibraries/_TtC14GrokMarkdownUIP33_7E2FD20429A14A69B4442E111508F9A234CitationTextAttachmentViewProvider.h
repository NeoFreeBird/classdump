//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GrokMarkdownUIP33_7E2FD20429A14A69B4442E111508F9A234CitationTextAttachmentViewProvider_h
#define _TtC14GrokMarkdownUIP33_7E2FD20429A14A69B4442E111508F9A234CitationTextAttachmentViewProvider_h
@import Foundation;

@class NSTextAttachmentViewProvider;

@interface GrokMarkdownUI.(CitationTextAttachmentViewProvider in _7E2FD20429A14A69B4442E111508F9A2) : NSTextAttachmentViewProvider { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 title;
    @40@0:8:16@24@32 font;
    @40@0:8:16@24@32 fullURL;
    @40@0:8:16@24@32 locationHash;
    @40@0:8:16@24@32 messageID;
    @40@0:8:16@24@32 pillBackgroundColor;
    @40@0:8:16@24@32 pillTextColor;
}

/* instance methods */
- (void)loadView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)attributes location:(id)location textContainer:(id)container proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fragment position:(struct CGPoint { double x0; double x1; })position;
- (id)initWithTextAttachment:(id)attachment parentView:(id)view textLayoutManager:(id)manager location:(id)location;

@end

#endif /* _TtC14GrokMarkdownUIP33_7E2FD20429A14A69B4442E111508F9A234CitationTextAttachmentViewProvider_h */

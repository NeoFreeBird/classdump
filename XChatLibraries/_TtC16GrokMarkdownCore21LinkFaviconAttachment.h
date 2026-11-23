//
#ifndef _TtC16GrokMarkdownCore21LinkFaviconAttachment_h
#define _TtC16GrokMarkdownCore21LinkFaviconAttachment_h
@import Foundation;

@class GrokMarkdownCore.RendererConfiguration.LinkFavicons, NSTextAttachment, _$s10Foundation3URLVMn, _$sSo6UIFontC;

@interface GrokMarkdownCore.LinkFaviconAttachment : NSTextAttachment { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL url;
    GrokMarkdownCore.RendererConfiguration.LinkFavicons favicons;
    __C.UIFont font;
}

@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds textContainer:(id)container characterIndex:(long long)index;
- (id)viewProviderForParentView:(id)view location:(id)location textContainer:(id)container;
- (id)initWithData:(id)data ofType:(id)type;

@end

#endif /* _TtC16GrokMarkdownCore21LinkFaviconAttachment_h */

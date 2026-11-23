//
#ifndef _TtC9XArticles23ArticleReaderEmbedStore_h
#define _TtC9XArticles23ArticleReaderEmbedStore_h
@import Foundation;

@class XArticles.ArticleContent, XArticles.ArticleReaderEmbedProviding, XArticles.ArticleReaderEmbedSizing _$s_So6UIViewCXcSgSg, XArticles.ArticleReaderItem _$scSg ->, _$s10Foundation3URLVMn _$scSg ->, _$sSDySi XArticles.ArticleReaderBodyContent, _$sSa -> XArticles.ArticleBodySection, _TtCs12_SwiftObject;

@interface XArticles.ArticleReaderEmbedStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XArticles.ArticleReaderItem _$scSg -> onHeightInvalidated;
    nominal type descriptor for Foundation.URL _$scSg -> onLinkTap;
    XArticles.ArticleReaderEmbedSizing _$s_So6UIViewCXcSgSg $__lazy_storage_$_attributionView;
    XArticles.ArticleReaderEmbedSizing _$s_So6UIViewCXcSgSg $__lazy_storage_$_authorFooterView;
    XArticles.ArticleContent content;
    Swift.Array -> XArticles.ArticleBodySection sections;
    XArticles.ArticleReaderEmbedProviding embedProvider;
    Swift.Dictionary empty-list Swift.Int XArticles.ArticleReaderBodyContent bodyContents;
}

@end

#endif /* _TtC9XArticles23ArticleReaderEmbedStore_h */

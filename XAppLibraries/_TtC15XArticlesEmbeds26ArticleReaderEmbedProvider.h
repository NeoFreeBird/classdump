//
#ifndef _TtC15XArticlesEmbeds26ArticleReaderEmbedProvider_h
#define _TtC15XArticlesEmbeds26ArticleReaderEmbedProvider_h
@import Foundation;

@class XArticlesData.ArticleContentResult, XArticlesData.ArticleEmbeddedPostLoader _$sSo16TFNTwitterStatusC, XArticlesEmbeds.ArticleReaderAppEmbedProviding, _$sSo11NSHashTableC XArticlesEmbeds.ArticleMediaEmbedView, _$sSo15T1UserViewModel_pSg, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC, _$ss5Int64VMn, _$sySicSg, _TtCs12_SwiftObject;

@interface XArticlesEmbeds.ArticleReaderEmbedProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    weak __C.UIViewController? presentingViewController;
    ((Swift.Int) -> ())? onSelectImage;
    __C.TFNTwitterAccount account;
    nominal type descriptor for Swift.Int64 sourceStatusID;
    XArticlesData.ArticleContentResult result;
    __C.T1UserViewModel? authorViewModel;
    XArticlesEmbeds.ArticleReaderAppEmbedProviding appEmbedProvider;
    XArticlesData.ArticleEmbeddedPostLoader __C.TFNTwitterStatus postLoader;
    __C.NSHashTable XArticlesEmbeds.ArticleMediaEmbedView mediaEmbedViews;
}

@end

#endif /* _TtC15XArticlesEmbeds26ArticleReaderEmbedProvider_h */

//
#ifndef _TtC9XArticles24ArticleSummaryController_h
#define _TtC9XArticles24ArticleSummaryController_h
@import Foundation;

@class Swift.Bool, XArticles.ArticleReaderEvent _$scSg ->, XArticles.ArticleSummaryProviding ?, XArticles.ArticleSummaryState, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$syycSg, _TtCs12_SwiftObject;

@interface XArticles.ArticleSummaryController : Swift._SwiftObject { // (Swift)
    /* instance variables */
    (() -> ())? onStateChange;
    XArticles.ArticleReaderEvent _$scSg -> onEvent;
    XArticles.ArticleSummaryState state;
    Swift.Bool isExpanded;
    Swift.String? cachedSummary;
    XArticles.ArticleSummaryProviding ? provider;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? task;
}

@end

#endif /* _TtC9XArticles24ArticleSummaryController_h */

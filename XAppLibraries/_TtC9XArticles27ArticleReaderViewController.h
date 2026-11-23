//
#ifndef _TtC9XArticles27ArticleReaderViewController_h
#define _TtC9XArticles27ArticleReaderViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XArticles.ArticleReaderActionButtonsView ?, XArticles.ArticleReaderCollectionViewDelegate, XArticles.ArticleReaderConfiguration, XArticles.ArticleReaderDelegate ?, XArticles.ArticleReaderEmbedStore, XArticles.ArticleReaderItemSizer, XArticles.ArticleReaderLayout, XArticles.ArticleSummaryCardView ?, XArticles.ArticleSummaryController, XArticles.ArticleTextRunTextCache, _$s5UIKit34UICollectionViewDiffableDataSourceCMn XArticles.ArticleReaderSection XArticles.ArticleReaderItem ?, _$sSh -> XArticles.ArticleReaderItem, _$sSo16UICollectionViewC;

@interface XArticles.ArticleReaderViewController : UIViewController { // (Swift)
    /* instance variables */
    XArticles.ArticleReaderDelegate ? delegate;
    Swift.Bool isAudioPlaying;
    XArticles.ArticleReaderConfiguration configuration;
    XArticles.ArticleReaderLayout layout;
    __C.UICollectionView collectionView;
    XArticles.ArticleReaderCollectionViewDelegate collectionViewDelegate;
    XArticles.ArticleReaderEmbedStore embedStore;
    XArticles.ArticleTextRunTextCache textCache;
    XArticles.ArticleReaderItemSizer sizer;
    XArticles.ArticleSummaryController summaryController;
    nominal type descriptor for UIKit.UICollectionViewDiffableDataSource XArticles.ArticleReaderSection XArticles.ArticleReaderItem ? $__lazy_storage_$_dataSource;
    XArticles.ArticleReaderActionButtonsView ? $__lazy_storage_$_actionButtonsView;
    XArticles.ArticleSummaryCardView ? $__lazy_storage_$_summaryCardView;
    Swift.Set -> XArticles.ArticleReaderItem pendingHeightInvalidations;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)fontSizeDidChange;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC9XArticles27ArticleReaderViewController_h */

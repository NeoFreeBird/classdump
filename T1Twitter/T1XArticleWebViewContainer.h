//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1XArticleWebViewContainer_h
#define T1XArticleWebViewContainer_h
@import Foundation;

#include "_TtC14T1TwitterSwift25PreloadedWebviewContainer.h"

@interface T1XArticleWebViewContainer : T1TwitterSwift.PreloadedWebviewContainer { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *status;
    NSNumber"16@0:8 *statusID;
    NSNumber"16@0:8 *delegate;
    NSNumber"16@0:8 *topContentInset;
    NSNumber"16@0:8 *bottomContentInset;
}

/* instance methods */
- (id)initWithAccount:(id)account status:(id)status username:(id)username statusID:(id)id fallbackURL:(id)url asXLink:(_Bool)xlink;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)share:(id)share;
- (void)webviewURLDidChangeTo:(id)to;
- (void)webviewCanGoBackDidChangeWithCanGoBack:(_Bool)back;
- (void)webviewScrollViewWillBeginDragging:(id)dragging;
- (void)webviewScrollViewDidScroll:(id)scroll;
- (void)webviewScrollViewDidEndDragging:(id)dragging;
- (void)webviewScrollViewDidEndDecelerating:(id)decelerating;

@end

#endif /* T1XArticleWebViewContainer_h */

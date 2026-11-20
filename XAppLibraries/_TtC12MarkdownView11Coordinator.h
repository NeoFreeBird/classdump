//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12MarkdownView11Coordinator_h
#define _TtC12MarkdownView11Coordinator_h
@import Foundation;

#include "WKNavigationDelegate-Protocol.h"

@class NSObject, _$s12CoreGraphics7CGFloatVMn, __C.CGSize _$scSg ->;

@interface MarkdownView.Coordinator : NSObject <WKNavigationDelegate> { // (Swift)
    /* instance variables */
    __C.CGSize _$scSg -> updateSize;
    nominal type descriptor for CoreGraphics.CGFloat scale;
}

/* instance methods */
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* _TtC12MarkdownView11Coordinator_h */

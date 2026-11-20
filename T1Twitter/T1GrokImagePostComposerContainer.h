//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1GrokImagePostComposerContainer_h
#define T1GrokImagePostComposerContainer_h
@import Foundation;

#include "_TtP4Grok17GrokAuthenticable_-Protocol.h"

@class _$s10TFNUISwift20TFNHostingControllerCN;

@interface T1GrokImagePostComposerContainer : type metadata for TFNUISwift.TFNHostingController <Grok.GrokAuthenticable> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *settingsProvider;
    NSNumber"16@0:8 *onSelectedImage;
}

/* instance methods */
- (id)authenticateRequestWithSourceRequest:(id)request parameters:(id)parameters;
- (id)initWithAccount:(id)account onSelectedImage:(id /* block */)image;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (id)scribePage;
- (id)scribe;

@end

#endif /* T1GrokImagePostComposerContainer_h */

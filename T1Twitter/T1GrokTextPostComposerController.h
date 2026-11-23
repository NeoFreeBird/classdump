//
#ifndef T1GrokTextPostComposerController_h
#define T1GrokTextPostComposerController_h
@import Foundation;

#include "_TtP4Grok17GrokAuthenticable_-Protocol.h"

@class _$s10TFNUISwift20TFNHostingControllerCN;

@interface T1GrokTextPostComposerController : type metadata for TFNUISwift.TFNHostingController <Grok.GrokAuthenticable> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *settingsProvider;
    NSNumber"16@0:8 *cancellables;
    NSNumber"16@0:8 *accountLinkEntryPresenter;
    NSNumber"16@0:8 *textComposeScribeContext;
}

/* instance methods */
- (id)authenticateRequestWithSourceRequest:(id)request parameters:(id)parameters;
- (id)initWithAccount:(id)account initialText:(id)text onAcceptRevision:(id /* block */)revision;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (id)scribeContext;
- (id)scribe;

@end

#endif /* T1GrokTextPostComposerController_h */

//
#ifndef T1WebViewRedirectTracker_h
#define T1WebViewRedirectTracker_h
@import Foundation;

#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TTALegacyWebViewPerspective-Protocol.h"

@class NSMutableArray, NSObject, NSString;

@interface T1WebViewRedirectTracker : NSObject {
    /* instance variables */
    NSMutableArray *_redirectURLInfos;
    unsigned long long _lastRedirectMachTime;
    _Bool _didComplete;
    _Bool _touchBeforeRedirect;
}

@property (readonly, nonatomic) id <TTALegacyWebViewPerspective> sourceStatus;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (readonly, copy, nonatomic) NSString *scribePage;
@property (readonly, copy, nonatomic) NSString *scribeComponent;

/* instance methods */
- (id)initWithSourceStatus:(id)status scribe:(id)scribe scribePage:(id)page scribeComponent:(id)component;
- (void)webViewDidStartLoad:(id)load;
- (void)webViewDidComplete;
- (void)scribeRedirects:(_Bool)redirects;
- (void)registerFirstTouch;

@end

#endif /* T1WebViewRedirectTracker_h */

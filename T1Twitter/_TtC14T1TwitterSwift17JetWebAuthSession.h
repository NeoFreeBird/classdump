//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift17JetWebAuthSession_h
#define _TtC14T1TwitterSwift17JetWebAuthSession_h
@import Foundation;

#include "ASWebAuthenticationPresentationContextProviding-Protocol.h"

@class NSObject, Swift.Bool, T1TwitterSwift.JetfuelViewController ?, _$sSSSg, _$sSo26ASWebAuthenticationSessionCSg;

@interface T1TwitterSwift.JetWebAuthSession : NSObject <ASWebAuthenticationPresentationContextProviding> { // (Swift)
    /* instance variables */
    __C.ASWebAuthenticationSession? activeSession;
    T1TwitterSwift.JetfuelViewController ? pendingSourceVC;
    Swift.String? consumedPath;
    Swift.Bool inFlight;
}

/* instance methods */
- (id)presentationAnchorForWebAuthenticationSession:(id)session;
- (id)init;
- (void)didReceiveCallbackPath:(id)path;

@end

#endif /* _TtC14T1TwitterSwift17JetWebAuthSession_h */

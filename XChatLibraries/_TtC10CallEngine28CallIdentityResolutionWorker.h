//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallEngine28CallIdentityResolutionWorker_h
#define _TtC10CallEngine28CallIdentityResolutionWorker_h
@import Foundation;

@class CallEngine.CallIdentityRequestStream, CallEngine.CallIdentityResolutionStream, CallModels.CallIdentityResolving, _$s11XFoundation11AsyncWorkerCN, _$sSd;

@interface CallEngine.CallIdentityResolutionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallModels.CallIdentityResolving identityResolver;
    Swift.Double retryDelay;
    CallEngine.CallIdentityRequestStream callIdentityRequestStream;
    CallEngine.CallIdentityResolutionStream callIdentityResolutionStream;
}

@end

#endif /* _TtC10CallEngine28CallIdentityResolutionWorker_h */

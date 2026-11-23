//
#ifndef _TtC29TwitterOnboardingFeatureSwift26OnboardingOAuth2URLHandler_h
#define _TtC29TwitterOnboardingFeatureSwift26OnboardingOAuth2URLHandler_h
@import Foundation;

#include "TFSURLProtocolHandler-Protocol.h"

@class NSObject, __C.URLProtocolRouterResult _$sSo33T1URLProtocolDefaultHandlerActionC_So22TNLParameterCollectionCtcSg;

@interface TwitterOnboardingFeatureSwift.OnboardingOAuth2URLHandler : NSObject <TFSURLProtocolHandler> { // (Swift)
    /* instance variables */
    __C.URLProtocolRouterResult _$sSo33T1URLProtocolDefaultHandlerActionC_So22TNLParameterCollectionCtcSg actionBlock;
}

/* instance methods */
- (unsigned long long)protocolRouter:(id)router handleURL:(id)url context:(id)context;
- (_Bool)protocolRouter:(id)router supportsScheme:(id)scheme;
- (id)init;

@end

#endif /* _TtC29TwitterOnboardingFeatureSwift26OnboardingOAuth2URLHandler_h */

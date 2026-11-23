//
#ifndef GADUnifiedMediationBannerAdRenderer_h
#define GADUnifiedMediationBannerAdRenderer_h
@import Foundation;

#include "GADAdRendering-Protocol.h"

@class NSObject, NSString;

@interface GADUnifiedMediationBannerAdRenderer : NSObject <GADAdRendering> {
    /* instance variables */
    id <GADAdRendering> _secondaryRenderer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;

@end

#endif /* GADUnifiedMediationBannerAdRenderer_h */

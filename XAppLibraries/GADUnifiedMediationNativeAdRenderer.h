//
#ifndef GADUnifiedMediationNativeAdRenderer_h
#define GADUnifiedMediationNativeAdRenderer_h
@import Foundation;

#include "GADAdRendering-Protocol.h"

@class NSObject, NSString;

@interface GADUnifiedMediationNativeAdRenderer : NSObject <GADAdRendering> {
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

#endif /* GADUnifiedMediationNativeAdRenderer_h */

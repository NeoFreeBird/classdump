//
#ifndef GADInlineInterstitialAdRenderer_h
#define GADInlineInterstitialAdRenderer_h
@import Foundation;

#include "GADAdLoadMonitor.h"
#include "GADAdRendering-Protocol.h"

@class NSObject, NSString;

@interface GADInlineInterstitialAdRenderer : NSObject <GADAdRendering> {
    /* instance variables */
    GADAdLoadMonitor *_adLoadMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;

@end

#endif /* GADInlineInterstitialAdRenderer_h */

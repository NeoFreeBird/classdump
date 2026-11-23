//
#ifndef _TtC14T1TwitterSwift12QuickPostBar_h
#define _TtC14T1TwitterSwift12QuickPostBar_h
@import Foundation;

#include "T1MediaInlineComposeControllerDelegate-Protocol.h"

@class NSObject, Swift.Bool, T1TwitterSwift.QuickPostBarExposure ?, _$sSo27TFNTwitterCompositionSource_So17TFNViewControllerCXcSgXw, _$sSo30T1MediaInlineComposeControllerCSg;

@interface T1TwitterSwift.QuickPostBar : NSObject <T1MediaInlineComposeControllerDelegate> { // (Swift)
    /* instance variables */
    weak (__C.TFNViewController & __C.TFNTwitterCompositionSource)? host;
    __C.T1MediaInlineComposeController? engine;
    T1TwitterSwift.QuickPostBarExposure ? exposure;
    Swift.Bool isAvailable;
}

/* class methods */
+ (_Bool)isEnabledNoImpressionWithFeatureSwitches:(id)switches;

/* instance methods */
- (double)inlineComposeController:(id)controller autocompleteStartingPositionInContainer:(id)container;
- (id)inlineComposeControllerInitialComposeString:(id)string;
- (id)inlineComposeControllerScribePage:(id)page;
- (id)inlineComposeControllerScribeSurface:(id)surface;
- (id)inlineComposerControllerComposition:(id)composition;
- (void)inlineComposeControllerWillSwitchToFullscreen:(id)fullscreen;
- (void)inlineComposeControllerDidReturnFromFullscreen:(id)fullscreen;
- (void)inlineComposeControllerDidEndEditing:(id)editing;
- (void)inlineComposeController:(id)controller didSendStatus:(id)status forComposition:(id)composition;
- (id)initWithHost:(id)host account:(id)account exposure:(id)exposure;
- (void)remove;
- (void)hostViewDidLayoutSubviews;
- (void)hostViewWillAppear:(_Bool)appear;
- (void)hostViewDidAppear;
- (void)hostViewWillDisappear:(_Bool)disappear;
- (void)hostFeatureSwitchesDidUpdate;
- (void)hostWillTransitionToTraitCollection:(id)collection withTransitionCoordinator:(id)coordinator;
- (void)applicationDidEnterBackground;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift12QuickPostBar_h */

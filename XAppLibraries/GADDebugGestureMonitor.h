//
#ifndef GADDebugGestureMonitor_h
#define GADDebugGestureMonitor_h
@import Foundation;

#include "GADAdContent.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, NSString, UIGestureRecognizer, UIView;

@interface GADDebugGestureMonitor : NSObject <UIGestureRecognizerDelegate> {
    /* instance variables */
    UIView *_view;
    GADAdContent *_ad;
    NSString *_adUnitID;
    NSString *_debugDialogString;
    UIGestureRecognizer *_gestureRecognizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)addMonitorToAd:(id)ad adConfiguration:(id)configuration view:(id)view;

/* instance methods */
- (id)initWithAd:(id)ad adView:(id)view adUnitID:(id)id debugDialogString:(id)string;
- (void)setView:(id)view;
- (void)presentDebugDialog;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;

@end

#endif /* GADDebugGestureMonitor_h */

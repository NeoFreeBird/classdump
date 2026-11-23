//
#ifndef GADNativeClickConfirmingViewMonitor_h
#define GADNativeClickConfirmingViewMonitor_h
@import Foundation;

#include "GADInternalNativeAd.h"
#include "GADObserverCollection.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSObject, NSString, UITapGestureRecognizer, UIView;

@interface GADNativeClickConfirmingViewMonitor : NSObject <UIGestureRecognizerDelegate> {
    /* instance variables */
    GADObserverCollection *_internalNativeAdObservers;
    UIView *_trackedView;
    GADInternalNativeAd *_internalNativeAd;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithInternalNativeAd:(id)ad;
- (void)handleTrackedView:(id)view;
- (void)handleUntrackedView:(id)view;
- (void)handleTap:(id)tap;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;

@end

#endif /* GADNativeClickConfirmingViewMonitor_h */

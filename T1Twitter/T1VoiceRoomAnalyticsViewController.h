//
#ifndef T1VoiceRoomAnalyticsViewController_h
#define T1VoiceRoomAnalyticsViewController_h
@import Foundation;

#include "T1WebViewController.h"

@interface T1VoiceRoomAnalyticsViewController : T1WebViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *dismissHandler;
}

/* instance methods */
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status entersReaderIfAvailable:(_Bool)available scribeComponent:(id)component scribeParameters:(id)parameters;
- (void)viewControllerDidDismissAnimated:(_Bool)animated;
- (id)initWithRootURL:(id)url account:(id)account sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;
- (id)initWithRootURL:(id)url account:(id)account shouldAuthenticate:(_Bool)authenticate shouldPresentAsNativePage:(_Bool)page sourceStatus:(id)status scribeComponent:(id)component scribeParameters:(id)parameters;

@end

#endif /* T1VoiceRoomAnalyticsViewController_h */

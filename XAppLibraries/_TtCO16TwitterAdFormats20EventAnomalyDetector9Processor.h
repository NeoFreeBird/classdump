//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCO16TwitterAdFormats20EventAnomalyDetector9Processor_h
#define _TtCO16TwitterAdFormats20EventAnomalyDetector9Processor_h
@import Foundation;

@class DispatchQueue, TwitterAdFormats.EventAnomalyDetector.Model, TwitterAdFormats.EventAnomalyDetector.StateMachineCache, _TtCs12_SwiftObject;

@interface TwitterAdFormats.EventAnomalyDetector.Processor : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterAdFormats.EventAnomalyDetector.StateMachineCache stateMachineCache;
    DispatchQueue queue;
    TwitterAdFormats.EventAnomalyDetector.Model model;
}

/* instance methods */
- (void)scribeEventReceived:(id)received;

@end

#endif /* _TtCO16TwitterAdFormats20EventAnomalyDetector9Processor_h */

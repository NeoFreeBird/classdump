//
#ifndef _TtC14T1TwitterSwift18XVideoViewObserver_h
#define _TtC14T1TwitterSwift18XVideoViewObserver_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"

@class _$s10JetfuelSDK21StoryDurationObserverCMn, _$sySd_SdtcSg, _TtCs12_SwiftObject;

@interface T1TwitterSwift.XVideoViewObserver : Swift._SwiftObject <TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    nominal type descriptor for JetfuelSDK.StoryDurationObserver durationObserver;
    ((Swift.Double, Swift.Double) -> ())? timeUpdateHandler;
}

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* _TtC14T1TwitterSwift18XVideoViewObserver_h */

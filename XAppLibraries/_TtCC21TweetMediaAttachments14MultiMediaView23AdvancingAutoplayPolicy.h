//
#ifndef _TtCC21TweetMediaAttachments14MultiMediaView23AdvancingAutoplayPolicy_h
#define _TtCC21TweetMediaAttachments14MultiMediaView23AdvancingAutoplayPolicy_h
@import Foundation;

#include "TAVUIAutoplaySortPolicy-Protocol.h"

@class _$s6XVideo20AutoplayUpdatePolicyCMn, _$sSaySo15TAVLoopObserverC_21TweetMediaAttachments05MultiD8Playable_So6UIViewCXctG, _$sSd, _$ss5ErrorMp _$s_So17TAVUIAutoplayable_ptc, _TtCs12_SwiftObject;

@interface TweetMediaAttachments.MultiMediaView.AdvancingAutoplayPolicy : Swift._SwiftObject <TAVUIAutoplaySortPolicy> { // (Swift)
    /* instance variables */
    Swift.Double loopTimeLimit;
    [(__C.TAVLoopObserver, __C.UIView & TweetMediaAttachments.MultiMediaPlayable)] playbackObservers;
    nominal type descriptor for XVideo.AutoplayUpdatePolicy autoplayUpdatePolicy;
    protocol descriptor for Swift.Error _$s_So17TAVUIAutoplayable_ptc errorCallback;
}

/* instance methods */
- (_Bool)autoplayablesAreInBestToWorstOrderWithFirstAutoplayable:(id)autoplayable secondAutoplayable:(id)autoplayable;

@end

#endif /* _TtCC21TweetMediaAttachments14MultiMediaView23AdvancingAutoplayPolicy_h */

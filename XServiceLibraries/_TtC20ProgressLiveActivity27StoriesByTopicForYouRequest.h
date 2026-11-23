//
#ifndef _TtC20ProgressLiveActivity27StoriesByTopicForYouRequest_h
#define _TtC20ProgressLiveActivity27StoriesByTopicForYouRequest_h
@import Foundation;

#include "TEKAPIRequest.h"

@class _$sSS, _$sSo22TNLParameterCollectionCSg;

@interface ProgressLiveActivity.StoriesByTopicForYouRequest : TEKAPIRequest { // (Swift)
    /* instance variables */
    Swift.String endpointPathValue;
    __C.TNLParameterCollection? serializedParameters;
}

/* instance methods */
- (long long)HTTPMethodValue;
- (id)endpointPath;
- (id)parameters;
- (id)init;

@end

#endif /* _TtC20ProgressLiveActivity27StoriesByTopicForYouRequest_h */

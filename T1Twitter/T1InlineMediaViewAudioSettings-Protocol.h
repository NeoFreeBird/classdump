//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1InlineMediaViewAudioSettings_Protocol_h
#define T1InlineMediaViewAudioSettings_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1InlineMediaViewAudioSettings <NSObject>

@required

@property (nonatomic) _Bool autoplayAudioEnabled;
@property (readonly, nonatomic) _Bool autoplayEnabled;

@optional

@end

#endif /* T1InlineMediaViewAudioSettings_Protocol_h */

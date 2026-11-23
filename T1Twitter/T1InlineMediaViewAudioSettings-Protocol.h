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

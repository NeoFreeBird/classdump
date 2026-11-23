//
#ifndef TASSpaceClipNuxDelegate_Protocol_h
#define TASSpaceClipNuxDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TASSpaceClipNuxDelegate <NSObject>

@required

/* required instance methods */
- (void)onSpaceClipNuxSettingsTap;

@optional

@end

#endif /* TASSpaceClipNuxDelegate_Protocol_h */

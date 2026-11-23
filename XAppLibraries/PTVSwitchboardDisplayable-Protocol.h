//
#ifndef PTVSwitchboardDisplayable_Protocol_h
#define PTVSwitchboardDisplayable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVSwitchboardDisplayable <NSObject>

@required

/* required instance methods */
- (void)displaySwitchboardAsset:(id)asset withAttributes:(struct PTVSwitchboardAssetAttributes { long long x0; double x1; })attributes;
- (void)updateSwitchboardAssetAttributes:(struct PTVSwitchboardAssetAttributes { long long x0; double x1; })attributes;
- (void)removeSwitchboardAsset;

@optional

@end

#endif /* PTVSwitchboardDisplayable_Protocol_h */

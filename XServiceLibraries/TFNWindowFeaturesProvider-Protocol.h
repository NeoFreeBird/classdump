//
#ifndef TFNWindowFeaturesProvider_Protocol_h
#define TFNWindowFeaturesProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UITraitCollection;

@protocol TFNWindowFeaturesProvider <NSObject>

@required

@property (readonly, nonatomic) UITraitCollection *effectiveWindowTraitCollection;
@property (copy, nonatomic) id /* block */ windowWillTransitionToSize;

@optional

@end

#endif /* TFNWindowFeaturesProvider_Protocol_h */

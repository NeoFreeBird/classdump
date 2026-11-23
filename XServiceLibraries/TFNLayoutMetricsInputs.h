//
#ifndef TFNLayoutMetricsInputs_h
#define TFNLayoutMetricsInputs_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSNumber, NSObject, NSValue, UIFont, UITraitCollection, UIWindow;

@interface TFNLayoutMetricsInputs : NSObject <NSCopying, NSMutableCopying> {
    /* instance variables */
    NSObject *_windowIdentifier;
    _Bool _mutable;
    unsigned long long _hash;
}

@property (readonly, nonatomic) double canvasWidth;
@property (readonly, weak, nonatomic) UIWindow *window;
@property (readonly, nonatomic) double visibleWindowHeight;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) UIFont *metricsFont;
@property (readonly, nonatomic) NSNumber *customInsetDisplayAreaForLineLength;
@property (readonly, nonatomic) NSValue *customDisplayAreaEdgeInsets;
@property (readonly, nonatomic) NSValue *customContentEdgeInsets;
@property (readonly, nonatomic) NSValue *customHorizontalSafeAreaInsets;
@property (readonly, nonatomic) NSNumber *customAccessoryWidth;
@property (readonly, nonatomic) NSValue *customAvatarSize;
@property (readonly, nonatomic) NSNumber *customBodyBelowAvatar;
@property (readonly, nonatomic) double customUsernameExtendedPadding;
@property (readonly, nonatomic) long long parametersVersion;

/* instance methods */
- (id)init;
- (_Bool)isExpired;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToLayoutMetricsInputs:(id)inputs;
- (_Bool)isEqualToLayoutMetricsInputsExcludingCanvasWidth:(id)width;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)_copyWithZone:(struct _NSZone *)zone mutable:(_Bool)_mutable;

@end

#endif /* TFNLayoutMetricsInputs_h */

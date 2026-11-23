//
#ifndef TFNLayoutMetricsParameters_h
#define TFNLayoutMetricsParameters_h
@import Foundation;

@class NSDictionary, NSObject, NSTimer;

@interface TFNLayoutMetricsParameters : NSObject {
    /* instance variables */
    NSTimer *_updateTimer;
    NSDictionary *_lineHeightMultipliers;
}

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) double idealEmsPerLine;
@property (readonly, nonatomic) double minimumEmsPerLine;
@property (readonly, nonatomic) _Bool insetForLineLengthInHorizontallyCompactEnvironment;
@property (readonly, nonatomic) double minimumLineLengthInset;
@property (readonly, nonatomic) double maximumMediaHeightFractionRegularWidth;
@property (readonly, nonatomic) double elementPaddingEms;
@property (readonly, nonatomic) double minimumElementPadding;
@property (readonly, nonatomic) double contentEdgeInsetsEms;
@property (readonly, nonatomic) double minimumContentEdgeInsets;
@property (readonly, nonatomic) double avatarHeightLHUnits;
@property (readonly, nonatomic) double xxSmallAvatarHeightLHUnits;
@property (readonly, nonatomic) double xSmallAvatarHeightLHUnits;
@property (readonly, nonatomic) double smallAvatarHeightLHUnits;
@property (readonly, nonatomic) double mediumAvatarHeightLHUnits;
@property (readonly, nonatomic) double largeAvatarHeightLHUnits;
@property (readonly, nonatomic) double vdlXXSmallAvatarHeightLHUnits;
@property (readonly, nonatomic) double vdlXSmallAvatarHeightLHUnits;
@property (readonly, nonatomic) double vdlSmallAvatarHeightLHUnits;
@property (readonly, nonatomic) double vdlMediumAvatarHeightLHUnits;
@property (readonly, nonatomic) double vdlLargeAvatarHeightLHUnits;
@property (readonly, nonatomic) double vdlXLargeAvatarHeightLHUnits;
@property (readonly, nonatomic) double vdlXXLargeAvatarHeightLHUnits;
@property (readonly, nonatomic) double minimumAvatarHeight;

/* class methods */
+ (id)sharedParameters;

/* instance methods */
- (id)init;
- (void)_cacheLineHeightMultipliers;
- (double)lineHeightMultiplierForHorizontalSizeClass:(long long)_class verticalSizeClass:(long long)_class;
- (void)tfx_idealEmsPerLineParameterChanged;
- (void)tfx_minimumEmsPerLineParameterChanged;
- (void)tfx_lineHeightMultiplierCompactWidthCompactHeightParameterChanged;
- (void)tfx_lineHeightMultiplierRegularWidthCompactHeightParameterChanged;
- (void)tfx_lineHeightMultiplierCompactWidthRegularHeightParameterChanged;
- (void)tfx_lineHeightMultiplierRegularWidthRegularHeightParameterChanged;
- (void)tfx_insetForLineLengthInHorizontallyCompactEnvironmentParameterChanged;
- (void)tfx_minimumLineLengthInsetParameterChanged;
- (void)tfx_maximumMediaHeightFractionRegularWidthParameterChanged;
- (void)tfx_elementPaddingEmsParameterChanged;
- (void)tfx_minimumElementPaddingParameterChanged;
- (void)tfx_contentEdgeInsetsEmsParameterChanged;
- (void)tfx_minimumContentEdgeInsetsParameterChanged;
- (void)tfx_avatarHeightLHUnitsParameterChanged;
- (void)tfx_xxSmallAvatarHeightLHUnitsParameterChanged;
- (void)tfx_xSmallAvatarHeightLHUnitsParameterChanged;
- (void)tfx_smallAvatarHeightLHUnitsParameterChanged;
- (void)tfx_mediumAvatarHeightLHUnitsParameterChanged;
- (void)tfx_vdlXXSmallAvatarHeightLHUnitsParameterChanged;
- (void)tfx_vdlXSmallAvatarHeightLHUnitsParameterChanged;
- (void)tfx_vdlSmallAvatarHeightLHUnitsParameterChanged;
- (void)tfx_vdlMediumAvatarHeightLHUnitsParameterChanged;
- (void)tfx_vdlLargeAvatarHeightLHUnitsParameterChanged;
- (void)tfx_vdlXLargeAvatarHeightLHUnitsParameterChanged;
- (void)tfx_vdlXXLargeAvatarHeightLHUnitsParameterChanged;
- (void)tfx_minimumAvatarHeightParameterChanged;
- (void)_coalesceUpdates;
- (void)_performUpdate;

@end

#endif /* TFNLayoutMetricsParameters_h */

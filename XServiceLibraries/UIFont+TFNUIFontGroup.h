//
#ifndef UIFont_TFNUIFontGroup_h
#define UIFont_TFNUIFontGroup_h
@import Foundation;

@interface UIFont (TFNUIFontGroup)

/* class methods */
+ (id)xds_spoofingResistantUsername_body;
+ (id)xds_spoofingResistantUsername_bodyMedium;
+ (id)xds_spoofingResistantUsername_bodyBold;
+ (id)xds_spoofingResistantUsername_subtext1;
+ (id)xds_spoofingResistantUsername_subtext1Medium;
+ (id)xds_spoofingResistantUsername_subtext1Bold;
+ (id)xds_spoofingResistantUsername_subtext2;
+ (id)xds_spoofingResistantUsername_subtext2Medium;
+ (id)xds_spoofingResistantUsername_subtext2Bold;
+ (id)xds_spoofingResistantUsername_subtext3;
+ (id)xds_spoofingResistantUsername_subtext3Medium;
+ (id)xds_spoofingResistantUsername_subtext3Bold;
+ (id)xds_spoofingResistantUsername_headline2;
+ (id)xds_monospaceFixed_body;
+ (id)xds_monospaceFixed_headline1;
+ (id)xds_tabularDigitsFontOfSize:(double)size weight:(double)weight;
+ (id)xds_content_body;
+ (id)xds_content_bodyBold;
+ (id)xdsDeprecated_contentFontWithOffset:(double)offset weight:(long long)weight;
+ (id)xdsDeprecated_large;
+ (id)xdsDeprecated_largeBold;
+ (id)xdsDeprecated_xLarge;
+ (id)xdsDeprecated_xLargeBold;
+ (id)xdsDeprecated_jumbo;
+ (id)xdsDeprecated_jumboBold;
+ (id)xdsDeprecated_title1;
+ (id)xdsDeprecated_title1Heavy;
+ (id)xdsDeprecated_title2;
+ (id)xdsDeprecated_title2Heavy;
+ (id)xdsDeprecated_title3;
+ (id)xdsDeprecated_title3Heavy;
+ (id)xdsDeprecated_title4;
+ (id)xdsDeprecated_title4Heavy;
+ (id)xdsDeprecated_customFontOfSize:(double)size weight:(long long)weight scalesWithDynamicType:(_Bool)type;
+ (id)xds_body;
+ (id)xds_bodyMedium;
+ (id)xds_bodyBold;
+ (id)xds_subtext1;
+ (id)xds_subtext1Medium;
+ (id)xds_subtext1Bold;
+ (id)xds_subtext2;
+ (id)xds_subtext2Medium;
+ (id)xds_subtext2Bold;
+ (id)xds_subtext3;
+ (id)xds_subtext3Medium;
+ (id)xds_subtext3Bold;
+ (id)xds_headline1;
+ (id)xds_headline1Medium;
+ (id)xds_headline1Bold;
+ (id)xds_headline1Heavy;
+ (id)xds_headline2;
+ (id)xds_headline2Medium;
+ (id)xds_headline2Bold;
+ (id)xds_headline2Heavy;
+ (id)xds_title1Medium;
+ (id)xds_title1Bold;
+ (id)xds_title2Medium;
+ (id)xds_title2Bold;
+ (id)xds_title3Medium;
+ (id)xds_title3Bold;
+ (id)xds_title4Medium;
+ (id)xds_title4Bold;
+ (id)xds_customFontOfSize:(double)size weight:(long long)weight scalesWithDynamicType:(_Bool)type;
+ (_Bool)tfn_isChirpFontEnabled;
+ (void)tfn_setContentFontSize:(double)size minimum:(double)minimum maximum:(double)maximum maximumDynamic:(double)dynamic;
+ (void)tfn_fontDidChange;
+ (void)tfn_setTransitionDestinationContentFontSize:(double)size;
+ (double)tfn_minimumFontSize;
+ (double)tfn_maximumFontSize;
+ (double)tfn_maximumDynamicFontSize;
+ (double)tfn_contentFontSize;
+ (double)tfn_dynamicFontSize;
+ (double)tfn_defaultFontSize;
+ (double)tfn_transitionDestinationContentFontSize;
+ (double)tfn_contentFontSizeOffsetBy:(double)by;
+ (double)tfn_dynamicFontSizeOffsetBy:(double)by;
+ (double)tfn_defaultFontSizeOffsetBy:(double)by;
+ (id)tfn_fontWithName:(id)name size:(double)size;
+ (id)_tfn_uncachedFontWithName:(id)name size:(double)size;
+ (id)_tfn_postScriptFontNameForFontName:(id)name size:(double)size;
+ (id)_tfn_fontNameForFontWeight:(double)weight;
+ (double)_tfn_variableFontWeightForName:(id)name;
+ (id)_tfn_variableFontAttributeForWeight:(double)weight size:(double)size;
+ (id)tfn_monospacedFontWithSize:(double)size weight:(double)weight;
+ (id)tfnuiFonts;
+ (void)tfnui_setCurrentFontGroupProvider:(id /* block */)provider;

/* instance methods */
- (double)tfn_renderedDescender;
- (double)tfn_topPadding;
- (double)tfn_minimumScaleFactorFromFont:(id)font;
- (double)tfn_heightForVerticalCentering;
- (double)_tfn_variableWeightFromFontDescriptor;
- (id)tfn_variableWeightFontByInterpolatingWithFont:(id)font byPercent:(double)percent;
- (id)tfn_semiboldVariantFont;
- (struct __CTFont *)tfn_CTFont;
- (id)tfn_withMonospacedDigits;
- (id)tfn_withAccountSpoofingPreventionStyle;
- (id)_tfn_withFontDescriptorFeatureSettingsAttribute:(id)attribute;
- (id)tfn_withObliqueness:(double)obliqueness;

@end

#endif /* UIFont_TFNUIFontGroup_h */

//
#ifndef NSObject_TFSAdditions_h
#define NSObject_TFSAdditions_h
@import Foundation;

@interface NSObject (TFSAdditions) <TFNFlexibleLayoutItem>

/* instance methods */
- (id)tfn_asItemDescription;
- (id)tfn_asPreviousSectionFooter;
- (id)tfn_asActionText;
- (id)tfn_asBareText;
- (id)tfn_asEmptyItem;
- (id)tfn_asBorderedText;
- (id)tfn_asDestructiveText;
- (id)_tfn_withStyle:(long long)style;
- (id)tfn_withValue1DetailText:(id)text;
- (id)tfn_withValue2DetailText:(id)text;
- (id)tfn_withSubtitleText:(id)text;
- (id)_tfn_withCellStyle:(long long)style detailText:(id)text;
- (id)tfn_withSize:(struct CGSize { double x0; double x1; })size;
- (id)tfn_withDetailText:(id)text;
- (id)tfn_withTextAlignment:(long long)alignment;
- (id)tfn_withFontProvider:(id /* block */)provider;
- (id)tfn_withDetailFontProvider:(id /* block */)provider;
- (id)tfn_withTextColor:(id)color;
- (id)tfn_withDetailTextColor:(id)color;
- (id)tfn_withDetailTextPadding:(double)padding;
- (id)tfn_withMultipleLines:(_Bool)lines;
- (id)tfn_withMultipleDetailLines:(_Bool)lines;
- (id)tfn_withHighlightEnabled:(_Bool)enabled;
- (id)tfn_withLineBreakMode:(long long)mode;
- (id)tfn_withAccessibilityLabel:(id)label;
- (id)tfn_withAccessibilityValue:(id)value;
- (id)tfn_withAccessibilityHint:(id)hint;
- (id)tfn_withDetailAccessibilityLabel:(id)label;
- (id)tfn_withDetailAccessibilityValue:(id)value;
- (id)tfn_withDetailAccessibilityHint:(id)hint;
- (id)tfn_withDataViewAdapter:(id)adapter;
- (id)tfn_withDataViewSectionController:(id)controller;
- (id)tfn_withObjectIdentifier:(id)identifier;
- (id)tfn_withShouldSelectAction:(id /* block */)action;
- (id)tfn_withShouldSelectTarget:(id)target action:(SEL)action;
- (id)tfn_withDidSelectAction:(id /* block */)action;
- (id)tfn_withDidSelectTarget:(id)target action:(SEL)action;
- (id)tfn_withWillDisplayAction:(id /* block */)action;
- (id)tfn_withWillDisplayTarget:(id)target action:(SEL)action;
- (id)tfn_withCellCustomization:(id /* block */)customization removeCustomization:(id /* block */)customization;
- (id)tfn_withCellCustomization:(id /* block */)customization;
- (id)tfn_withCellCustomizationTarget:(id)target action:(SEL)action;
- (id)tfn_withLayoutMetricsCustomization:(id /* block */)customization;
- (id)tfn_withLayoutMetricsCustomizationTarget:(id)target action:(SEL)action;
- (id)tfn_dataViewItem;
- (id)tfn_canonicalItem;
- (_Bool)tfn_isDataViewAdapter;
- (id)tfn_withAccessoryType:(long long)type;
- (id)tfn_withAccessoryVerticalAlignment:(long long)alignment;
- (id)tfn_withSeparatorType:(long long)type;
- (id)tfn_withBorderType:(long long)type;
- (id)tfn_flexibleLayoutView;
- (id)tfn_flexibleLayoutViewModel;
- (id /* block */)tfn_flexibleLayoutVisibilityCalculator;
- (id /* block */)tfn_flexibleLayoutFrameAnimator;
- (id /* block */)tfn_flexibleLayoutSizeCalculator;
- (id /* block */)tfn_flexibleLayoutFrameCalculator;
- (id /* block */)tfn_flexibleLayoutContentInsetsCalculator;
- (id /* block */)tfn_flexibleLayoutContentSpacingCalculator;
- (id /* block */)tfn_flexibleLayoutFrameListener;
- (id /* block */)tfn_flexibleLayoutVisibilityListener;
- (id)tfn_withFlexibleLayoutVisibilityCalculator:(id /* block */)calculator;
- (id)tfn_withFlexibleLayoutFrameAnimator:(id /* block */)animator;
- (id)tfn_withFlexibleLayoutSizeCalculator:(id /* block */)calculator;
- (id)tfn_withFlexibleLayoutFrameCalculator:(id /* block */)calculator;
- (id)tfn_withFlexibleLayoutContentInsetsCalculator:(id /* block */)calculator;
- (id)tfn_withFlexibleLayoutSpacingCalculator:(id /* block */)calculator;
- (id)tfn_withFlexibleLayoutSize:(struct CGSize { double x0; double x1; })size;
- (id)tfn_withFlexibleLayoutContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)tfn_withFlexibleLayoutSpacing:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })spacing;
- (id)tfn_withFlexibleLayoutVisibility:(long long)visibility;
- (id)tfn_withFlexibleLayoutFrameListener:(id /* block */)listener;
- (id)tfn_withFlexibleLayoutVisibilityListener:(id /* block */)listener;
- (id)_tfn_mutableItemForItem:(id)item;
- (void)tfn_startObservingFontSizeChanges;
- (void)tfn_stopObservingFontSizeChanges;
- (void)tfn_fontSizeChanged;
- (id)tfs_debugStrings;
- (id)tfs_generateDebugDescriptionFromPropertiesWithPreamble:(id)preamble;
- (id)tfs_safeCastAsClass:(Class)_class;
- (id)tfs_safeCastAsConformsToProtocol:(id)protocol;
- (id)tfs_safeCastAsRespondsToSelector:(SEL)selector;
- (void)tfs_callbackTarget:(id)target selector:(SEL)selector;
- (void)tfs_callbackTarget:(id)target selector:(SEL)selector sender:(id)sender event:(id)event;
- (id)tfs_descriptionWithPropertyKeys:(id)keys;
- (id)tfs_descriptionWithParams:(id)params;

@end

#endif /* NSObject_TFSAdditions_h */

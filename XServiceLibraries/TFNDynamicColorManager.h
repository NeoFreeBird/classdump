//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDynamicColorManager_h
#define TFNDynamicColorManager_h
@import Foundation;

#include "TFNDynamicColorProvider-Protocol.h"

@class NSHashTable, NSObject;

@interface TFNDynamicColorManager : NSObject {
    /* instance variables */
    NSHashTable *_viewsWithDynamicColors;
    NSHashTable *_nonViewObjectsWithDynamicColors;
    NSHashTable *_viewsWithDynamicColorProviders;
    _Bool _reloadingColors;
}

@property (retain, nonatomic) id <TFNDynamicColorProvider> dynamicColorProvider;
@property (nonatomic) _Bool overrideWindowsUserInterfaceStyle;

/* class methods */
+ (void)enableDynamicColor;
+ (_Bool)isDynamicColorEnabled;
+ (id)sharedColorManager;

/* instance methods */
- (id)init;
- (void)reloadDynamicColors;
- (id)dynamicColorProviderForView:(id)view;
- (void)setDynamicColorProvider:(id)provider forView:(id)view;
- (void)reloadDynamicColorsForView:(id)view;
- (id)_mapViewsToAssociatedObjects;
- (void)_addSetterInvocationsToArray:(id)array forView:(id)view associatedObjects:(id)objects;
- (void)_addSetterInvocationsToArray:(id)array forObject:(id)object;
- (void)_reloadDynamicColorsWithSetterInvocations:(id)invocations;
- (id)dynamicColorForObject:(id)object color:(id)color;
- (id)_dynamicColorObjectsContainingObject:(id)object;
- (id)_viewForObject:(id)object;
- (id)_dynamicColorForView:(id)view identifier:(id)identifier;
- (long long)preferredStatusBarStyleForObject:(id)object withDefault:(long long)_default;
- (long long)_statusBarStyleForView:(id)view;
- (void)_updatePreferredStatusBarStyles;
- (void)_updatePreferredStatusBarStyleForViewController:(id)controller;
- (_Bool)hasDarkBackgroundForObject:(id)object withDefault:(_Bool)_default;
- (_Bool)isHighContrastForObject:(id)object withDefault:(_Bool)_default;
- (_Bool)_query:(id /* block */)_query forObject:(id)object withDefault:(_Bool)_default;
- (_Bool)_query:(id /* block */)_query forView:(id)view withDefault:(_Bool)_default;
- (void)_view:(id)_view willMoveToSuperview:(id)superview;
- (id)_dynamicColorProvidersForView:(id)view fromSuperview:(id)superview;
- (void)_viewDidMoveToSuperview:(id)superview;
- (_Bool)_viewHasDynamicColorProvider:(id)provider;
- (long long)keyboardAppearanceForTextInputTraits:(id)traits;
- (void)didCreateWindow:(id)window;
- (void)_applyUserInterfaceStyleForDynamicColorProvider:(id)provider toView:(id)view;
- (id)recordSetColorInvocationForObject:(id)object declaringClass:(Class)_class selector:(SEL)selector adapter:(id)adapter arguments:(id)arguments;
- (id)_tfn_colorWithRestoredDynamicColorIdentifierForBackgroundColor:(id)color ofView:(id)view;

@end

#endif /* TFNDynamicColorManager_h */

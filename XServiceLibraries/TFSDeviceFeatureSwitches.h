//
#ifndef TFSDeviceFeatureSwitches_h
#define TFSDeviceFeatureSwitches_h
@import Foundation;

#include "TFSFeatureSwitchProvider-Protocol.h"

@class NSObject, NSSet;

@interface TFSDeviceFeatureSwitches : NSObject // (Swift)

@property (readonly, nonatomic) _Bool isMenuSheetAsMenuLongStringWarningsEnabled;
@property (readonly, nonatomic) long long menuSheetAsMenuLongStringWarningsExemptionPrefixLength;
@property (readonly, nonatomic) NSSet *menuSheetAsMenuLongStringWarningsExemptionPrefixes;
@property (nonatomic, readonly) id <TFSFeatureSwitchProvider> provider;
@property (nonatomic, readonly) id <TFSFeatureSwitchProvider> accessOnceProvider;

/* class methods */
+ (_Bool)isNeutralGrayPaletteEnabled;
+ (_Bool)isDeferBackgroundAppearanceChangesEnabled;
+ (id)sharedFeatureSwitches;
+ (id)didUpdateNotification;
+ (id)emptyFeatureSwitches;

/* instance methods */
- (id)initWithProvider:(id)provider;
- (id)init;

@end

#endif /* TFSDeviceFeatureSwitches_h */

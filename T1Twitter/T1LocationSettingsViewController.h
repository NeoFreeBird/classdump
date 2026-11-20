//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LocationSettingsViewController_h
#define T1LocationSettingsViewController_h
@import Foundation;

#include "TSAContext-Protocol.h"

@class TFNBooleanItem, TFNItemsDataViewController, TSASystemSettingsHelper;

@interface T1LocationSettingsViewController : TFNItemsDataViewController

@property (readonly, nonatomic) id <TSAContext> context;
@property (retain, nonatomic) TSASystemSettingsHelper *settingsHelper;
@property (nonatomic) long long inAppStatus;
@property (nonatomic) long long systemStatus;
@property (retain, nonatomic) TFNBooleanItem *inAppItem;
@property (retain, nonatomic) id systemItem;
@property (retain, nonatomic) id systemItemWithSettingsLink;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)viewDidLoad;
- (void)applicationWillEnterForegroundFromBackground:(id)background;
- (void)update:(_Bool)update;
- (void)_t1_refreshIfNecessary;
- (void)_t1_setPreciseLocationEnabled:(_Bool)enabled;

@end

#endif /* T1LocationSettingsViewController_h */

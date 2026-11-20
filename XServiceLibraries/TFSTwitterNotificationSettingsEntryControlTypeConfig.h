//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterNotificationSettingsEntryControlTypeConfig_h
#define TFSTwitterNotificationSettingsEntryControlTypeConfig_h
@import Foundation;

#include "TFSTwitterNotificationSettingsSelectList.h"

@class NSNumber, NSObject;

@interface TFSTwitterNotificationSettingsEntryControlTypeConfig : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) TFSTwitterNotificationSettingsSelectList *list;
@property (readonly, nonatomic) NSNumber *defaultSwitchValue;

/* class methods */
+ (id)configForOnOffWithDefault:(_Bool)_default;
+ (id)configForList:(id)list;
+ (id)configForTweetsControl;

/* instance methods */
- (id)initWithType:(unsigned long long)type onOffDefault:(id)_default list:(id)list;
- (id)init;

@end

#endif /* TFSTwitterNotificationSettingsEntryControlTypeConfig_h */

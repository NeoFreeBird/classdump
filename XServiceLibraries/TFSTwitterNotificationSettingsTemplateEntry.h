//
#ifndef TFSTwitterNotificationSettingsTemplateEntry_h
#define TFSTwitterNotificationSettingsTemplateEntry_h
@import Foundation;

#include "TFSTwitterNotificationSettingsEntryControlTypeConfig.h"
#include "TFSTwitterNotificationSettingsEntryFeatureSwitchConfig.h"

@class NSObject, NSString;

@interface TFSTwitterNotificationSettingsTemplateEntry : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, nonatomic) long long vitType;
@property (readonly, nonatomic) long long professionalType;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSString *disabledDescriptionText;
@property (readonly, nonatomic) TFSTwitterNotificationSettingsEntryControlTypeConfig *controlTypeConfig;
@property (readonly, nonatomic) TFSTwitterNotificationSettingsEntryFeatureSwitchConfig *featureSwitchConfig;
@property (readonly, nonatomic) NSString *defaultValue;
@property (readonly, nonatomic) NSString *defaultOnValue;

/* class methods */
+ (id)controlTypeConfigWithJSONDictionary:(id)jsondictionary error:(id *)error;
+ (id)featureSwitchConfigWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
- (id)initWithIdentifier:(id)identifier scribeComponent:(id)component name:(id)name vitType:(long long)type professionalType:(long long)type descriptionText:(id)text disabledDescriptionText:(id)text controlTypeConfig:(id)config featureSwitchConfig:(id)config;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)init;

@end

#endif /* TFSTwitterNotificationSettingsTemplateEntry_h */

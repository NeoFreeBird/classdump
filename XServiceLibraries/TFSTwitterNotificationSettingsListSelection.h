//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterNotificationSettingsListSelection_h
#define TFSTwitterNotificationSettingsListSelection_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterNotificationSettingsListSelection : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *descriptionText;

/* instance methods */
- (id)initWithKey:(id)key descriptionText:(id)text;

@end

#endif /* TFSTwitterNotificationSettingsListSelection_h */

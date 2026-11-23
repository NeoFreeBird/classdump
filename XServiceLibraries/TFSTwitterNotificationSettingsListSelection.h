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

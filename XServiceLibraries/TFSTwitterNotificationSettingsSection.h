//
#ifndef TFSTwitterNotificationSettingsSection_h
#define TFSTwitterNotificationSettingsSection_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TFSTwitterNotificationSettingsSection : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *header;
@property (readonly, copy, nonatomic) NSArray *entries;

/* instance methods */
- (id)init;
- (id)initWithJSONDictionary:(id)jsondictionary error:(out id *)error;

@end

#endif /* TFSTwitterNotificationSettingsSection_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

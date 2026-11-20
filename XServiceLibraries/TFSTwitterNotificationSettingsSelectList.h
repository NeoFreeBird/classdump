//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterNotificationSettingsSelectList_h
#define TFSTwitterNotificationSettingsSelectList_h
@import Foundation;

@class NSArray, NSObject, NSSet, NSString;

@interface TFSTwitterNotificationSettingsSelectList : NSObject

@property (readonly, nonatomic) _Bool allowsMultipleSelection;
@property (readonly, copy, nonatomic) NSArray *listItems;
@property (readonly, nonatomic) NSSet *defaultItemKeys;
@property (readonly, nonatomic) NSString *offDescription;
@property (readonly, nonatomic) NSSet *defaultSwitchedOnKeys;

/* instance methods */
- (id)initWithListItems:(id)items allowsMultipleSelection:(_Bool)selection defaultItemKeys:(id)keys offDescription:(id)description error:(out id *)error;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)init;

@end

#endif /* TFSTwitterNotificationSettingsSelectList_h */

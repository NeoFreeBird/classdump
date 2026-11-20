//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterUserPhoneInfoItem_h
#define TFSTwitterUserPhoneInfoItem_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterUserPhoneInfoItem : NSObject

@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) _Bool verified;
@property (readonly, nonatomic) unsigned long long type;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterUserPhoneInfoItem_h */

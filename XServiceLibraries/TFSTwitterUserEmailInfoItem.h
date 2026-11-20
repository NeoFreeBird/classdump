//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterUserEmailInfoItem_h
#define TFSTwitterUserEmailInfoItem_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterUserEmailInfoItem : NSObject

@property (readonly, copy, nonatomic) NSString *email;
@property (readonly, nonatomic) _Bool verified;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterUserEmailInfoItem_h */

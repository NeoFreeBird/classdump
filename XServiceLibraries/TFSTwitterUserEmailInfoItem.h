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

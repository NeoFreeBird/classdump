//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GrokShareDetailComponentConversationPreviewXPostData_h
#define GrokShareDetailComponentConversationPreviewXPostData_h
@import Foundation;

@class NSArray, NSNumber, NSObject, NSString;

@interface GrokShareDetailComponentConversationPreviewXPostData : NSObject

@property (retain, nonatomic) NSNumber *createdAtSecs;
@property (nonatomic) _Bool isBlueVerified;
@property (retain, nonatomic) NSString *affiliatedBadge;
@property (retain, nonatomic) NSString *verifiedType;
@property (retain, nonatomic) NSString *media;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *postId;
@property (retain, nonatomic) NSString *profileImageUrl;
@property (retain, nonatomic) NSString *screenName;
@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *deepSearchHeaders;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;

@end

#endif /* GrokShareDetailComponentConversationPreviewXPostData_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GrokShareDetailComponentConversationPreview_h
#define GrokShareDetailComponentConversationPreview_h
@import Foundation;

#include "GrokShareDetailComponentConversationPreviewXPostData.h"

@class NSArray, NSObject, NSString;

@interface GrokShareDetailComponentConversationPreview : NSObject

@property (retain, nonatomic) NSString *message;
@property (nonatomic) NSString *sender;
@property (retain, nonatomic) NSArray *mediaUrls;
@property (retain, nonatomic) GrokShareDetailComponentConversationPreviewXPostData *grokShareXPostData;
@property (copy, nonatomic) NSArray *deepSearchHeaders;

/* instance methods */
- (id)initWithMessage:(id)message sender:(id)sender mediaUrls:(id)urls grokShareXPostData:(id)data deepSearchHeaders:(id)headers;
- (_Bool)isGrok;
- (_Bool)isEqual:(id)equal;

@end

#endif /* GrokShareDetailComponentConversationPreview_h */

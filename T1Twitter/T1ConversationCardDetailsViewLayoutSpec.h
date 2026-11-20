//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ConversationCardDetailsViewLayoutSpec_h
#define T1ConversationCardDetailsViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface T1ConversationCardDetailsViewLayoutSpec : NSObject

/* class methods */
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsets;
+ (id)textModelForURL:(id)url shouldRenderFromRight:(_Bool)right;
+ (id)textModelForString:(id)string shouldRenderFromRight:(_Bool)right;
+ (id)textModelForString:(id)string color:(id)color shouldRenderFromRight:(_Bool)right;

@end

#endif /* T1ConversationCardDetailsViewLayoutSpec_h */

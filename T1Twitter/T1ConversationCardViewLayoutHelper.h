//
#ifndef T1ConversationCardViewLayoutHelper_h
#define T1ConversationCardViewLayoutHelper_h
@import Foundation;

@class NSObject;

@interface T1ConversationCardViewLayoutHelper : NSObject

/* class methods */
+ (struct CGSize { double x0; double x1; })imageSizeForViewModel:(id)model layoutMetrics:(id)metrics;
+ (struct CGSize { double x0; double x1; })_imageSizeForViewModel:(id)model contentWidth:(double)width;

/* instance methods */
- (id)layoutForCardViewModel:(id)model layoutMetrics:(id)metrics;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutImageForLayoutState:(id)state viewModel:(id)model contentWidth:(double)width atPoint:(struct CGPoint { double x0; double x1; })point;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutDetailsForLayoutState:(id)state viewModel:(id)model layoutMetrics:(id)metrics detailsFullWidth:(double)width atPoint:(struct CGPoint { double x0; double x1; })point verticallyCentered:(_Bool)centered;

@end

#endif /* T1ConversationCardViewLayoutHelper_h */

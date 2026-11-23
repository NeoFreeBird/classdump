//
#ifndef YOLayout_h
#define YOLayout_h
@import Foundation;

@class NSObject;

@interface YOLayout : NSObject

@property (copy) id /* block */ layoutBlock;
@property _Bool needsLayout;
@property _Bool needsSizing;
@property struct CGSize { double x0; double x1; } cachedSize;
@property struct CGSize { double x0; double x1; } cachedLayoutSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) _Bool sizing;

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignSize:(struct CGSize { double x0; double x1; })size inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect options:(unsigned long long)options;
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits view:(id)view options:(unsigned long long)options;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForView:(id)view size:(struct CGSize { double x0; double x1; })size inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect options:(unsigned long long)options;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForView:(id)view inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect options:(unsigned long long)options;
+ (id)layoutWithLayoutBlock:(id /* block */)block;
+ (void)setIsRTLEnvironment:(_Bool)rtlenvironment;
+ (id)isRTLEnvironmentNumber;

/* instance methods */
- (id)init;
- (id)initWithLayoutBlock:(id /* block */)block;
- (struct CGSize { double x0; double x1; })_layout:(struct CGSize { double x0; double x1; })_layout sizing:(_Bool)sizing;
- (void)setNeedsLayout;
- (struct CGSize { double x0; double x1; })layoutSubviews:(struct CGSize { double x0; double x1; })subviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setSize:(struct CGSize { double x0; double x1; })size inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect view:(id)view options:(unsigned long long)options;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame view:(id)view options:(unsigned long long)options;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame view:(id)view;
- (_Bool)isSizing;

@end

#endif /* YOLayout_h */

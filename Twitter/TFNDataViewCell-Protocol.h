//
#ifndef TFNDataViewCell_Protocol_h
#define TFNDataViewCell_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNMenuDisplayEvents-Protocol.h"
#include "TFNMenuSupport-Protocol.h"
#include "TFNReusableViewCacheContainer-Protocol.h"

@class NSIndexPath, TFNDataViewCellLayout, UIView;

@protocol TFNDataViewCell <NSObject, TFNReusableViewCacheContainer, TFNMenuSupport, TFNMenuDisplayEvents>

@required

@property (retain, nonatomic) TFNDataViewCellLayout *cellLayout;
@property (nonatomic) unsigned long long sectionBreaks;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ willDisplayInDataViewControllerBlock;
@property (copy, nonatomic) id /* block */ didDisplayInDataViewControllerBlock;
@property (copy, nonatomic) id /* block */ didDisplayWithZeroVisibilityInDataViewControllerBlock;
@property (copy, nonatomic) id /* block */ didEndDisplayingInDataViewControllerBlock;
@property (copy, nonatomic) id /* block */ didEndScrollingInDataViewControllerBlock;
@property (copy, nonatomic) id /* block */ didFirstDisplayInDataViewControllerBlock;
@property (copy, nonatomic) id /* block */ cleanupBlock;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) _Bool keyboardHighlighted;
@property (readonly, nonatomic) _Bool keyboardSelectable;

/* required instance methods */
- (void)willDisplayInDataViewController:(id)controller atIndexPath:(id)path;
- (void)didDisplayInDataViewController:(id)controller atIndexPath:(id)path visibleIntersection:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })intersection;
- (void)didDisplayWithZeroVisibilityInDataViewController:(id)controller atIndexPath:(id)path;
- (void)didEndDisplayingInDataViewController:(id)controller reason:(unsigned long long)reason;
- (void)didEndScrollingInDataViewController:(id)controller;
- (void)didFirstDisplayInDataViewController:(id)controller;
- (void)cleanup;
- (void)didKeyboardSelectInDataViewController:(id)controller atIndexPath:(id)path;
- (_Bool)isKeyboardHighlighted;
- (_Bool)isKeyboardSelectable;

@optional

@end

#endif /* TFNDataViewCell_Protocol_h */
